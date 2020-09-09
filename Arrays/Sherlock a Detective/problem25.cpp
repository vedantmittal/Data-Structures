#include<iostream>
#include<unordered_set>

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
        unordered_set<int> val;
        for(int i=0;i<=n;i++){
            val.insert(arr[i]);
        }
        for(int i=0;i<=n;i++){
            if(val.find(i) == val.end()){
                cout<<i<<" ";
            }
        }
        cout<<endl;
        
    }

}