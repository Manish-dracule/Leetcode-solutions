class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)return stones[0];
        priority_queue<int>pq;
        for(auto c:stones)pq.push(c);
        int sub;
        while(!pq.empty()){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            sub=x-y;
            if(pq.empty())break;
            pq.push(sub);
        }
        return sub;
    }
};
