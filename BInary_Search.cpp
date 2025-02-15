#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,7,8,9,11,13,15};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size-1;
    int key;
    cout<<"Enter the key: "<<endl;
    cin>>key; 
    int mid;
    while (start<=end)
    {   
         mid = (start+end)/2;
            if (arr[mid]==key)
            {
               cout<<"Got it!  "<< key <<"  is index: "<<mid;
             return 0;
            }else if (arr[mid]<key)
            {
                start = mid+1;
                
            }else{
                end = mid-1;
                
            }
    }
    cout<<"Key dose not exist in this array: ";
    return 0;
}
