var minimumRecolors = function (blocks, k) {
    let wcount = 0;
    for (let i = 0; i < k; i++) {
        if (blocks[i] === "W") wcount++;
    }
    let minWhite = wcount;

    for (let i = k; i < blocks.length; i++) {
        if (blocks[i] === 'W') wcount++;
        if (blocks[i - k] === 'W') wcount--;
        minWhite = Math.min(minWhite, wcount);
    }
    console.log(minWhite);
    return minWhite;
};

let blocks = "WBBWWBBWBW";
let k = 7;
minimumRecolors(blocks, k);