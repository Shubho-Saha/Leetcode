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