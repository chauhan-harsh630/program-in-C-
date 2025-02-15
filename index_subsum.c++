#include<iostream>
#include<vector>
using namespace std;
class Sum_sub{
    public:
    vector<int>sum_Of_array(vector<int> arr , int target){
        int n = arr.size();
        int sum = 0 ,j=0;
        for (int i = 0; i < n; i++)
        {
           sum+=arr[i];
           while (sum>target &&j<=i){
             sum-=arr[j++];
           }
            if (sum==target){
             return {j+1,i+1};
            }  
        }
        return {-1};
    }
};
int main(){
    Sum_sub obj;
     vector<int> arr = {2,4,6,8,9};
     int target =4;
    vector<int> result = obj.sum_Of_array(arr,target);
    if (result.size()==2)
    {
        cout<<"subarray found from index  "<<" "<<result[0]<<" to "<<" "<< result[1];
    }else{
       cout<<"No subarray  found in the given array: "<<endl;
    }
    return 0;
}