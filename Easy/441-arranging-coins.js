var arrangeCoins = function (n) {
    let l = 1; r = n;
    let res = 0;
    while (l <= r) {
        let mid = Math.floor((l + r) / 2);
        let coins = (mid / 2) * (mid + 1);
        if (coins > n) {
            r = mid - 1;
        } else {
            res = Math.max(res, mid);
            l = mid + 1;
        }
    }

    console.log(res);
    return res;
};

arrangeCoins(15);