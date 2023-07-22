class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
       unordered_map<int,int> m;
       Node *h1 = new Node(-1);
        Node *tail = h1;
        
        while(head)
        {
            if(!m[head->data])
            {
                tail->next = head;
                tail = tail->next;
            }
            m[head->data]++;
            head = head->next;
        }
        tail->next = NULL;
        return h1->next;
    }
};
