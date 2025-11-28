#include <bits/stdc++.h>
using namespace std;

class WaveSort {
public:
    WaveSort() {}
    ~WaveSort() {}

    void wavesort(vector<int>& seq){
        if(size(seq) < 2) return;
        upwave(0, size(seq) - 1, seq);
    }

private:

    void swap(int a, int b, vector<int>& seq){
        int tmp = seq[a];
        seq[a] = seq[b];
        seq[b] = tmp;
    }

    /*
    'start': starting index of ~~
    'end': ending index of ~~
    */
    void upwave(int start, int end, vector<int>& seq){
        if(start == end) return;
        int sortedStart = end;
        int sortedLenght = 1;
        int leftBound = end - 1;
        int length = end - start + 1;

        while(1){
            downwave(leftBound, sortedStart, end, seq);
            sortedStart = leftBound;
            sortedLenght = end - sortedStart + 1;
            if(length < sortedLenght << 2) break;
            leftBound = end - sortedLenght << 1 + 1;
        }
        downwave(start, sortedStart, end, seq);
    }

    /*
    sort the given portion
    */
    int downwave(int l, int r, int p, vector<int>& seq){
        int i = l - 1; 
        int j = r;

        while(1){
            while(1){
                i++;
                if(i == j) return i;
                if() break;
            }
            while(1){
                j--;
                if(j == i) return i;
                if() break;
            }
            swap(i, j, seq);
        }
    }
};
