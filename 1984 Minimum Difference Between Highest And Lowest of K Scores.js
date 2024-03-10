function minimumDifference (nums, k) {
    nums = mergeSort(nums);
    let minDiff = Infinity;
    for (let i=0; i<=nums.length-k; i++) {
        currentDiff = Math.abs(nums[i+k-1] - nums[i]);
        minDiff = Math.min(minDiff, currentDiff);
        console.log(minDiff, currentDiff);
    }

    return minDiff == Infinity ? 0: minDiff;
};

console.log(minimumDifference([2,3,5,8,9,10], 3));



function merge(arr1, arr2) {
    let res = [];
    let left = 0
    let right = 0;
    while (left < arr1.length && right < arr2.length) {
        if (arr1[left] < arr2[right]) {
            res.push(arr1[left]);
            left++
        } else {
            res.push(arr2[right]);
            right++
        }
    }

    while (left < arr1.length) {
        res.push(arr1[left]);
        left++
    }
    while (right < arr2.length) {
        res.push(arr2[right]);
        right++
    }
    
    return res;

}

function mergeSort(arr) {
    if (arr.length <= 1) return arr;

    let mid = Math.floor(arr.length /2);
    let left = mergeSort(arr.slice(0, mid));
    let right = mergeSort(arr.slice(mid));

    return merge(left, right);
}
