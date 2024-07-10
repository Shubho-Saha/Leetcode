var findDifference = function(nums1, nums2) {
    let s1 = new Set(nums1);
    let s2 = new Set(nums2);
    let res = [[], []];
    for(let n of s1) {
        if (!s2.has(n)) {
            res[0].push(n);
        }
    }
    for(let n of s2) {
        if (!s1.has(n)) {
            res[1].push(n)
        }
    }
    return res;
};