class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sd) {
       deque<int>q;
        for(auto c:st)q.push_back(c);
        for(auto c:sd){
            
            if(q.front()==c)q.pop_front();
            else{
                int s=q.size();
                int f=1;
                while(s--){
                    int x=q.front();
                    if(x==c){
                        q.pop_front();
                        f=0;
                        break;
                    }
                    else{
                        q.pop_front();
                        q.push_back(x);
                    }
                
                    
                }
                if(f)return q.size();
            }
        }
        return 0; 
    }
};
