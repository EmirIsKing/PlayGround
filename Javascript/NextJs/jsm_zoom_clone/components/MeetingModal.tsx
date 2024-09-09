
import React, { Children, ReactNode } from 'react'

import { Dialog, DialogContent, DialogDescription, DialogHeader, DialogTitle, DialogTrigger } from "@/components/ui/dialog"
  
import Image from 'next/image';
import { cn } from '@/lib/utils';
import { Button } from "@/components/ui/button"


interface MeetingModalProps {
    isOpen: boolean;
    onClose: () => void;
    title: string,
    className?: string;
    buttonText?: string;
    image?: string;
    children?: ReactNode;
    buttonIcon?: string;
    handleClick?: () => void;
}

const MeetingModal = ({ isOpen, children, onClose, buttonIcon, image, title, className, buttonText, handleClick } : MeetingModalProps) => {
  return (
    <Dialog open={isOpen} onOpenChange={onClose}>
        <DialogContent className='flex w-full max-w-[520px] flex-col gap-6 border-none
        bg-dark-1 px-6 py-9 text-white'>
            <div className='flex flex-col gap-6 items-center'>
                {image && (
                    <div className='flex flex-col gap-6'>
                        <Image src={image} alt="image"
                        width={72}
                        height={72}/>
                    </div>
                )}
                <h1 className={cn('text-3xl font-bold leading-[42px]', className)}>
                {title}  
                </h1>
                {children}
                <Button className='bg-blue-1 focus-visible:ring-0
                focus-visible:ring-offset-0' onClick={handleClick}>
                    {buttonIcon && (
                        <Image alt='button -con' src={buttonIcon}
                        width={13} height={13}/>
                    )} &nbsp;
                    {buttonText || 'Schedule Meeting'}
                </Button>
            </div>
        </DialogContent>
    </Dialog>
  )
}

export default MeetingModal