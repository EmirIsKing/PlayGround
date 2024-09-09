import { cn } from '@/lib/utils'
import React from 'react'

interface LoaderProps {
  className?: string;
}

const Loader = ({className}: LoaderProps) => {
  return (
    <div className={cn("loader", className)}></div>

  )
}

export default Loader