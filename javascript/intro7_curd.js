let fruit = ["apple", "banana", "oranges"]
console.log(fruit )

//  pop methode ...  delete element in the end
console.log(fruit.pop())
// fruit.pop()

//  push methode ...  add element in the end
console.log("add element in end :",fruit.push("cherry"))
// fruit.push("cherry")

//  unshift methode ...  add element in the start
console.log("add element in start :",fruit.unshift("mango"))
 
//  shift methode ...  delete element from the start
console.log("unshift delete frist :",fruit.shift())
// console.log(fruit )

// splice (startfrom , deletecount ,item1add ,item2add ,***itemN)
console.log(fruit.splice(0,1,"watermealan"))

// starting point . if we use(empty)empty output
console.log("empty",fruit.splice())

const myFavfruit = fruit.map((curlele, index, arr) => {
    return `My fav fruit is ${curlele} ${ index}`;  
});

console.log(myFavfruit);


//index of  " index of (search element ,from index)"
// if value is not there than it will show  -1
const persons=["rams", "hari", "sita", "bishal", "gita","sita",];
console.log("index",persons.indexOf("sita"));
console.log("index start",persons.indexOf("sita",4));


// last value will show ; left to right
console.log("last index",persons.lastIndexOf   ("sita"));
console.log("last index start reverse",persons.lastIndexOf   ("sita",3));

// include use to find value from data ...true or false 
console.log("include ",persons.includes("sita"));


//challenges

const months=["jan","march","april","june"]
const newmonth=months.splice(1,1,"March");
console.log(months);

// another wat to add in end 
months.splice(months.length,0,"dec")
console.log(months);

months.splice(3,1);
console.log(months);


