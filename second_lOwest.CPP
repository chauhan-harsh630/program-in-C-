#include<iostream>
#include<climits>
using namespace std; 
int main(){
    int arr[]={2,5,1,7,5,9,3};
    int size = sizeof(arr)/sizeof(int);
    int First_lowest = INT_MAX;
    int Secondlowest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
       if (arr[i]<First_lowest)
       {
            Secondlowest = First_lowest;
            First_lowest=arr[i];
       }else if (First_lowest<arr[i]&&arr[i]<Secondlowest)
         {
           Secondlowest = arr[i];
         }
       
       
    }
    if (Secondlowest==INT_MAX)
    {
         cout<<"NO second LOwest ELement"<<endl;

    }
    else{
      cout<<"Seond lowest Element: "<<Secondlowest<<endl;
    }
    
    
    return 0;

}  