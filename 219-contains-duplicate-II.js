var containsNearbyDuplicate = function (nums, k) {
    let hset = new Set();
    let left = 0;
    for (let i = 0; i < nums.length; i++) {
        if ((i - left) > k) {
            hset.delete(nums[left]);
            left++;
        }
        if (hset.has(nums[i])) {
            return true;
        } else {
            hset.add(nums[i])
        }
    }

    return false;
};

let nums = [1, 0, 4, 1], k = 2;

console.log(containsNearbyDuplicate(nums, k));