#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[], int & n, int i)
{
   if(i==n-1)
   return 1;
   if(arr[i+1]<arr[i] && i+1<n)
   return -1;

   sorted(arr,n,i+1);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    bool ans = sorted(arr,n,0);
    cout<<ans;

}
