import React, {useState, useEffect} from "react";

function ResizeComponent(){

    const [width, setWidth] = useState(0)
    const [height, setHeight] = useState(0)

    useEffect(() => {
        window.addEventListener("resize", handleResize)
        return () => {
            window.removeEventListener("resize", handleResize)
        }
    })

    useEffect(() => {
        document.title = `${width} x ${height}`
    }, [width, height])

    function handleResize(){
        setWidth(window.innerWidth)
        setHeight(window.innerHeight)
    }

    return(
        <div>
            <p>Width: {width}</p>
            <p>Height: {height}</p>
        </div>
    )
}

export default ResizeComponent

