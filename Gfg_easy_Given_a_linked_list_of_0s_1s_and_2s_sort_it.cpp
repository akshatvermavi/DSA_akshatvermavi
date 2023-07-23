class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        multiset<int>m;
        Node* temp = head;
        while(temp!=NULL)
        {
            m.insert(temp->data);
            temp = temp->next;
        }
        temp = head;
        while(temp!=NULL)
        {
            auto it = m.begin();
            temp->data = *it;
            m.erase(it);
            temp = temp->next;
        }
        return head;
        
        
    }
};
