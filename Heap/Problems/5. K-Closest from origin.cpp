class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue< pair< double, pair<int,int>>> pq;
        vector<vector<int>>v;
        for(int i=0;i<points.size();i++){
            double temp =  (points[i][0]*points[i][0]) + (points[i][1]*points[i][1]) ;
            pq.push({temp,{points[i][0],points[i][1]}});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            v.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return v;
    }
};
