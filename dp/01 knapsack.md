# 0/1 Knapsack
## Pseudo Code
### _knapsack01_
_{ 각 물건을 한 번만 선택하여 최대 가치를 구한다 }_  
- `dp[w]`: 무게 w를 사용했을 때의 최대 가치  
- `W`: 배낭 최대 용량
```
dp[0~W] = {0,}

for i = 0 to n-1:
    for w = W down to weight[i]:
        dp[w] ← max(dp[w], dp[w - weight[i]] + value[i])

return dp[W]
```
## Code
```cpp
int dp[10001] = {};

for (int i = 0; i < n; i++) {
    for (int w = W; w >= weight[i]; w--) {
        dp[w] = max(dp[w], dp[w - weight[i]] + value[i]);
    }
}

cout << dp[W];
```
