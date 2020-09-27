#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int count(int arr[], int n, int x) {
        map<int,int> val;
	    for(int i=0;i<n;i++){
            val[arr[i]]++;
        }
        for(auto k: val){
            if(k.first == x){
                return k.second;
            }
        }
        return 0;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}