int maxProfit(int* prices, int pricesSize) {
    int minElement = prices[0];
    int output = 0;
  
    for (int i = 1; i < pricesSize; i++) {
        //Checking out the min element from 2 consecutive elements in an array
        if (prices[i] < minElement) {
            minElement = prices[i];
        }
        // Update the maximum differnce between two consecutive elemnts found so far              
        if (prices[i] - minElement > output)
            output = prices[i] - minElement;
    }
    return output;
}