// function sum(a, b, oprator) {
const sum = (a,b,oprator) =>{
let result;
    switch (oprator) {
        case "-":
            result = a - b;
            break;
        case "+":
            result = a + b;
            break;

        case "*":
            result = a * b;
            break;

        case "/":
            if(b===0)return "zero is not accept"
            result = a / b;
            break;
    }
    return result;
}

console.log(sum(5, 5, "+"));

//

const reverse =(str)=>{
    let  result="";
    // for(let i = 0; i <= str.length ;i++)
    for(let i = str.length -1; i>=0 ;i--)
    {   
        // console.log(str[i]);
        result = result+str[i];
    }
    return result;
    };
// reverse("vicky barai");
console.log(reverse("VICKY BARAI"));

const palidrone=(str) =>{
 let  result="";
    for(let i = str.length -1; i>=0 ;i--)
    {   
        result = result+str[i];
    }
    // if (str===result){
    //     return true;
    // }else{
    //     return false;
    // }
    return str===result ?  true : false;
}
console.log(palidrone("VICKY "));
