import { connectToDB } from "@/database/dbConnect";
import toDo from '@/models/todo'
import { NextRequest, NextResponse } from 'next/server';

interface Params {
    todo: string;
    id: string;
  }


export const DELETE = async (request: NextRequest, { params }: { params: Params }): Promise<NextResponse> => {
    try {
        await connectToDB();

        await toDo.findByIdAndDelete(params.id)

        return new NextResponse("todo has been deleted", { status: 200 })
    } catch (error) {
        return new NextResponse("Failed to delete todo", { status: 500 })
    }
}

export const PATCH = async (request: NextRequest, { params }: { params: Params }): Promise<NextResponse> => {
    const { todo } = await request.json();

    try {
        await connectToDB();

        const existingtoDo = await toDo.findOneAndUpdate({_id: params.id})

        if (!existingtoDo) {
            return new NextResponse("toDo not found", { status: 404 })
        }

        existingtoDo.todo = todo;

        await existingtoDo.save();

        return new NextResponse(JSON.stringify(existingtoDo), { status: 200 })

    } catch (error) {
        
        return new NextResponse(`Failed to update toDo: ${error}`, { status: 400})
        
    }
}

export const GET = async (request: NextRequest, { params }: { params: Params }): Promise<NextResponse> => {
  

    try {
        await connectToDB();

        const toDos = await toDo.findById(params.id)
    
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