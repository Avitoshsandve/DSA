#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
   void helper(vector<string> &v,int n,int oc,int cc,string s)
   {
    if(oc==n && cc==n)
    {
        v.push_back(s);
        return;

    }
    if(oc<n)
    {
        helper(v,n,oc+1,cc,s+"(");
    }
    if(cc<oc)
    {
        helper(v,n,oc,cc+1,s+")");
    }
   }


    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int oc=0;int cc=0;
        helper(v,n,oc,cc,"");
        return v;
    }
};
int main()
{
    Solution obj;
    vector<string> v=obj.generateParenthesis(3);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}