var divisorSubstrings = function (num, k) {

    let numStr = num.toString();
    let count = 0;
    for (let i = 0; i <= numStr.length - k; i++) {
        let sub = parseInt(numStr.slice(i, i + k));
        console.log(sub);
        if (sub !== 0) {
            if (num % sub === 0) count++;
        }

    }
    console.log(count);
    return count;
};

let num = 430043;
let k = 2;
divisorSubstrings(num, k);