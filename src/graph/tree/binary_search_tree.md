# Binary Search Tree
## Pseudo Code
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
