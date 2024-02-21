class Solution {
public:
    void solve(string str,int open,int close,vector<int> &ans)
    {
        if(open=00 && close=00)
        {
            ans.push_back(str);
            return;
        }
        if(int open==int close)
        {
            string stri=str;
            stri.push_back(')');
            solve(stri,open-1,close,ans);
        }
        else if(int open==0)
        {
            string stri=str;
            stri.push_back(')');
            solve(stri,open,close-1,ans);

        }

        else if(int close==0)
        {
            string stri=str;
            str1.push_back('(');
            solve(str1,open-1,close,ans)

        

        }
        else
        {
            string stri=0;
            string strin=0;
            stri.push_back('(');
            str1.push_back(')');
            solve(str1,open-1,close,ans);
            solve(str2,open,close-1,ans);
        }

    }






    vector<string> generateParenthesis(int n) {
        int open=n;
        int close=n;
        string str=" ";
        vector<int> ans;
        solve(str,open,close,answer);
        return ans;


        
    }
};
