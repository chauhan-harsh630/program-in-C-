#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,7,8,1,9};
    int size= sizeof(arr)/sizeof(int);
    for (int i = size-2; i > 0 ; i--)
    {       bool swapped=0;
       for (int j = 0; j < i; j++)
       {
            if (arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);
                
            }
            
       }
      if (swapped==0)
                {
                    break;
                }
                 
    }
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}
    