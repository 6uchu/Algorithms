# Deterministic Finite Automaton (DFA)
## Pseudo Code
### Deterministic Finite Automaton
_{ 입력 문자열을 한 글자씩 읽으며 상태 전이를 통해 허용 여부를 판별 }_  

변수 설명  
- `input` : 입력 문자열  
- `state` : 현재 상태  
- `START` : 시작 상태  
- `ACCEPT` : 허용 상태 집합  
- `delta` : 상태 전이 테이블  

## Code
```c++
#include <bits/stdc++.h>
using namespace std;

// 상태 번호는 0 ~ N-1
int START;
set<int> ACCEPT;

// delta[state][input] = next_state
map<int, map<char, int>> delta;

bool runDFA(const string& input){
    int state = START;

    for(char c : input){
        if(delta[state].count(c) == 0)
            return false;
        state = delta[state][c];
    }
    return ACCEPT.count(state);
}
