const display = document.getElementById("display")
let timer = null
let time = ``
let isRunning = false
let milli =0
let sec = 0
let min = 0
let hour = 0

function start(){
    if (timer != null) {
        clearInterval(timer)
        isRunning = false
    }

    if (!isRunning) {
        timer = setInterval(update, 10)
        isRunning = true
    }
}

function stop(){
    clearInterval(timer)
    isRunning = false
}

function reset(){
    display.textContent = "00:00:00:00"
    hour = 0
    min = 0
    sec = 0
    milli = 0
    isRunning = false
}

function update(){
        milli++
        if (milli == 100) {
            milli = 0
            sec++
            if (sec == 60) {
                sec = 0
                min++
                if (min == 60) {
                    min = 0
                    hour++
                }
            }
        }
        time = `${hour.toString().padStart(2, 0)}:${min.toString().padStart(2, 0)}:${sec.toString().padStart(2, 0)}:${milli.toString().padStart(2, 0)}`
        display.textContent = time
    

}
