#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,3,4,4,5,5,7,8};
    int size = sizeof(arr)/sizeof(int);
    int target = 4;
    int start = 0,end = size-1,first = -1,last = -1,mid;
    while (start<=end)
    {
       mid = start+(end-start)/2;
       if (arr[mid]==target)
       {
            first=mid;
            end = mid-1;
       }
       else if (arr[mid]<target)
       {
            start = mid+1;
       }
       else
       {
        end = mid-1;
       }  
    } 
    start = 0; end=size-1;
    while (start<=end)
    {
       mid = start+(end-start)/2;
       if (arr[mid]==target)
       {
           last = mid;
           start = mid+1;
       }
       else if (arr[mid]<target)
       {
         start = mid+1;
       }
       else
       {
        end = mid-1;
       }
    } 
      vector<int> a={first,last};
      cout<<a[0]<<" "<<a[1];  
    return 0;
}