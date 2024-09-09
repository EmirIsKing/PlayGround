import React from 'react'
import Image from 'next/image';


interface ToDoItem {
  todo: string;
  _id: string;
}



interface ToDoListProps {
    todo: ToDoItem;
    index: number;
    handleDelete: (todo: ToDoItem) => void;
    handleEdit: (todo: ToDoItem) => void;
}



const ToDoList = ({ todo, index, handleDelete, handleEdit }: ToDoListProps) => {
  return (
    <div className='bg-slate-400 rounded-sm flex items-center justify-between py-4 px-2 w-[90%] flex-wrap'>
        <p className='text-wrap'>{index+1}. {todo.todo}</p>
       <div className='flex gap-2'>
       <Image alt="edit" src="/edit.svg"
        height={20} width={20} className='hover:bg-slate-500 cursor-pointer'
        onClick={() => handleEdit && handleEdit(todo)}/>
        <Image alt="delete" src="/bin.svg"
        height={15} width={15} className='hover:bg-slate-500 cursor-pointer'
        onClick={() => handleDelete && handleDelete(todo)}/>
       </div>
    </div>
  )
}

export default ToDoList