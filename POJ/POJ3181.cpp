#include <iostream>
#include <algorithm>

const int MAX_K = 101, MAX_N = 1001;

int k, n;
int dp[MAX_K][MAX_N];

void solve(){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j <= k; ++j){
            dp[j] = std::max(dp[j], dp[j]:);//嫌だなぁ、疲れた、めんどくせ
        }
    }
    return;
}

int main(){
    std::cin >> n >> k;
    solve();
    std::cout << dp[k];
    return 0;
}
