#include<iostream>
#include<algorithm>
using namespace std;

struct increment{
    int a;
    int b;
    int k;
};

int main(){

    int q;   
    cin>>q;
    while(q--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        increment brr[m];
        for(int i=0;i<n;i++){
            arr[i] = 0;
        }
        for(int i=0;i<m;i++){
            cin>>brr[i].a>>brr[i].b>>brr[i].k;
        }
        int j=0;
        for(int i=0;i<m;i++){
            j = brr[i].a;
            arr[j] += brr[i].k;
            ++j;
            while (j<=brr[i].b)
            {
                if(brr[i].a == brr[i].b ){
                    break;
                }
                else{
                    arr[j]+=brr[i].k;
                }
                j++;
            }
        }
        sort(arr,arr+n);
        cout<<arr[n-1]<<endl;
        
    } 

}