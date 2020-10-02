#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int temp = k;
        for(int i=0;i<n;i++){
            if(temp== arr[i]){
                temp = 2*temp;
            }
        }
        cout<<temp<<endl;
    }
}