// Next Greater Element I Optimized
function nxtGreaterElem(nums1, nums2) {
    let map1 = new Map();
    let stack = [];
    let res = [];

    for (let i = 0; i < nums1.length; i++) {
        map1.set(nums1[i], i);
        res.push(-1);
    }

    for (let i = 0; i < nums2.length; i++) {
        let current = nums2[i];

        while (stack.length && current > stack[stack.length - 1]) {
            let last = stack.pop();
            let idx = map1.get(last);
            res[idx] = current;
        }

        if (map1.has(current)) {
            stack.push(current);
        }
    }
    console.log(res);
    return res;

}

let n1 = [1, 3, 5, 2, 4];
let n2 = [6, 5, 4, 3, 2, 1, 7];

nxtGreaterElem(n1, n2);

