#include <iostream>
using namespace std;
int bs(int a[], int start, int end,int x)
{
    while(start<=end)
    {
        int mid = (start +end)/2;
        if(a[mid] ==x)
        return mid;
        else if(x>a[mid])
        start = mid+1;
        else
        end = mid -1;
    }
    return -1;
}
int expsearch(int a[], int n, int x)
{
    if(a[0]==x) return 0;
    int i=1;
    while(i<n && a[i]<=x)
    {
        i = i*2;
    }
    return bs(a,i/2,min(i,n-1),x);
    
}
int main() {
int a[] = {3,4,5,6,11,13,14,15,56,70};
int n = sizeof(a)/sizeof(int);
int x = 13;
int ans = expsearch(a,n,x);
cout<<ans;
return 0;
}

// For unbounded array(infinite size array) Method 01

#include <iostream>
using namespace std;
int bs(int a[], int start, int end,int x)
{
    while(start<=end)
    {
        int mid = (start +end)/2;
        if(a[mid] ==x)
        return mid;
        else if(x>a[mid])
        start = mid+1;
        else
        end = mid -1;
    }
    return -1;
}
int expsearch(int a[], int n, int x)
{
    int i=0, j=1;
    while(1)
    {
      if(a[i]>x)
        break;
      if(a[i]==x)
      {
        ans = i;
        i++;
      }
      
    }
  return ans;
    
    
}
int main() {
int a[] = {3,4,5,6,11,13,14,15,56,70};
int n = sizeof(a)/sizeof(int);
int x = 13;
int ans = expsearch(a,n,x);
cout<<ans;
return 0;
}

// For unbounded array(infinite size array) Method 02

#include <iostream>
using namespace std;
int bs(int a[], int start, int end,int x)
{
    while(start<=end)
    {
        int mid = (start +end)/2;
        if(a[mid] ==x)
        return mid;
        else if(x>a[mid])
        start = mid+1;
        else
        end = mid -1;
    }
    return -1;
}
int expsearch(int a[], int n, int x)
{
    int i=0, j=1;
    while(a[j]<x)
    {
     i = j;
     j = j*2;
      
    }
  return bs(a,i,j,x);
    
    
}
int main() {
int a[] = {3,4,5,6,11,13,14,15,56,70};
int n = sizeof(a)/sizeof(int);
int x = 13;
int ans = expsearch(a,n,x);
cout<<ans;
return 0;
}
