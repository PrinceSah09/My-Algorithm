vector<int> findClosestElements(vector<int>& arr, int k, int x) {
      priority_queue<pair<int,int>>pq;
        for(int it: arr){
            pq.push({abs(it-x), it});
            if(pq.size()>k){
                pq.pop();
            }
        }
        arr.clear();
        while(!pq.empty()){
            arr.push_back(pq.top().second);
            pq.pop();
        }
        sort(arr.begin(),arr.end());
        return arr;  
    }
