const express = require('express')
const app = express()
const { readFileSync } = require('fs')
const path = require('path')

const index = readFileSync('./index.html', 'utf8')

app.use(express.static(path.resolve(__dirname, '../../')))



app.get('*', (req, res) => {
    res.send(index)
})

app.get('/clock', (req, res) => {
    res.sendFile(path.resolve(__dirname, '../../Clock/index.html'));
})

app.get('/calculator', (req, res) => {
    res.sendFile(path.resolve(__dirname, '../../calculator/index.html'));
})


app.get('/blackjack', (req, res) => {
    res.sendFile(path.resolve(__dirname, '../../blackjack/index.html'));
})


app.get('/password-generator', (req, res) => {
    res.sendFile(path.resolve(__dirname, '../../password-generator/index.html'));
})


app.get('/pokemon-retriever', (req, res) => {
    res.sendFile(path.resolve(__dirname, '../../pokemon-retriever/index.html'));
})


app.get('/snake', (req, res) => {
    res.sendFile(path.resolve(__dirname, '../../snake/index.html'));
})

app.get('/stopwatch', (req, res) => {
    res.sendFile(path.resolve(__dirname, '../../stopwatch/index.html'));
})

app.get('/weather-app', (req, res) => {
    res.sendFile(path.resolve(__dirname, '../../weather-app/index.html'))
})


app.get('/rock-paper-scissors', (req, res) => {
    res.sendFile(path.resolve(__dirname, '../../Rock-Paper-Scissors/index.html'));
})


app.listen(5000, () => {
    console.log("Listening on port 5000...")
})

