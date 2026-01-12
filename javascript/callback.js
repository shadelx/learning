// simulation of a post from a server and asynchronous fetch

const posts = [
    { title: 'Post one', body: 'this is post one'},
    { title: 'Post two', body: 'this is post two'}
]

function getPosts() {
    setTimeout(() => {
        let output = '';
        posts.forEach((post, index) =>{
            output += post.title;
        })
        console.log(output);
    },1000);
}

// we use a callback so that createPost resolve first even if getPosts resolved first
function createPost(post, callback) {
    setTimeout(() =>{
        posts.push(post);
        callback();
    },2000)
}

getPosts()
//we pass the getPost as a callback function to be resolved after
createPost({title: 'Post three', body: 'this is post three'}, getPosts);
