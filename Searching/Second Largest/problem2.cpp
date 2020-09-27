#include <bits/stdc++.h>

using namespace std;
class Solution{
public:	
	int print2largest(int arr[], int n) {
        if(n==1){
            return arr[n-1];
        }
        sort(arr,arr+n);
        for(int i=n-1;i>0;i--){
            if(arr[i]!=arr[i-1]){
                return arr[i-1];
            }
        }
        return -1;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}