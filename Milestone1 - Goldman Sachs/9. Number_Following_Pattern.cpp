/*
Problem Link: https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1
Submitted By Amanullah Khan
*/

#include<bits/stdc++.h> 
using namespace std; 

    string printMinNumberForPattern(string s){
        string res="";
        stack<int> st;
        int num=1;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='D'){
                st.push(num++);
            }
            else
            {
                st.push(num++);
                while(!st.empty()){
                    res+=to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num++);
        while(!st.empty()){
            res+=to_string(st.top());
            st.pop();
        }
        
        return res;
    }

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        cout << printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
