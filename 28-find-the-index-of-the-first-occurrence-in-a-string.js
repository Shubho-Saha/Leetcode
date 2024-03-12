var strStr = function (haystack, needle) {
    let j = 0;
    for (let i = 0; i < haystack.length; i++) {
        if (haystack[i] === needle[j]) {
            j++;
        } else {
                i = i - j;
                j = 0;  
        }
        if (needle.length === j) {
            return i - j + 1;
        }
    }
    return -1;
};

let hay = "mississippi";
let need = "issip";
console.log(strStr(hay, need));