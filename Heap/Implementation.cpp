// Implemetations of Max Heap

#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    int *arr;
    int index;

    MaxHeap(){ 	 //Constructor
        arr = new int[100];
        index = 0;
    }

    void insert(int data){  //Insertion on Max Heap
        arr[++index] = data;
        while(index>1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
            }
            else{
                return;
            }
        }
    }
    
    void print(){   //Printing the elements of Heap
    	for(int i=1;i<=index;i++){
			cout<<arr[i]<<" ";
		}
	}
};

int main(){
    MaxHeap h1;
    h1.insert(22);
    h1.insert(232);
    h1.insert(34);
    h1.insert(56);
    h1.insert(23);
    
    h1.print();
}
