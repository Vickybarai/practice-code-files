const programChecker=(str) => {
    let inputArr = str.toLowerCase().split("") ;
console.log(inputArr)
console.log("z".charCodeAt());
   const values = inputArr.filter((curele)=>
    curele.charCodeAt()>="a".charCodeAt()&&
    curele.charCodeAt()<="z".charCodeAt()
);
console.log(values)
console.log([...new Set(values)].length)
}
console.log( programChecker("the quick brown for jumps ove the lazy dog"));
