function pascalTriangle(numsRow) {
    if (numsRow < 1) return null;
    let res = [];
    if (numsRow >= 1) {
        res.push([1]);
    }
    for (let i = 1; i < numsRow; i++) {
        let arr = [];
        for (let j = 0; j < i; j++) {
            let cur = res[i - 1][j];
            let pre = res[i - 1][j - 1] != null ? res[i - 1][j - 1] : 0;
            arr.push(cur + pre);
        }
        arr.push(1);
        res.push(arr);
    }
    console.log(res);
}

pascalTriangle(5);
