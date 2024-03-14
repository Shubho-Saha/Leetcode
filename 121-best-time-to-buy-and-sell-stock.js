// My initial Solution.
var maxProfit = function(prices) {
    let ln = prices.length;
    let max = prices[ln-1];
    let temp;

    for(let i=ln-1; i>=0; i--) {
      temp = prices[i];
      prices[i] = max - prices[i];
      max = Math.max(max, temp);

    }
    let profit = 0;
    for (let elem of prices) {
        if (elem > profit) profit = elem
    }
    return profit;
};


// More optimized solution.
function sellStock(price) {
    if (price.length < 2) return 0;
    let left = 0; // buy
    let right = 1; // sell
    let maxProfit = 0;

    while(right < price.length) {
        if (price[right] > price[left]) {
            let profit = price[right] - price[left];
            maxProfit = Math.max(profit, maxProfit);
        } else {
            left = right;
        }
        right++;
    }

    return maxProfit;
}

console.log(sellStock([7,1,5,3,6,4]));
