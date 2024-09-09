

function Button(){

    const styles = {
        backgroundColor: "hsl(200, 100%, 50%)",
        color: "white",
        padding: "10px 20px",
        borderRadius: "5px",
        border: "none",
        cursor: "pointer",

    }

    let count = 0

    const handleClick = (e) => {
       e.target.textContent = "Ouch";
    }

    return(<button onDoubleClick={ (e) => handleClick(e)} style={styles}>Click Me</button>)
}

export default Button