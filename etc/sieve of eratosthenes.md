# Sieve of Eratosthenes
## Pseudo Code
### _sieveOfEratosthenes_
_{ 2부터 a까지의 비소수를 제거 }  
a: 제거 범위  
arr: true = composite(합성수, 비소수), false = prime_
```
for i = 2 to i * i <= a:
    if arr[i] == true:
        continue
    for j = i * i to a step i:
        arr[j] = true
```
## Code
```cpp
for (int i = 2; i * i <= a; i++) {
    if (arr[i]) continue;
    for (int j = i * i; j <= a; j += i)
        arr[j] = true;
}
```
