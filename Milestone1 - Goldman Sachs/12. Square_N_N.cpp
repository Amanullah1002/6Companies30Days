/*
Problem Link: https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1
Submitted by Amanullah Khan
*/

#include<bits/stdc++.h>
using namespace std;
    void countSquares(int n)
    {
        cout << (n * (n + 1) / 2) * (2*n + 1) / 3 <<endl;
    }

int main()
{
	int n;
	cout<<"Enter the value of n ";
	cin>>n;
	cout<<"\nNumber of square in "<<n<<" * "<<n<<" Chessboard : "<<countSquares(n);
	return 0;
}
