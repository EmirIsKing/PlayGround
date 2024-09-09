import { connectToDB } from "@/database/dbConnect";
import toDo from '@/models/todo'
import { NextRequest, NextResponse } from 'next/server';


interface createToDo {
    todo: String;
}



export const POST = async (req: NextRequest): Promise<NextResponse> => {
    const { todo }: createToDo = await req.json();

    try {
        await connectToDB();

        const newtoDo = new toDo({ todo })

        await newtoDo.save();

        return new NextResponse(JSON.stringify(newtoDo), {
            status: 201
        })
    } catch (error) {

        return new NextResponse("Failed to create a new todo", {status: 500}) 
    }

}

export const GET = async (req: NextRequest): Promise<NextResponse> => {
  

    try {
        await connectToDB();

        const toDos = await toDo.find({});
    
        return new NextResponse(JSON.stringify(toDos), {
          status: 200,
          headers: {
            'Content-Type': 'application/json'
          }
        });
    } catch (error) {

        return new NextResponse("Failed to fetch todos", {status: 500}) 
    }

}

