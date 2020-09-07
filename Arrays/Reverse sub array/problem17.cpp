#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x,y,temp;
        cin>>x>>y;
        x= x-1;
        y= y-1;
        
            while(x<y){
                temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;     
            	x++;
            	y--;
            }
    
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

}