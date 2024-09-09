import { Schema, model, models } from "mongoose";

const todoSchema = new Schema({
    todo: {
        type: String,
        required: [true, "Enter a Text"],
        unique: true,
    }
})


const ToDo = models.todo || model('todo', todoSchema);

export default ToDo;