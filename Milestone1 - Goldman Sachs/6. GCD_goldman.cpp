/*
Problem Link: https://leetcode.com/problems/greatest-common-divisor-of-strings/
Submitted by Amanullah Khan
*/

#include<iostream>
#include<algorithm>
using namespace std;

string gcdOfStrings(string& str1, string& str2) {
		int result = __gcd(str1.length(), str2.length());
		return (str1 + str2 == str2 + str1) ? str1.substr(0, result) : "";
	}

int main()
{
	string str1="ABCABC";
    string str2="ABC";
    
    string str3=gcdOfStrings(str1,str2);
    cout<<str3;
    return 0;
}




