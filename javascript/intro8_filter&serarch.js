const numbers= [1,2,3,4,5,4,6,7,8,6,9]

//find 
const result= numbers .find((currentelement)=>{
    return currentelement> 8;
});
console.log(result);

// find index : show only 1st value form finded part

const result1=numbers.map((currentelement)=> currentelement*5);
const result2= result1.findIndex ((currentelement)=>{
    return currentelement >25;
});
console.log(result1);
console.log(result2);

// filter : show all by given card
const result3=numbers.map((currentelement)=> currentelement*5);
const result4= result3.filter ((currentelement)=>{
    return currentelement >25;
});
console.log(result3);
console.log(result4);

// 
let value=6;
//  numbers= [1,2,3,4,5,4,6,7,8,6,9];
 
 let updatenumbers=numbers.filter((currentelement)=>{
    return currentelement!==value;
 })
 console.log(updatenumbers);

// 

 const findinput ="p3"
 const products=[{name:"p1" ,price:1200},
    {name:"p2" ,price:800},
    {name:"p3" ,price:300},
    {name:"p4" ,price:500},
 ]

const resultproduct=products.filter((currentelement)=>{
    // console.log(currentelement.price);
    // console.log(currentelement.name);
    // console.log(currentelement);
 return currentelement.price <=findinput || currentelement.name ===findinput
 })
console.log(resultproduct);

//filter unquie value 
