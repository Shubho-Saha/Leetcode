// My initial Solution.
var arraySign = function(nums) {
    let zero = false;
    let minusCount = 0;

    for (let n of nums) {
        if (n === 0) {
            zero = true;
            break;
        }
        if (n < 0) minusCount++;
    }

    if (zero) return 0;
    return (minusCount % 2) === 0 ? 1: -1;
};

//More optimized solution

function arrSign(numbers) {
    let sign = 1;
    for(let n of numbers) {
        if (n === 0) return 0;
        if (n < 0) {
            sign = - sign;
        }
    }
    return sign;
}