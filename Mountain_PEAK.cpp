#include<iostream>
#include<vector>
using namespace std;
 int Peak_number(vector<int>&arr){
        int end = arr.size()-1;
        int start = 0,mid;
        while (start<=end)
        {
            mid = end+(start-end)/2;
           if ((mid==0||arr[mid]>arr[mid-1]) && (mid==arr.size()-1||arr[mid]>arr[mid+1]))
           {
             return mid;           
           }
             else if (arr[mid]>arr[mid-1])
           {
                start = mid+1;
           }else{
                end =  mid-1;
           }
        }  
        return -1;
    }
   
int main(){
    vector<int>arr = {1,6,3,2,1};
    int Result = Peak_number(arr);
    cout<<"index: "<<Result<<endl;
    cout<<"Element of array: "<<arr[Result]<<endl;
    return 0;
}