class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
        int cur = arr[i];
        int par = arr[(i - 1) / 2];
        
        while(i > 0 and par < cur){
            swap(arr[(i - 1) / 2], arr[i]);
            i = (i - 1) / 2;
            
            cur = arr[i];
            if(i > 0)
                par = arr[(i - 1) / 2];
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for(int i = 1; i < n; i++){
            heapify(arr, n, i);
        }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr, n);
        
        int last = n;
        
        while(last > 0){
            swap(arr[0], arr[--last]);
            
            int ind = 0;
            int cur = arr[ind];
            int c1, c2;
            c1 = c2 = -1;
            
            if(ind * 2 + 1 < last)    
                c1 = arr[ind * 2 + 1];
            if(ind * 2 + 2 < last)
                c2 = arr[ind * 2 + 2];
                
            while(c1 > cur or c2 > cur){
                if(c1 > cur and c1 > c2){
                    swap(arr[ind * 2 + 1], arr[ind]);
                    ind = ind * 2 + 1;
                }
                else if(c2 > cur){
                    swap(arr[ind * 2 + 2], arr[ind]);
                    ind = ind * 2 + 2;
                }
                
                c1 = c2 = -1;
                
                if(ind * 2 + 1 < last)    
                    c1 = arr[ind * 2 + 1];
                if(ind * 2 + 2 < last)
                    c2 = arr[ind * 2 + 2];
            }
        }
    }
};
