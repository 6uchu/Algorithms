# Flood Fill
## Pseudo Code
### _flood_fill(queue q, queue tempq)_
_{ bfs를 한 레벨별로 구분되게 실행 }  
q: 탐색이 실행되는 큐
tempq: 다음 레벨의 노드를 저장_
```
q.push(start node)
visited[start node] = 1
while(~~~):
  while(tempq.size()):
    q.push(tempq.front())
    tempq.pop()
  while(q.size()):
    here = q.front()
    q.pop()
    for(next):
      visited[next] = visited[here] + 1
      if(~~~): continue
      if(~~~):
        tempq.push(next)
        continue
      q.push(next)
```
```
//혹은
q.push(start node)
visited[start node] = 1
while(~~~):
  sizeq = q.size()
  while(sizeq--):
    here = q.front()
    q.pop()
    for(next):
      visited[next] = visited[here] + 1
      if(~~~): continue
      if(~~~): continue
      q.push(next)
```
## Code
```cpp
```
