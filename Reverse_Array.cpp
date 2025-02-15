#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,8,7,3};
    int size= sizeof(arr)/sizeof(int);
    int start=0;
    int end = 5;
    cout<<"Array: "<<endl;
    for (int j = 0; j < size; j++)
    {
       cout<<arr[j]<<" ";
    }
    cout<<endl;
  
    while (start<end)
    {
     swap(arr[start],arr[end]);
        start++;
        end--;
    } 
    cout<<"Reverse Array: "<<endl;
    for (int i  = 0; i < size; i++){
        arr[i];
        
    cout<<arr[i]<<" ";
    }
      
        return 0;
}