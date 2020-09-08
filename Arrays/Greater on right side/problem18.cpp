#include<iostream>
#include<map>
using namespace std;
int main(){
    int a;
    cin>>a;
    while (a--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<int,int> val;
        map<int,int>::reverse_iterator it;
        for(int i=0;i<n;i++){
            val[arr[i]] = i;
        }
        it = val.rbegin();
        for(int i=0;i<n,it!=val.rend();i++){
            if(i < it->second){
                arr[i] = it->first;
            }
            else if(i == n-1){
                arr[i] = -1;
            }
            else{
                ++it;
                i = i-1;
            }
        }
        for (int i = 0; i < n; i++)
        {   
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}