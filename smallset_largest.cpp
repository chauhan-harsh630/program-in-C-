#include<iostream>
#include<climits>
using namespace std;
int main(){
 int arr[]={2,5,-3,6,4,7};
 int size = sizeof(arr)/sizeof(int);
 int smallest=INT_MAX;
 int largest= INT_MIN;
 
 for (int i = 0; i < size; i++)
 {
    if(arr[i]<smallest){
    smallest=arr[i];
     
    }if (arr[i]>largest)
    {
      largest=arr[i];
    }
    
    
 }
 cout<<"Smallest: "<<smallest<<endl;
cout<<"largest: "<<largest<<endl;
  return 0;
}
