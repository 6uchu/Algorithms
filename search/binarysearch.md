# Binary Search
## Pseudo Code
### _BinarySearch_
_{ 정렬된 배열에서 목표 값을 이분 탐색으로 찾는다 }  
arr: 절렬된 배열  
n: 배열 크기  
target: 찾을 값_
```
left ← 0
right ← n - 1

while left ≤ right
    mid ← (left + right) / 2

    if arr[mid] == target
        return mid

    else if arr[mid] < target
        left ← mid + 1

    else
        right ← mid - 1

return -1
```
## Code
```cpp
#include <vector>
using namespace std;

int BinarySearch(const vector<int>& arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
```
  - 반드시 정렬된 배열  
  - 시간복잡도 O(log N)  
