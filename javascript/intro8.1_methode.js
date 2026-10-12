//sort
const fruits=["Apple","orange" ,"mAngo", "BanAna",]
fruits.sort()
console.log(fruits);

const numbers=[1,3,2,0,5,6,7,3,7,2,4,5]
numbers.sort()
console.log(numbers);

const sortoutput=numbers.sort((a,b)=>{

    // if (a>b) return -1;
    if (a<b) return 1;

}
);
console.log(sortoutput);

//capitalized

const result=fruits.map((ele)=>{
    return ele.toUpperCase() 
    // return ele.toLowerCase()
})
console.log(result);

const result1=numbers.map((ele)=>{
    if (ele % 2==0) {
        console.log(ele *ele , ele *ele *ele)
    };
})    

const result3=fruits.map((ele)=>{
    console.log( `mr.${ele} `)
})

const productprices=[100,200,300,400,500]
const totalprices=productprices.reduce((acc,i)=>{
    return acc+i;
},0)
console.log(totalprices)