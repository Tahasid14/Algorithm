
#include <bits/stdc++.h>
using namespace std;

int coinRow(vector<int>& coins) {


    int n = coins.size();

    if (n == 0) return 0;
    if (n == 1) return coins[0];

    vector<int> dp(n);

    dp[0] = coins[0];
    dp[1] = max(coins[0], coins[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + coins[i]);
    }

    return dp[n - 1];
}

int main() {
    int size;
    cout<<"Number of Coins : ";
    cin>>size;
     vector<int> coins;

    cout<<"Input Coins : ";

    for(int i=0;i<size;i++){

        int v;
        cin>>v;

        coins.push_back(v);
    }

    int result = coinRow(coins);
    cout << "Max value by DP: " << result << endl;
    return 0;
}
