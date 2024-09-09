import React from 'react'
import Image from 'next/image'

const Loader = () => {
  return (
    <div className='flex-center h-screen w-full'>
      <Image alt='loading'
      src="/icons/loading-circle.svg"
      width={50}
      height={50}/>  
    </div>
  )
}

export default Loader