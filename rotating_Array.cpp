#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,5,6,7,8};
    int size= sizeof(arr)/sizeof(int);

    int last = 8;
    for (int  i = size-1 ; i >=0 ; i--)
    {
        arr[i+1]=arr[i]; 
    }
        arr[0]=last;

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
        return 0;
}
