#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,6,7,9};
    int size = sizeof(arr)/sizeof(int);
    int target = 9;
    int start = 0,end = size-1,index = size,mid;
    while (start<=end)
    {
        mid = start+(end-start)/2;
        if (arr[mid]==target)
        {
           index = mid;
           break;
        }else if (arr[mid]<target)
        {
            start = mid+1;
        }else{
            index = mid;
            end = mid-1;
        }
        
        
    }
    cout<<index;
    return 0;
}