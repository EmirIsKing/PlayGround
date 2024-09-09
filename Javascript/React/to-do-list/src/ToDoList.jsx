import React, {useState} from "react"

function ToDoList(){

    const [tasks, setTasks] = useState([])
    const [newTask, setNewTask] = useState("")


    function handleInputTask(event){
        setNewTask(event.target.value)
    }


    function addTask(){
        if (newTask.trim() !== "") {
            setTasks(t => [...t, newTask])
            setNewTask("")
        }
    }

    function removeTask(index){
        const updatedTasks = tasks.filter((_, i) => i !== index)

        setTasks(updatedTasks)
    }

    function moveTaskUp(index){
        if (index > 0) {
            const updatedTasks = [...tasks];
            [updatedTasks[index], updatedTasks[index - 1]] = 
            [updatedTasks[index - 1], updatedTasks[index]];
            setTasks(updatedTasks)
        }
    }

    function moveTaskDown(index){
        if (index < tasks.length - 1) {
            const updatedTasks = [...tasks];
            [updatedTasks[index], updatedTasks[index + 1]] = 
            [updatedTasks[index + 1], updatedTasks[index]];
            setTasks(updatedTasks)
        }
    }

    return(
        <div className="listContainer">
            <h1>To-Do-List</h1>
            <div className="inputContainer">
            <input type="text" onChange={handleInputTask} className="inputTask" value={newTask} placeholder="Enter a task..."/>
            <button className="addTaskBtn" onClick={addTask}>Add</button>
            </div>
            <ol>
                {tasks.map((task, index) => 
                    <li key={index}>
                        <span className="text">{task}</span>
                        <button className="deleteBtn" onClick={() => removeTask(index)}>
                            Delete
                        </button>
                        <button 
                            className="moveBtn" 
                            onClick={() => moveTaskUp(index)}>
                            ☝️
                        </button>
                        <button className="moveBtn" onClick={() => moveTaskDown(index)}>
                            👇</button>
                    </li>
                )}
            </ol>
        </div>
    )

}

export default ToDoList