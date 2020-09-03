#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;
    while(a--){
        int n,k,temp=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i] == a[j]){
                    ++temp;
                    if(temp>=2){
                        break;
                    }
                }
            }
            if(temp==1){
                    cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}