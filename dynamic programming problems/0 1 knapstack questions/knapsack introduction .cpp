#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int> weights, vector<int> profits,
			  int N, int i, int w) {

	// base case
	if(i == N) {
		return 0;
	}

	if(w == 0) {
		return 0;
	}

	// recursive case

	// you've to make a decision for the object at the ith index

	if(weights[i] > w) {
		// exclude the ith object
		return maxProfit(weights, profits, N, i+1, w);
	}

	// 1. include the ith object
	int X = maxProfit(weights, profits, N, i+1, w-weights[i]);

	// 2. exclude the ith object
	int Y = maxProfit(weights, profits, N, i+1, w);

	return max(profits[i]+X, Y);

}

int maxProfitBottomUp(vector<int> weights, vector<int> profits, int N, int W) {

	vector<vector<int>> dp(N+1, vector<int>(W+1));

	for(int i=0; i<=N; i++) {
		dp[i][0] = 0;
	}

	for(int j=0; j<=W; j++) {
		dp[N][j] = 0;
	}

	for(int i=N-1; i>=0; i--) {
		for(int w=1; w<=W; w++) {
			// dp[i][w] = f(i, w)
			if(weights[i] <= w) {
				dp[i][w] = max(profits[i]+dp[i+1][w-weights[i]],
					                      dp[i+1][w]);
			} else {
				dp[i][w] = dp[i+1][w];
			}
		}
	}

	return dp[0][W];

}

int main() {

	int N = 5;
	int W = 4;

	vector<int> weights = {1, 2, 3, 2, 2};
	vector<int> profits = {8, 4, 1, 5, 3};

	cout << maxProfit(weights, profits, N, 0, W) << endl;
	cout << maxProfitBottomUp(weights, profits, N, W) << endl;

	return 0;
}
