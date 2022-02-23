//this is a async and await example, 
const posts = [
    {title:'post one', body: 'this is post one'},
    {title:'post two', body: 'this is post two'}
]

function getPosts (){
    setTimeout(() =>{
        let output = '';
        posts.forEach((post, index)=>{
            output += post.title;
        })
        console.log(output);
    }, 1000);
}

function createPost(post){
    return new Promise ((resolve, reject) =>{
        setTimeout(() =>{
            posts.push(post)

            const error = false;
            if (!error) {
                resolve()
            } else{
                reject('error: something went wrong')
            }
        }, 2000)
    })
}

// await received a promise and it handle in a better way
async function init(){
    await createPost({title: 'post three', body: 'this is post three'});

    getPosts();
}

init()

//async/ await / fetch

async function fetchUsers() {
    // the https response with a promise
    const  res = await fetch('https://jsonplaceholder.typicode.com/users')
    //we convert the data to json
    const data = await res.json();

    console.log(data);
}

fetchUsers()