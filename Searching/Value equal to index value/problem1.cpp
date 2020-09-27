// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;
class Solution{
public:
	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> val;
	    int count =0;
        for(int i=0;i<n;i++){
            if((i+1) == arr[i]){
                val.insert(val.begin()+count,arr[i]);
                count++;
            }
        }
        return val;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}