import mongoose, { connection } from "mongoose";

let isConnected = false;


export async function connectToDB() {
    if (isConnected) {
        console.log('Mongo db is already connected');
        return;
    }
    
    try {
        
        mongoose.connect(process.env.MONGO_URI!)
        const connection = mongoose.connection;

        connection.on('connected', () => {
            console.log('MongoDB Connected successfully')
        })

        connection.on('error', () => {
            throw new Error('Failed to connect to database')
        })


        isConnected = true


    } catch (error) {
        console.log(error)
    }
}
