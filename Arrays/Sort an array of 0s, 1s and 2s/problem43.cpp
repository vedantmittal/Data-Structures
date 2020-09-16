#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


void sort012(int a[], int n)
{
    map<int,int> val;
    for(int i=0;i<n;i++){
        val[a[i]]++;
    }
    map<int,int>::iterator it;
    it = val.begin();
    int i=0;
    while(i<n && it!= val.end()){
       int temp = it->second;
       while(temp>0){
           a[i] = it->first;
           ++i;
           temp--;
       }
       ++it;
    }
}