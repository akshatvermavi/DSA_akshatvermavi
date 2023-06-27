
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {// code here
        Node* dummy = new Node(0);
        Node* t = dummy;
        
        map<int,int> m;
        
        Node *curr=head1;
        Node *curr1=head2;
        
        while(curr!=NULL){
            m[curr->data]++;
            curr=curr->next;
        }
        while(curr1!=NULL){
            m[curr1->data]++;
            curr1=curr1->next;
        }
        
        for(auto itr: m){
            Node *temp = new Node(itr.first);
            t->next=temp;
            t=t->next;
        }
        Node* head = dummy->next;
        return head;
    }
};
