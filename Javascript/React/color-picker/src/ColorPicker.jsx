import React, {useState} from "react"


function ColorPicker(){
    const [color, setColor] = useState("#e770ff")

    function handleColorChnage(event){
        setColor(event.target.value)
    }

    return(
        <div className="color-picker-container">
            <h1>Color Picker</h1>
            <div className="color-display" style={{background: color}}>
                <p style={{color: "black"}}>Selected Color: {color}</p>
            </div>
            <label style={{color: "black"}}>Select a Color: </label>
            <input type="color" value={color} onChange={handleColorChnage}/>
            
        </div>
    )
}

export default ColorPicker