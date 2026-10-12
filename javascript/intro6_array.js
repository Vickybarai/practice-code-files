// constructer
let fruits = new Array("apple", "banana", "oranges");

//literal
let fruit = ["apple", "banana", "oranges"]

console.log("constructor", fruits)

console.log("literal", fruit, fruit[0][1]);

//for in (index)

for (let item in fruit) {
    console.log(item)
}
// for in (value)
for (let item of fruit) {
    console.log(item)
}

// for each 

fruit.forEach((curlele, index, arr) => {
    console.log(curlele, index)
})

// map
fruit.map((curlele, index, arr) => {
    console.log(curlele, index ,)
});

const myFavfruit = fruit.map((curlele, index, arr) => {
    return `My fav fruit is ${curlele}`;  
});

console.log(myFavfruit);

//example 
var table=[1,2,3,4,5];
const multiple = table.map((tableof, index)=>{
    return `2 * ${index+1} =${tableof*2}`
})
console.log(multiple);
