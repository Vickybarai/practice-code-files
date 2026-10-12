console.log("its basic eternal");
var my_Age$=30;
console.log(my_Age$);

// how to convert any number in string
console.log(typeof String(my_Age$));
console.log(typeof (my_Age$ + ""));
 
// conditions

// var myName="vicky";
// var myName= -5;
// var myName="";
var myName=null;

if (myName){
    console.log("its true ");
}else {  console.log("its false name");
}

// parsing  use to ignoore space, decimal ,zero
console.log(parseInt("123"));
console.log(parseInt("123",10));
console.log(parseInt("  123 "));
console.log(parseInt("077"));
console.log(parseInt("2.9"));

// NAN (not a number ) validate is there number ,output for number is false.

console.log(parseInt("@123"));
console.log(parseInt("-123"));
console.log(parseInt("xyz"));
if (NaN === NaN){
    console.log("true conditon equal");
}else{
    console.log("false conditon not equal");
}