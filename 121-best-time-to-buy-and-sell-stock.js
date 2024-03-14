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