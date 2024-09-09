

let thirdCard = 0
let cards = []
let sum = 0
let hasBlackJack = false
let isAlive = false
let message = ""
let messageEl = document.getElementById("message-el")
let sumEl = document.getElementById("sum")
let cardsEl = document.getElementById("cards-el")


let player = {
    name: "Per",
    chips: 145
}

let playerEl = document.getElementById("player-el")
playerEl.textContent = player.name + ": $" + player.chips

function startGame() {
    isAlive = true

    for (let i = 0;i < 2;i++){
        let freshCard = getRandomCard()
        cards.push(freshCard)
    }

    sum = cards[0] + cards[1]

    renderGame()
}

function renderGame() {
    cardsEl.textContent = "Cards: "

    for (let i = 0; i < cards.length; i++){
        cardsEl.textContent += cards[i] + " "
    
    }

    if (sum <= 20){
        message = "Do you want to draw another card?"
    } else if (sum === 21) {
        message = "You've got Blackjack!"
        hasBlackJack = true
    } else {
        message = "You're out of the game!"
        isAlive = false
    }
    messageEl.textContent = message
    sumEl.textContent = "sum: " + sum
}

function newCard() {
if (isAlive === true && hasBlackJack === false){
    thirdCard = getRandomCard()
    sum += thirdCard
    renderGame()
    cards.push(thirdCard)
    sumEl.textContent = "sum: " + sum
    cardsEl.textContent += " " + thirdCard
}
}


function getRandomCard() {
    let randCard = Math.floor(Math.random() * 13) + 1
    if (randCard === 1) {
        return 11
    } else if (randCard > 10){
        return 10
    } else {
        return randCard
    }
}


