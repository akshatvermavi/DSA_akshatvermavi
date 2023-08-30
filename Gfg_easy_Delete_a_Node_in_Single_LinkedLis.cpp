Node* deleteNode(Node *head,int x)
{
    //Your code here
   
    if(x == 1)  return head->next;
    Node*prev = NULL;
    Node*temp = head;
    
    while(x-- > 1)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    return head;
}
