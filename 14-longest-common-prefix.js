var longestCommonPrefix = function(strs) {
    let min = Infinity;
    let minElem;
    for (let elem of strs) {
        if (elem.length < min) {
            min = elem.length;
            minElem = elem;
        }
    }

    
    let minCom = Infinity;
    for (let element of strs) {
        let common = 0;
        for (let i=0; i<element.length; i++) {
            if (element[i] === minElem[i]) {
                common++;
            } else {
                break;
            }
        }
        minCom = Math.min(minCom, common);
    }

    if (minCom == Infinity || minCom === 0) {
        return ""
    } else {
        return minElem.slice(0, minCom);
    }
    
    
};

let arr = ["flower","flow","floight", 'aa'];

console.log(longestCommonPrefix(arr));