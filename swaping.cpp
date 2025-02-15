#include<iostream>
using namespace std;
int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"After the swaping:"<<"x = "<<*a<<" "<<"y = "<<*b;
    
}
int main(){
    int x=5,y=6;
    cout<<"Befor swaping: "<<"x = "<<x<<" "<<"y = "<<y<<endl;
    swap(&x,&y);
    
return 0;
}

