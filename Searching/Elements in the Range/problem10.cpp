// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
        int temp =0;
        map<int,int> val;
        for(int i=0;i<n;i++){
            val[arr[i]]++;
        }
        int count = B-A+1;
        for(auto itr : val){
            if(itr.first>A-1 || itr.first<B+1){
                ++temp;
            }
        }
        if(temp == count){
            return 1;
        }
        else{
            return 0;
        }
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


