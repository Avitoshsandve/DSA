#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;

    void solve(int i,vector<int>&arr,vector<int>&temp,int target)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        if(target<0)
        
            return;
        
        if(i==arr.size())
        
            return;
        
        //not taking the element
        solve(i+1,arr,temp,target);
        //taking the element
        temp.push_back(arr[i]);
        solve(i,arr,temp,target-arr[i]);
        temp.pop_back();
        


    };     
    vector<vector<int>> combinationSum(vector<int>& arr, int target){
        ans.clear();
        vector<int>temp;
        solve(0,arr,temp,target);
        return ans;
        
    }
};
int main()
{
    Solution obj;
    vector<int>arr={2,3,6,7};
    int target=7;
    vector<vector<int>>ans=obj.combinationSum(arr,target);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}