#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    // int N = 7; //Range of array
    int sum =0;
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; 
        ans = (size+1)*(size+2)/2-sum; 
    }
    cout<<ans<<endl;
    return 0;
}
