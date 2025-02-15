#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,6,10,1,3};
    int size = sizeof(arr)/sizeof(int);
    int ans = -1,start = arr[0],end=size-1;
    int mid;
    while (start<=end)
    {
        mid = start+(end-start)/2;
        if (arr[mid]>=arr[0])
        {
           start = mid+1;
           return mid;
        }else{
            ans = arr[mid];
            end = mid-1;
        
        }
        
    }
    
    return 0;
}