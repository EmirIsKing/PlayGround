const temp = document.getElementById("temp");
const submitBtn = document.getElementById("submit");
let conTemp;
const celciusToFahrenheit = document.getElementById("tofahrenheit");
const fahrenheitToCelcius = document.getElementById("tocelcius");
let result = document.getElementById("result")




submitBtn.addEventListener("click", function(){
    conTemp = checkNumber(temp.value)
    if(conTemp == false){
        conTemp = `Enter a Number`
    } else if(celciusToFahrenheit.checked){
        conTemp = toFahrenheit(conTemp)
    } else if (fahrenheitToCelcius.checked){
        conTemp = toCelcius(conTemp)
    } else {
        conTemp = `Select a conversion`
    }
    
    result.textContent = conTemp

})

function toCelcius(fahrenheit){
    let cox = (fahrenheit - 32) * (5 / 9)
    cox = cox.toFixed(1) + "°C"
    return cox
}


function toFahrenheit(celcius){
    let cox = (celcius * (9 / 5)) + 32
    cox = cox.toFixed(1) + "°F"
    return cox
}


function checkNumber(temp){
    if(isNaN(temp)){
        return false
    } else {
        temp = Number(temp)
        return temp
    }
}
