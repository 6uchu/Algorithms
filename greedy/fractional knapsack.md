# 제목
## Fractional Knapsack
### _fractionalKnapsack_
_{ 물건을 쪼갤 수 있을 때 최대 가치를 구한다 }_  
- `ratio`: 가치 / 무게  
- `remain`: 남은 용량
```
totalValue = 0
remain ← W

for 물건 i in 정렬된 순서:
    if weight[i] ≤ remain:
        totalValue += value[i]
        remain -= weight[i]
    else:
        totalValue += value[i] * (remain / weight[i])
        break

return totalValue
```
## Code
```cpp
struct Item {
    double w, v;
};

bool cmp(const Item& a, const Item& b) {
    return a.v / a.w > b.v / b.w;
}

double fractionalKnapsack(int W, vector<Item>& items) {
    sort(items.begin(), items.end(), cmp);

    double total = 0;
    int remain = W;

    for (auto& it : items) {
        if (it.w <= remain) {
            total += it.v;
            remain -= it.w;
        } else {
            total += it.v * (remain / it.w);
            break;
        }
    }
    return total;
}
```
