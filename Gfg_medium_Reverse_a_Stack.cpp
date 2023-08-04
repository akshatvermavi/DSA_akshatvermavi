class Solution{
public:
    void insertAtBottom(stack<int>& st, int item) {
        if (st.empty()) {
            st.push(item);
        } else {
            int temp = st.top();
            st.pop();
            insertAtBottom(st, item);
            st.push(temp);
        }
    }
    void Reverse(stack<int> &st){
        if (!st.empty()) {
            int top= st.top();
            st.pop();
            Reverse(st);
            insertAtBottom(st, top);
        }
    }
};
