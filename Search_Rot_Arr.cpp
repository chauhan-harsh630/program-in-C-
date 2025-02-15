#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,6,0,1,2};
    int size = sizeof(arr)/sizeof(int);
    int start = 0,end = size-1,mid,ans=-1;
    int target = 1;
    while (start<=end)
    {
        mid = start+(end-start)/2;
        if (arr[mid]==target)
        {
            ans = mid;
            break;
        }    //left helf sort check 
        if (arr[start]<=arr[mid])
        {
            if (arr[start]<=target&&arr[mid] > target)
            {
               end = mid-1;
            }
        else
        {
            start = mid+1;
        }
        }
    
        //Right helf sort check 
         else{
            if (arr[mid]<=target&&target<=arr[end])
            {
                start = mid+1;
            }else{
                end = mid-1;
            }
            

        }
        
    }
    
    cout<<ans;
   return 0; 
}