var countGoodSubstrings = function (s) {
    let set;
    let count = 0;
    for (let i = 0; i <= s.length - 3; i++) {
        let sub = new Set(s.slice(i, i + 3));
        if (sub.size === 3) count++;
    }
    console.log(count);
    return count;
};

let str = 'xyzzastx';
countGoodSubstrings(str);