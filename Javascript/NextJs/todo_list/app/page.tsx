"use client"

import React, { useEffect, useState } from 'react'
import { Input } from "@/components/ui/input"
import { Button } from '@/components/ui/button'
import ToDoList from '@/components/ToDoList'
import { useRouter } from 'next/navigation'
import Loader from '@/components/loader'


interface ToDoItem {
  todo: string;
  _id: string;
}

const todo = () => {

  const [toDo, setToDo] = useState("")
  const router = useRouter();
  const [isLoading, setIsLoading] = useState(false)


  //adding to-do
  const addToDO = async () => {
    try {
      setIsLoading(true)
      const response = await fetch('/api/todo', {
        method: 'POST',
        body: JSON.stringify({
          todo: toDo,
        })
      });

      if (!response.ok) {
        throw new Error(`Request failed with status ${response.status}`);
      }

      setToDo("")

    } catch (error:any) {
      console.log(error)
    }finally{
      setIsLoading(false)
    }
  }

//getting to-do
  useEffect(() => {
    const fetchToDo = async () => {
      setIsLoading(true)
      const response = await fetch(`/api/todo`);
      const data = await response.json();
      setToDoList(data);
      setIsLoading(false)
    }
  

    fetchToDo();

  }, []);

  const [toDoList, setToDoList] = useState<ToDoItem[]>([])

  //deleting to-do
  const handleDelete = async (todo: ToDoItem) =>{
    const hasConfirmed = confirm("Are you sure you want to delete this Item?");
    setIsLoading(true)

    if (hasConfirmed) {
      try {
        await fetch(`/api/more/${todo._id.toString()}`, {
          method: 'DELETE'
        });

        const filteredPosts = toDoList.filter((p) => p._id !== todo._id);
        setToDoList(filteredPosts);
      } catch (error) {
        console.log(error)
      }
    }
    setIsLoading(false)
  }


  const handleEdit = async (todo: ToDoItem) =>{

    router.push(`/edit?id=${todo._id}`)
    
  }


  return (
    <main className="pt-3 bg-gray-100 flex min-w-[400px] flex-col gap-5 h-screen items-center
    sm:min-w-[700px]">
        <div className='w-full bg-blue-300 flex justify-center'>
            <h1 className='p-16 font-bold text-xl'>TO DO LIST</h1>
        </div>
        <form onSubmit={addToDO} className="px-12 flex w-full items-center space-x-2">
        <Input required type="text" placeholder="Type Here" 
        onChange={(e) => setToDo(e.target.value)}
        value={toDo}/>
        <Button type="submit">Add</Button>
      </form>
      {isLoading ? (<Loader className="relative top-14"/>) : (<div className='flex flex-col w-full gap-3 items-center'>
        {toDoList.map((todo, index) => (
          <ToDoList key={index} handleDelete={handleDelete} handleEdit={handleEdit} todo={todo} index={index}/>
       ))}
       
      </div>)}
    </main>
  )
}

export default todo