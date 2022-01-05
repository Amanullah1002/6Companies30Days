//Submitted by Amanullah Khan
#include <bits/stdc++.h>

using namespace std;

class Answer{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        int n = string_list.size();
        map <string,vector <string>> mv;
        
        for(int i=0; i<n; i++){
            string temp = string_list[i];
            sort(temp.begin(), temp.end());
            mv[temp].push_back(string_list[i]);
        }
        vector <vector <string>> ans;
        
        for(auto it=mv.begin(); it!=mv.end(); it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> slist(n);
        for (int i = 0; i < n; ++i)
            cin>>slist[i]; 
        Answer an;
        vector<vector<string> > result = an.Anagrams(slist);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
