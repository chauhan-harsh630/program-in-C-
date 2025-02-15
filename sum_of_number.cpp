#include<iostream>
using namespace std;
int Sum_of_nmber(int n){
    int sum = 0;
    for (int i = 1; i <=n; i++)
    {
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<Sum_of_nmber(n)<<endl;
       return 0;
}