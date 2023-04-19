// Merge Sort Algorithm

#include<iostream>
using namespace std;

void mergesort(int *arr, int s, int e, int mid 
    int len1 = mid-s+1;
    int len2 = e - mid;
    
    //Create two array
    int *first = new int[len1];
    int *second = new int[len2];
    
    //Copying values
    int i=0;
    for(int index=s;index<=mid;index++){
    	first[i++] = arr[index];
	}
	
	int j=0;
	for(int index=mid+1;index<=e;index++){
		second[j++] = arr[index];
	}
	
	//Merge both array
	int l=0,m=0,mainindex=s;
	while(l<len1 && m<len2){
		if(first[l]<second[m]){
			arr[mainindex++] = first[l++];
		}
		else{
			arr[mainindex++] = second[m++];
		}
	}
	
	//Edge case (For remaining elements)
	while(l<len1){
		arr[mainindex++] = first[l++];
	} 
	while(m<len2){
		arr[mainindex++] = second[m++];
	}
	delete []first;
	delete []second;
}


void merge(int *arr, int s, int e){
    //Base case
    if(s>=e)return;
    
    //Mid
    int mid = s+(e-s)/2;
    //Left call
    merge(arr, 0, mid);
    
    //Right call
    merge(arr, mid+1, e);
    
    
    //Merge sorted array
    mergesort(arr, s, e, mid);
}


int main()
{
    int arr[7] = {5,4,2,6,8,9,0};
    int size = 7;
    merge(arr, 0, size-1);
     
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
