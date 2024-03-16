var findMaxAverage = function (nums, k) {
    let sum = 0;
    let maxSum;
    for (let i = 0; i < k; i++) {
        sum = sum + nums[i];
    }
    maxSum = sum;

    for (let i = k; i < nums.length; i++) {
        sum = sum + nums[i] - nums[i - k];
        maxSum = Math.max(sum, maxSum);
    }

    console.log(maxSum / k);
    return maxSum / k;
};

let nums = [1, 12, -5, -6, 50, 3];
let k = 4;

findMaxAverage(nums, k);