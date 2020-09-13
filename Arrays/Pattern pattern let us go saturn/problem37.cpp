#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int i=0,j=0,k=1;
    int val = n + (n-1);
    int temp =0;
    if(n==1){
    	cout<<arr[0][0];
	}
	else{
	    while(k<=(n-1)){
	        if(temp<n){
	            i=temp;
	            j=0;
	            if(i%2 == 0){
	                cout<<arr[i][j];
	                --i;
	                ++j;
	                while(i>=0){
	                    cout<<arr[i][j];
	                    --i;
	                    ++j;
	                }
	            }
	            else{
	            	i=0;
	            	j= temp;
	                cout<<arr[i][j];
	                ++i;
	                --j;
	                while(j>=0){
	                    cout<<arr[i][j];
	                    ++i;
	                    --j;
	                }
	            }
	            ++temp;
	        }
	        else{
	            i=n-1;
	            int val = n-1;
	            j=k;
	            int sum = i+j;
	            if(sum%2 == 0){
	                cout<<arr[i][j];
	                --i;
	                ++j;
	                while(i>=k){
	                    cout<<arr[i][j];
	                    --i;
	                    ++j;
	                }
	            }
	            else{
	            	i=k;
	            	j= val;
	                cout<<arr[i][j];
	                ++i;
	                --j;
	                while(i<=val){
	                    cout<<arr[i][j];
	                    ++i;
	                    --j;
	                }
	            }
	            ++k;
	        }
	    }
	}
}