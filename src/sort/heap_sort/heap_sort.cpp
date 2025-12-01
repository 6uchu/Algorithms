#include <bits/stdc++.h>
using namespace std;
//Iteration start from 0
//nth left child`s index is 2n + 1 and right child`s index is 2n + 2
int tree[10000004];

//Swap two elements of Array tree
void swap(int a, int b){
	int tmp = tree[a];
	tree[a] = tree[b];
	tree[b] = tmp;
}

//Heapify a subtree rooted with node i
//N: size of the heap(or array portion not sorted)
void heapify(int N, int i){
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	
	//Compare parant value with both child value and save largest value's index
	if(left < N && tree[left] > tree[largest])
		largest = left;
		
	if(right < N && tree[right] > tree[largest])
		largest = right;
	
	//swap largest and i by index 
	if(largest != i){
		swap(largest, i);
		//reheapify -- the subtree heapify affected
		heapify(N, largest);
	}
}

void heapSort(int N, int sizetree){
	//heapify from the last subtree of tree--N / 2 - 1, from bottom to top 
	for(int i = N / 2 - 1; i >= 0; i--){
		heapify(N, i);
		for(int i = 0; i < sizetree; i++){
			cout << tree[i] << ' ';
		}
		cout << '\n';
	}

	//extract max value from tree, root
	//reheapify less sized tree 
	for(int i = N - 1; i >= 0; i--){
		swap(0, i);
		heapify(i, 0);
		for(int i = 0; i < sizetree; i++){
			cout << tree[i] << ' ';
		}
		cout << '\n';
	}
	//print array tree
	for(int i = 0; i < N; i++){
		cout << tree[i] << ' ';
	}
	
}

int main(){
	//number of elements in array tree
	int N;

	//get input size of array tree
	cin >> N;
	int const sizetree = N;

	//get input array tree
	for(int i = 0; i < N; i++)
		cin >> tree[i];
	
	heapSort(N, sizetree);

	//print heapsorted array tree
	cout << "\nFinal result:\n";
	for(int i = 0; i < N; i++){
		cout << tree[i] << ' ';
	}
}
