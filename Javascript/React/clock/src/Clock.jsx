import { useState, useEffect } from 'react'

function Clock(){

    const [time, setTime] = useState(new Date())

    useEffect(() => {
        const intervalId = setInterval(() => {
          setTime(new Date())  
        }, 1000);

        return () => {
            clearInterval(intervalId)
        }
    }, [])

    function formatTime(){
        let hour = time.getHours()
        const min = time.getMinutes()
        const sec = time.getSeconds()
        const meridiem = hour >= 12 ? "PM" : "AM"
        hour = hour % 12 || 12
        return `${padZero(hour)}:${padZero(min)}:${padZero(sec)} ${meridiem}`
    }

    function padZero(number){
        return (number < 10 ? "0" : "") + number
    }

    return(
        <div className="clockContainer">
            <div className="clock">
                <span>{formatTime()}</span>
            </div>
        </div>
    )
}

export default Clock