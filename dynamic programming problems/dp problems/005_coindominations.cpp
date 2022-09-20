#include<iostream>
#include<vector>
using namespace std;
int coin_exchange(int n, vector<int>& c, vector<int>& dp)
{
    //look above
    if(dp[n]!=1)
    {
        return dp[n];
    }
    if(n==0)
    {
        return dp[n]=0;
    }
    int ans = INT_MAX;
	for(int j=0; j<c.size(); j++) {
		if(n-c[j] >= 0) {
			ans = min(ans, coin_exchange(n-c[j], c, dp));
		}
	}

	return dp[n] = ans == INT_MAX ? INT_MAX : 1 + ans;



}


int main ()
{
 	int n = 11;
	vector<int> c = {1, 2, 5};
  	vector<int> dp(n+1, -1);
	cout << coin_exchange(n, c, dp) << endl;

    return 0;
}
