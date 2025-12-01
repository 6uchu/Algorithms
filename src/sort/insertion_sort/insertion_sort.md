# Insertion Sort
## Pseudo Code
```
function insertion_sort(array arr, int key, int i, int j):
{삽입 정렬을 수행함}
  for i = 1 to size(arr) - 1:
    //0부터 i까지 부분적으로 정렬
    key = arr[i]
    for j = i - 1 to 0:
      //만약 key 값의 자리가 앞쪽이면 값을 뒤로 하나씩 밀어줌 
      if arr[j] > key:
        arr[j + 1] = arr[j]
      //key가 arr[j]보다 크거나 같을 경우; arr[j + 1]이 key의 자리일 경우 break
      else:
        break
  
      arr[j + 1] = key
```
## Code
```cpp
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr){
    int j;

    for(int i = 1; i < size(arr); i++){
        int key = arr[i];
        for(j = i - 1; j >= 0; j--){
            if(arr[j] > key)
                arr[j + 1] = arr[j];
            else break;
        }
        arr[j + 1] = key;
    }
}

int main(){
    vector<int> arr = {10, 9, 8, 7 , 6, 5, 4, 3, 2, 1};
    insertion_sort(arr);

    for(int a : arr)
        cout << a << ' ';
    cout << '\n';
}
```
