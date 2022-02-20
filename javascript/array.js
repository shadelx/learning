//example of object literals
const person = {
    firstName : 'John',
    lastName : 'Smith',
    hobbies: ['music', 'movies', 'sports'],
    address: {
        street:'50 main st',
        city: 'boston',
        state: 'MA'
    }
}

//access person firstname, array, object
console.log(person.firstName);
console.log(person.hobbies[2]);
console.log(person.address.street);

//destructor an object pulling this as individual variables
const {firstName, lastName, address : {city}} = person;
console.log(firstName);
console.log(city);
console.log(typeof(firstName));

// define and array of objects
const todos = [
    {
        id: 1,
        text: 'take out trash',
        isCompleted: true
    },
    {
        id: 2,
        text: 'metting with boss',
        isCompleted: true
    },
    {
        id: 3,
        text: 'Dentist appointment',
        isCompleted: false
    },
]

//print all the array
console.log(todos);
//print a specific value of the array
console.log(todos[1].text);
//convert object literalts to json format
const todoJSON = JSON.stringify(todos);
console.log(todoJSON);

//iteration of arrays 
// for each: iterate for each element in the array
todos.forEach((todo)=>{
    console.log(todo.text);
})
// maps return and array of only text
const todoText = todos.map((todo)=>{
    return todo.text;
})
console.log(todoText);
//filter returns only the objects that are completed
const todoCompleted = todos.filter((todo) => {
    return todo.isCompleted === true;
})
console.log(todoCompleted);
// you can chain array functions

const todoCompletedText = todos.filter((todo)=>{
    return todo.isCompleted ===true;
}).map((todo) =>{
    return todo.text;
})
console.log(todoCompletedText);