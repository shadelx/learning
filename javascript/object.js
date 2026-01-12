// class

class Person {
    constructor(firstName, lastName, dob){
        this.firstName = firstName;
        this.lastName = lastName;
        this.dob = new Date(dob);
    }

    getBirthYear(){
        return this.dob.getFullYear();
    }

    getFullName(){
        return `${this.firstName} ${this.lastName}`;
    }
}

const person1 = new Person('John', 'Smith', '4-2-1980');
console.log(person1.getFullName());

// this is the way to make an object the old way
const person = {
    name: 'John',
    age: 20,
    greet: function () {
        console.log(`Hi my name is ${this.name}`)
    }
}

person.greet()

//constructor function

function Person(name, age){
    this.name = name;
    this.age = age;
}

Person.prototype.greet = function(){
    console.log(`Hi my name is ${this.name}`)
}

let person1 = new Person('alex', 23)
person1.greet()

//inheritance
function Developer(name, age, skills){
    Person.call(this, name, age)
    this.skills= skills;
}

let developer1 = new Developer('Mendez', 34, 'python')
