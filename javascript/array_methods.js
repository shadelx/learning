array = [12, 3, 4, 5]

map_array = array.map((num)=>{ return num*2 })
filter_array = array.filter((num) =>{ return num<10} )
reduce_array = array.reduce((accumulator, currenvalue) => { return accumulator + currenvalue  })
find_array = array.find((e) => {return e%2 ==0 })


console.log(array)
console.log(map_array)
console.log(filter_array)
console.log(reduce_array)
console.log(find_array)
