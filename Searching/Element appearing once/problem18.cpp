#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	
	int search(int arr[], int N){
	    int val;
	    for(int i=0;i<=N-1;i++){
	        if(arr[i]==arr[i+1]){
	            ++i;
	        }
	        else{
	            val = arr[i];
	            break;
	        }
	    }
	    return val;
	    
	}
};

int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}