#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;
    while(a--){
        int n,k;
        cin>>n>>k;
        int arr[n],fn[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            cin>>fn[i];
        }
        int temp=0;
        for(int i=0;i<n;i++){
            if(k%2 == 0){
                if(arr[i]%2!=0){
                    temp = temp + fn[i];
                }
            }
            else{
                if(arr[i]%2==0){
                    temp = temp + fn[i];
                }
            }
        }
        cout<<temp<<endl;
        
        
    }

}