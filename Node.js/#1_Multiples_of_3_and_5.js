// https://projecteuler.net/problem=1
console.log(Array.from(Array(1000).keys()).filter(n => (n%3==0) || (n%5==0)).reduce((a,b) => a+b, 0));