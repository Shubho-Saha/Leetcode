// My initial Solution
var wordPattern = function(pattern, s) {
    let arr = s.split(" ");
    if (pattern.length !== arr.length) return false;
    
    let map = new Map();
    let values = [];
    for (let i=0; i<pattern.length; i++) {
        if (!map.has(pattern[i])) {
            if (!values.includes(arr[i])) {
                values.push(arr[i]);
                map.set(pattern[i], arr[i])
            } else {
                return false;
            }
        } else {
            if (arr[i] !== map.get(pattern[i])) return false;
        }
    }
    return true;
};


let pattern = "abba";
let s = "dog cat cat dog"
console.log(wordPattern(pattern, s));
