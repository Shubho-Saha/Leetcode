// My initial Solution
var maxNumberOfBalloons = function(text) {
    let freCount = {};
    for(let char of text) {
        if ((char === 'b') || (char === 'a') || (char === 'l') || (char=== 'o') || (char=== 'n')) {
            freCount[char] = (freCount[char] || 0) + 1;
        }
    }

    let sval, dval, minsval;
    sval = Math.min(freCount['b'], freCount['a'], freCount['n']);
    dval = Math.min(freCount['o'], freCount['l']);

    minsval = Math.floor(dval / 2);
    if (sval > 0) {
        if (sval <= minsval) {
            return sval;
        } else {
            return minsval;
        }
    } else{
        return 0;
    }

};


// More Optimized Solution.
function maxNumberOfBalloon(txt) {
    let balloon = "balloon";
    let txtMap = new Map();
    let bMap = new Map();

    for (let char of balloon) {
        if (!bMap.has(char)) bMap.set(char, 1);
        else bMap.set(char, bMap.get(char)+1);
    }
    
    for (let char of txt) {
        if (bMap.has(char)) {
            if(!txtMap.has(char)) txtMap.set(char, 1);
            else txtMap.set(char, txtMap.get(char)+1);
        }
    }

    let min = Infinity;
    for(let char of balloon) {
        min = Math.min(min, Math.floor(txtMap.get(char)/bMap.get(char)));
    }
    if (min) {
        return min;
    } else {
        return 0
    }
    
}
