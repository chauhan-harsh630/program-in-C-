#include<iostream>
using namespace std;
int Sqrte_number(int x){
int start = 0,end=x;
    int mid,ans;
    while (start<=end)
    {
        mid = start+(end-start)/2;
        if (mid*mid==x)
        {
           return mid;
        }else if (mid*mid<x)
        {
            ans = mid;
            start = mid+1;
        }else{
            
            end = mid-1;
        }  
    }
 
    return ans;
}
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
   int result =  Sqrte_number(x);
   cout<<"The integer Squar root "<<x<<" "<<" is "<<result<<endl;
    return 0;
}
    