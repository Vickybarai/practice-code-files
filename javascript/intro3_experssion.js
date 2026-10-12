// assigment oprator =value
// arthmetical oprator
var x=5;
var y=5;
console.log(x+ y);
console.log(x- y);
console.log(x* y);
console.log(x/ y);
console.log(x% y);
console.log("HELLO"/ y);
console.log("HELLO"* y);
console.log("HELLO"% y);
console.log("HELLO"- y);
console.log("HELLO"+ y);

// Compression oprater
console.log(5==5);
console.log(5=="5");

console.log(5===5)
console.log(5==="5")


console.log(5!=5)

console.log(5>="5")
console.log(5<="5")
console.log(5=="5")

let num1=19
let num2="1"
// if(num1==num2){
let licence=true
if(num1===num2){
    console.log("equal");
}else{
    console.log("not equal");
}

if(num1 <=18 && licence){
    console.log("you are not eligible");
}else{
    console.log("you are eligible");
}


// ternary 

var ternary_result= num1 >= 18 ?"yes you are eligible ":"you are not eligible";
console.log(ternary_result);

score=50;
var studentmarks= score >= 60 ? "you are pass": "you are fail";
console.log(studentmarks);