#include<iostream>
using namespace std;
int main(){
    int arr[]={1,6,2,3,1};
    int sz=sizeof(arr)/sizeof(int);
    for (int i = 0; i < sz-1; i++)
    {
            int index=i;
            for (int j = i+1; j < sz; j++)
            {
                if (arr[j]<arr[index])
                {
                    index=j;
                }
            }
             swap(arr[i],arr[index]);
        }
for (int k = 0; k < sz; k++)
{
    cout<<arr[k]<<" ";
}
return 0;
}

   