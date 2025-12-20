# Breadth First Search
## Pseudo Code
### Breadth First Search
_{ 한 노드에서 연결된 모든 노드에 방문 }  
변수 설명_
```
수도 코드
```
## Code
```c++
#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int visited[?]; //해당 노드가 위치하는 레벨을 의미
int graph;

void bfs(int start){
  q.push(start);
  visited[start] = 1;

  while(size(stk)){
    int a = q.front();
    q.pop();
    \\방문시 실행될 명령어
    for(int e : graph[a]){
      if(visited[e]) continue;
      q.push(e);
      visited[e] = visited[a] + 1;
    }
  }
}
```
