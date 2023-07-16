class Solution
{
    public:
        queue<int> rev(queue<int> q){
        deque<int>d;
        queue<int>Q;
        while(!q.empty()){
            int m = q.front();
            d.push_front(m);
            q.pop();
        }
        while(!d.empty()){
            int m = d.front();
            Q.push(m);
            d.pop_front();
        }
        return Q;
        }
};
