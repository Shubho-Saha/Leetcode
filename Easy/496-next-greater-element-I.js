var nextGreaterElement = function(nums1, nums2) {
    let map1 = new Map();
    let res = [];

    for (let i=0; i<nums1.length; i++) {
        map1.set(nums1[i], i)
        res.push(-1);
    }

    for (let i=0; i<nums2.length; i++) {
        if (map1.has(nums2[i])) {
            for(let j = i+1; j<nums2.length; j++) {
                if (nums2[j] > nums2[i]) {
                    res[map1.get(nums2[i])] = nums2[j];
                    break;
                }
            }
        }
    }
    console.log(res)
    return res;
};

let nums1 = [4, 1, 2];
let nums2 = [1,3,4,2]
nextGreaterElement(nums1, nums2);