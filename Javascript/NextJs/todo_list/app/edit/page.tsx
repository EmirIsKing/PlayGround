'use client';

import { useEffect, useState } from "react";
import { useRouter, useSearchParams } from "next/navigation";
import { Textarea } from "@/components/ui/textarea";
import { Button } from '@/components/ui/button'
import Loader from "@/components/loader";

interface ToDoItem {
    todo: string;
  }
  

const Edit = () => {

    const [isLoading, setIsLoading] = useState(false)

    const searchParams = useSearchParams();
    const router = useRouter();
    const Id = searchParams.get('id');
    const [toDo, setToDo] = useState<ToDoItem>({
        todo: "",
    });

    useEffect(() => {
        const getPromptDetails = async () => {

            setIsLoading(true);
            const response = await fetch(`/api/more/${Id}`)
    
            
            if (response.ok) {
                const data = await response.json();
                setToDo({
                  todo: data.todo,
                });
            } else {
                console.error("Failed to fetch prompt details");
              }

              setIsLoading(false);
        }
    
        if(Id){ getPromptDetails()}
    }, [Id])
    
    const updatePrompt = async (e:any) => {
        
        setIsLoading(true)
        e.preventDefault();

        if (!Id) {
        return alert("Todo ID not found");
        }

        if(!Id){ return alert("todo ID not found")}
    
        try {
            const response = await fetch(`/api/more/${Id}`, {
                method: 'PATCH',
                headers: {
                  'Content-Type': 'application/json'
                },
                body: JSON.stringify({
                    todo: toDo.todo,
                  })
              });
    
          if (response.ok) {
            router.push('/');
          } else {
            console.error("Failed to update todo");
          }

        } catch (error) {
          console.log(error);
        } finally {
            setIsLoading(false)
        }
        
    }

    if(isLoading) return <Loader className="relative top-[40vh]"/>
  return (
    <div className="bg-blue-300 mt-8 py-5 rounded-md w-[400px] flex items-center flex-col">
        <form onSubmit={updatePrompt} className="w-[300px] flex flex-col gap-7">
        <Textarea value={toDo.todo} onChange={(e) => setToDo({...toDo, todo: e.target.value})}/>
        <Button type="submit">
            Save
        </Button>
        </form>
        
    </div>
  )
}

export default Edit