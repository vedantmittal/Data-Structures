#include <bits/stdc++.h>
using namespace std;

class Solution{


	public:
	int minNum(long long int arr[],int n)
	{
	    long long int sum=0;
	    for(long long int i=0;i<n;i++){
	        sum = sum + arr[i];
	    }
	    if(sum%2==0){
	        return 2;
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
    	 int n;
        cin>>n;
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
      
        Solution ob;
		cout << ob.minNum(a, n);
        
	    cout << "\n";
	     
    }
    return 0;
}

