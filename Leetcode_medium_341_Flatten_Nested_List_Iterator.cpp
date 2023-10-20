class NestedIterator {
private:
    stack<NestedInteger> s; // Stack to hold the nested integers
    
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        // Push all elements of the input list onto the stack in reverse order
        for (int i = nestedList.size() - 1; i >= 0; i--) {
            s.push(nestedList[i]);
        }
    }
    
    int next() {
        int result = s.top().getInteger();
        s.pop();
        return result;
    }
    
    bool hasNext() {
        // Keep popping until we find an integer or the stack is empty
        while (!s.empty()) {
            if (s.top().isInteger()) {
                return true;
            }
            vector<NestedInteger> nestedList = s.top().getList();
            s.pop();
            for (int i = nestedList.size() - 1; i >= 0; i--) {
                s.push(nestedList[i]);
            }
        }
        return false;
    }
};
