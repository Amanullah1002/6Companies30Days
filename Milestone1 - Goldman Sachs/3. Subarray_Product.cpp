//Submitted by Amanullah Khan

#include <bits/stdc++.h>
#define ll long long
using namespace std;

class getAnswer{
  public:
    int countS(const vector<int>& a, int n, long long k) {
        if(k <= 1) return 0;
        int ans=0;
        ll prod=1, limit=0;
        for(int i=0; i<n; i++) {
            prod =prod* a[i];
            while(prod >= k) {
                prod /= a[limit];
                limit++;
            }
            ans += (i - limit + 1);
        }
        return ans;   
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        ll int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        getAnswer an;
        cout << an.countS(arr, n, k) << endl;
    }
    return 0;
}
