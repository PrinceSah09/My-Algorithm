#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[6] = {7,10,4,3,20,15};
	
	// 3 4 7 10 15 20 => 7 right answer  
	
	int k = 3;
	//find out the kth smallest element in the array
	priority_queue<int>pq;
	for(int i=0;i<6;i++){
		pq.push(arr[i]);
		if(pq.size()>k)pq.pop();
	} 	
	cout<<pq.top()<<endl;
}
