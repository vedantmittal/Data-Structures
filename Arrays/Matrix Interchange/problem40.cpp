#include <iostream>
using namespace std;

int arr[1000][1000];

void interchange(int ,int );
void interchange(int r,int c)
{   
    
    int k=0;
    if(r>1){
        while(k<r){
            arr[k][0] = arr[k][0] + arr[k][c-1];
            arr[k][c-1] = arr[k][0] - arr[k][c-1];
            arr[k][0] = arr[k][0] - arr[k][c-1];
            k++;
        }
    }

    for(int i=0;i<r;i++)
	   { 
	       for(int j=0;j<c;j++)
    	    {
    	        cout<<arr[i][j]<<" ";
    	        
    	    }
    	 cout<<endl;
	   }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    for(int i=0;i<r;i++)
	    for(int j=0;j<c;j++)
	    cin>>arr[i][j];
	    interchange( r, c);
	}
	return 0;
}
