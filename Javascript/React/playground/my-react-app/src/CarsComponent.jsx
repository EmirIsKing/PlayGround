import React, {useState} from "react";

function CarsComponent(){

    const [cars, setCars] = useState([])
    const [carYear, setCarYear] = useState(new Date().getFullYear())
    const [carMake, setCarMake] = useState("")
    const [carModel, setCarModel] = useState("")


    function handleAddCar(){
        
        const newCar = {year: carYear, make: carMake, model: carModel}
        
        setCars(c => [...c, newCar])

        setCarYear(new Date().getFullYear())
        setCarMake("")
        setCarModel("")
    
    }

    function handleRemoveCar(index){
        setCars(c => c.filter((_, i) => i !== index))
    }

    function handleYearChange(event){
        setCarYear(event.target.value)
    }

    function handleMakeCahnge(event){
        setCarMake(event.target.value)
    }

    function handleModelChange(event){
        setCarModel(event.target.value)
    }


    return(
        <div>
            <h2>List of Car</h2>
            <ul>
                {cars.map((car, i) => 
                <li onClick={() => {handleRemoveCar(i)}} key={i}>{car.year} {car.make} {car.model}</li>)}
            </ul>

            <input type="number" value={carYear} onChange={handleYearChange}/><br/>
            <input type="text" value={carMake} onChange={handleMakeCahnge} placeholder="Enter car Make"/><br/>
            <input type="text" value={carModel} onChange={handleModelChange}/><br/>
            <button onClick={handleAddCar}>Add Car</button>



        </div>
    )
}

export default CarsComponent