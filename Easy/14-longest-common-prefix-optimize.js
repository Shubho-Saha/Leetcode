function longComPrefex(str) {
    if (str.length === 0) return "";
    let ans = str[0];

    for (let i = 1; i < str.length; i++) {
        while (str[i].indexOf(ans) !== 0) {
            ans = ans.slice(0, ans.length - 1);

            if (ans.length === 0) return "";
        }
    }
    return ans;
}

let arr = ["flower", "flow", "floight"];
console.log(longComPrefex(arr));