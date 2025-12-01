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
