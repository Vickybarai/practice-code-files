//string
//arrayfrom (string to arry)
let text="vicky barai";
let strarr= Array.from(text);
// console.log(strarr);

//
let text1="Hello world  of java script, Welcome to java scripT"

let resultt=text1.indexOf("java");
//same value
let result=text1.lastIndexOf("java");

// console.log(text1.length,result ,resultt);

// search  // case sensitive (method)
// let result1=text1.search(/vicky/);

// search global search
// let result1=text1.search(/vicky/g);

//imp search not matter case sensitive

let result1=text1.search(/ViCky/i);

// console.log( result1)
// case sensetive

// gobal search
//no case  sensitive 

//
let strarr2=Array.from(text1);
let strmap=strarr2.map((ele,ind)=>
    `${ele} - ${ind}`
)
// console.log(strmap);

// match 
let result4 =text1.match("java script");
//  match all
let result44=text1.matchAll(/java script/gi);
// console.log("match",result4,"matchall",...result44)

for (let item of result44){
    console.log('answer',item[0]);
}

//endswith -last value
let end=text1.endsWith("scripT");
console.log("end",end);

//split
let result5=text1.split(3,5);
console.log(result5);

//substring
let result55=text1.substring();
console.log(result55);

let text2="hello java script, welcome  to our world java script course";

// let result2=text2.substring(0);
// let result2=text2.substring(1);
// let result2=text2.substring(-5);
// console.log(result2);

