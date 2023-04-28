vector <int> nearlySorted(int arr[], int num, int K){
        //Here we use Min Heap 
        priority_queue<int,vector<int>,greater<int>>MinHeap;
        vector<int>SortedArray;
        for(int i=0;i<num;i++){
            MinHeap.push(arr[i]);
            if(MinHeap.size()>K){
                SortedArray.push_back(MinHeap.top());
                MinHeap.pop();
            }
        }
        
        while(!MinHeap.empty()){
            SortedArray.push_back(MinHeap.top());
            MinHeap.pop();
        }
        return SortedArray;
}
