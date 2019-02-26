#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int x;
	// This is a  fking Source
	
	for(int i=1;i<N;i++){
		x=i;
		for(int k=0;k<N;k++){
			if(k==x) cout << "[";
			cout << d[k];
			if(k==x) cout << "]";
			cout << " ";
		}
		for(int j=i-1;j>=0;j--){
			if(d[x]>d[j]){
				swap(d,x,j);
				x=j;
			}
		}
		cout << "=> ";
		for(int k=0;k<N;k++){
			if(k==x) cout << "[";
			cout << d[k];
			if(k==x) cout << "]";
			cout << " ";
		}cout << "\n";
		
	}

//Write your code here.

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
