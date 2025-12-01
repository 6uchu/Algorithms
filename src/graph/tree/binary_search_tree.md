# Binary Search Tree
## Pseudo Code
### _bst(int val, int ini)_
_{  }  
_
```
```
## Code
```cpp
void insertion(int val, int ini){
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


    if(ini == 0){
        int prevv = q.front();
        
        for(int i = 0; i < taps; i++){
            cout << "   ";
        }
        cout << q.front() << '\n';
        q.pop();

        while(q.size()){
            int here = q.front();

            //went right
            if(here >= prevv){
                taps++;
                for(int i = 0; i < taps; i++){
                    cout << "   ";
                }
                cout << here << '\n';
            }else{
                taps--;
                for(int i = 0; i < taps; i++){
                    cout << "   ";
                }
                cout << here << '\n';
            }
            q.pop();
            prevv = here;
        }
    }
}
```
