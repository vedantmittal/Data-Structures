#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        map<int,int> val;
        for(int i =0;i<n;i++){
            val[arr[i]]++;
        }
        map<int,int>::iterator it = val.begin();
        if(it->first == 0){
            return it->second;
        }
        else{
            return 0;
        }
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
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
