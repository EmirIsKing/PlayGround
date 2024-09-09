const choices = ["rock", "paper", "scissors"]
const playerDisplay = document.getElementById("playerDisplay")
const computerDisplay = document.getElementById("computerDisplay")
const resultDisplay = document.getElementById("resultDisplay")
const playerScoreDisplay = document.getElementById("playerScoreDisplay")
const computerScoreDisplay = document.getElementById("computerScoreDisplay")
let playerScore = 0
let computerScore = 0

function playGame(playChoice){
    const computerChoice = choices[Math.floor(Math.random() * 3)]

    let result = ""
    if (playChoice === computerChoice) {
        result = "Its a tie"
    }
    else {
        switch (playChoice) {
            case "rock":
                result = (computerChoice === "scissors") ? "You Win!" : "You Lose!"
                break;
            case "paper":
                result = (computerChoice === "rock") ? "You Win!" : "You Lose!"
                break;
            case "scissors":
                result = (computerChoice === "paper") ? "You Win!" : "You Lose!"
                break;
        }
    }

    playerDisplay.textContent = `Player: ${playChoice}`
    computerDisplay.textContent = `Computer: ${computerChoice}`
    resultDisplay.textContent = result

    resultDisplay.classList.remove("greenText", "redText")

    switch (result) {
        case "You Win!":
            resultDisplay.classList.add("greenText")
            playerScore++
            playerScoreDisplay.textContent = playerScore
            break;
    
        case "You Lose!":
            resultDisplay.classList.add("redText")
            computerScore++
            computerScoreDisplay.textContent = computerScore
            break;
    }

}