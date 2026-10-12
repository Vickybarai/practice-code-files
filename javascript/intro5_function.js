var a=4 ,b=5;
var sum=a+b;
//1. function decaleration
function calculate(a,b){
    console.log(a+b) ;
}
calculate(10,-1);
//2. funtion greet
function greed(){
    console.log("hello vicky its greed function");
}
greed();

// 
function greet(name){
    console.log("hello "+name+" this is working bro");
}
// console.log(greet("vicky"));
greet("vicky");

// function expression ...always need return else show undifine
result =function assignfunction(name){
   return console.log("hello "+name+" this function is assign to result");
}
result("vicky");

var result=function add(a,b){
    return a+b ;
}(5,5)

console.log("the sum is "+ result);

///IMP both

// iimf immediately invoked function expression  (this run immediately on  page load)

var IIMFfunction=(function add(a,b){
    // return  console.log("the sum is ", a+b);
    return a+b;
})(5,5)

console.log("the IIMF sum is ", IIMFfunction);

