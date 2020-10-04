// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
        int temp = A;
        int val = B-A+1;
        set<int> num;
        for(int i=0;i<n;i++){
            num.insert(arr[i]);
        }
        while(val--){
            auto res = num.find(temp);
            if(res!=num.end()){
                ++temp;
            }
            else{
                return 0;
            }
        }
        return 1;
	}
};
	

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}


