# Binary Search Tree
## 특징
### _Binary Search Tree_
_{ 바이너리 트리의 특징을 이용해 서치를 진행 }  
_1. 오른쪽 자식은 부모 노드 보다 크다_
_2. 왼쪽 자식은 부모 노드 보다 작다_

예)
```
            15
        14
            13  
    12
            11
        10
            9
8
            7
        6
            5
    4
            3
        2
            1
```
### _노드 삭제_
_Case1. 자식이 없는 경우: del(삭제 노드)_
_Case2. 자식이 하나인 경우: swap(자식, 삭제 노드) -> del(삭제 노드)_
_Case3. 자식이 둘인 경우: 오른쪽 sub tree에서 최소값을 가지는 노드를 찾고 
        -> swap(오른쪽 sub tree의 최소 노드, 삭제 노드) -> del(삭제 노드)_

# Binary Search Tree Insertion
## Pseudo Code
_bt[]: binary tree  
bt[2n + 0] = left child of bt[n]  
bt[2n + 1] = right child of bt[n]_
### _bst_insertion(int val)_
_{ binary tree 규칙 아래 새로운 노드를 삽입 }  
val: 새롭게 삽일될 값_
```
queue<int> q;
int taps = 0;

//큐에 자리 찾는 도중에 있는 노드 푸쉬
if(btsize == 0){
    bt[0] = val;
    btsize++;
}else{
    int index = 0;
    //find the place to insert new element
    while(bt[index] != 0){
        if(val >= bt[index]){
            q.push(bt[index]);
            index = index * 2 + 2;
        }
        else if(val < bt[index]){
            q.push(bt[index]);
            index = index * 2 + 1;
            taps++;
        }
    }
    //put value where node is empty 
    bt[index] = val;
}
q.push(val);
```
## Code
```cpp
void bst_insertion(int val){
    queue<int> q;
    int taps = 0;

    //큐에 자리 찾는 도중에 있는 노드 푸쉬
    if(btsize == 0){
        bt[0] = val;
        btsize++;
    }else{
        int index = 0;
        //find the place to insert new element
        while(bt[index] != 0){
            if(val >= bt[index]){
                q.push(bt[index]);
                index = index * 2 + 2;
            }
            else if(val < bt[index]){
                q.push(bt[index]);
                index = index * 2 + 1;
                taps++;
            }
        }
        //put value where node is empty 
        bt[index] = val;
    }
    q.push(val);
}
```
