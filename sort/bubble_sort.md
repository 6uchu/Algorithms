# Bubble Sort
## Pseudo Code
### _function bubble_sort(array arr[])_
_{ 2중 for문을 돌며 'arr'를 정렬 }_  
```
for i = size(arr) - 2 to 0:
  for j = 0 to i:
    if arr[j] > arr[j + 1]:
      swap(arr[j], arr[j + 1])
```
## Code
```cpp
void bubble_sort(int arr[], int n){
  int i, j, tmp;

  for(i=n-1; i>0; i--){
    for(j=0; j<i; j++){
      if(arr[j]<arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}
```
