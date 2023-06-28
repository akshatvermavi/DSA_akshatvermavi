/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//  class compare{
//     public:
//     bool operator()(ListNode* a, ListNode* b){
//         return a->val > b->val;

//     }
// };
// class Solution {
// public:

//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;
//         int k = lists.size();
//         if(k==0)
//             return NULL;
//         //first element of every linked list ko insert kr do hesp me
//         for(int i=0;i<k;i++)
//         {
//             if(lists[i]!=NULL)
//             {
//                 minHeap.push(lists[i]);
//             }

//         }
//         ListNode* head = NULL;
//         ListNode* tail = NULL;
//         while(!minHeap.empty())
//         {
//             ListNode* temp = minHeap.top();
//             minHeap.pop();
//             //temp can be the 2st elem of anwer ll
//             if(head==NULL)
//             {
//                 //temo->first elem of ans ll
//                 head = temp;
//                 tail = temp;
//                 if(tail->next != NULL)
//                 {
//                     minHeap.push(tail->next);

//                 }
//                 else{
//                     tail->next =temp;
//                     tail = temp;
//                     if(tail->next != NULL)
//                     {
//                         minHeap.push(tail->next);
//                     }
//                 }
//             }
//         }
//     return head;
//     }
// };


// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */  
// class compare
// {
//     public:
//     bool operator()(ListNode* a,ListNode* b)
//     {
//        return (a->val>b->val);
//     }
// };
 
class compare
{
    public:
    bool operator()(ListNode* a,ListNode* b)
    {
       return (a->val>b->val);
    }
};
 
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        priority_queue<ListNode*,vector<ListNode*>,compare>minheap;
        
        int K=lists.size();

        if(K==0)
        return NULL;

        for(int i=0;i<K;i++)
        {
            if(lists[i]!=NULL)
            {
                minheap.push(lists[i]);
            }
        }

        ListNode* head=NULL;
        ListNode* tail=NULL;

        while(minheap.size()>0)
        {
         ListNode* top=minheap.top();
          minheap.pop();

          if(top->next!=NULL)
          {
              minheap.push(top->next);
          }
          
          if(head==NULL)
          {
              head=top;
              tail=top;
          }
          else
          {
              tail->next=top;
              tail=top;
          }

        }
       return head; 
    }
};
