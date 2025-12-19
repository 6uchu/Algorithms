# 제목
## Pseudo Code
### Depth First Search
_{ 한 노드에서 연결된 한 노드에 대해 계속 탐색 }  
변수 설명_
```
수도 코드
```
## Code
```c++
#include <bits/stdc++.h>
using namespace std;
stack<int> stk;
int visited[?];
int graph;

void dfs(int start){
  stk.push_back(start);
  visited[start] = 1;

  while(size(stk)){
    int a = stk.top();
    stk.pop();
    for(int e : graph[a]){
      if(visited[e] == 0){
        stk.push_back(e);
        visited[e] = 1;
      }
    }
  }
}
```
