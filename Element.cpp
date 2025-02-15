#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8,5};
    int size=sizeof(arr)/sizeof(int);
    int traget = 4;
           int index =-1;
    for (int i = 0; i < size; i++){
        if (arr[i]==traget)

        {
           index=i;
          break;
        }
        
        
    }
    if (index!=-1)
    {
        cout<<"find the element on this index  "<<index<<endl;

    }else{
        cout<<"Invelid index! "<<endl;
    }
    
   
    return 0;
}