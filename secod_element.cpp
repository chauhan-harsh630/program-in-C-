#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,4,7,6,2,1,9};
    int size = sizeof(arr)/sizeof(int);
    int Hight = INT_MIN;
    //
         int Second = INT_MIN;
  
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>Hight)
        {
            Second=Hight;
            Hight = arr[i];

        }    
     for (int j = 0; j < size; j++){ 
        if (Hight!=arr[i])
            {
                Second = max(Second,arr[i]);
            }
     }

    }
    if (Second==INT_MIN)
    {
        cout<<"NO second highest Element "<<endl;
    }else{
        cout<<"Second highest element: "<<Second<<endl;
    }
    return 0;
}
