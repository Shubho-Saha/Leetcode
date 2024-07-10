var mySqrt = function(x) {
    for (let i=0; i<=x; i++) {
        if (i * i === x) {
            console.log(i*i)
            return i;
        } else if (i * i > x) {
            return i-1;
        }
    }
};
// let i = 0;
// console.log(i * i)
console.log(mySqrt(0));