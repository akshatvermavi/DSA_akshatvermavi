class Solution
{
    public:
     struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node*next,*prev=NULL;
        node* curr=head;
        int count=0;
        while(curr && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(head){
            head->next= reverse(curr,k);
        }
        return prev;
    }
};
