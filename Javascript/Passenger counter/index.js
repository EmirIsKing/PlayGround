
let countEl = document.getElementById("number")
let count = 0
let previousEl = document.getElementById("previous")


function increment() {
    count += 1
    countEl.textContent = count
}


function save() {
    previousEl.textContent += count + " - "
    count = 0
    countEl.textContent = count
}

