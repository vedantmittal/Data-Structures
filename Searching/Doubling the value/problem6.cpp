#include<iostream>
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
        int z;
        for(int i=0;i<n;i++){
            if(temp== arr[i]){
                temp = 2*temp;
            }
        }
        return temp; 
    }
}