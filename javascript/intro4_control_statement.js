//1
var temp = 41;
if (temp < 30) { console.log("go to beach") }
else if (temp >= 31 && temp <= 40) { console.log("go with cold drinks") }
else { console.log("its hot wacth tv in room") }
//2
var age = 18;
var register = true;
var indian = true;
if (age >= 18) {
    if (indian) {
        if (register) {
            console.log("greate you can vote")
        }
        else { console.log("please check your registration") }
    }
    else { console.log("only indian can vote") }
}
else { console.log("ages is less than 18") }
//3
var num3 =5;
var result =num3 %2==0 ? "even":"odd";
console.log(result);

//4

if (num3 ===0){console.log("num is zero")}
else if(num3 >0){console.log("num is positive")}
else{console.log("num is negative")}
 

//
var i=1
while(i<=10){
    console.log("5 * ",i,"=",i*num3)
    i++;
    
}
//
for (i;i<=10;i++){
    console.log("loop",num3 ,"*",i,"=",num3*i)
}
//
var num=12;
var isprime=true;
for (var i=0 ;i<num;i++){
    if(num % i ===0){
        isprime=false;
        break
    }
}
if (isprime){console.log("is prime")}else{console.log("not is prime")}

// let userinput;
// let rightnumber;
// do{
// userinput=prompt("enter a number :");
// rightnumber=parseFloat(userinput);

// }while(isNaN(rightnumber)|| rightnumber<0);
// console.log("enter valid number");

//
var year=2024;
if((year % 4===0 && year % 100 !==0) || year % 400 === 0)
    {console.log('leap year')}
else{console.log('not a leap year')}


//
for (var i = 0; i<=5;i++){
    var pattern = "";
    for (var j = 1; j<=i;j++){
        pattern=pattern+" *";  
      }
        console.log(pattern);
}