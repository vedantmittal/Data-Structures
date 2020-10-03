#include<iostream>
#include<string.h>
#include<set>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        set<char> vow = {'a','e','i','o','u','A','E','I','O','U'};
        string s;
        cin.ignore();
        getline(cin,s);
        int c1=0,sp=0;
        for(int i=0;i< s.length();i++){
            auto temp = vow.find(s[i]);
            if(temp!=vow.end()){
                cout<<*temp;
                ++c1;
                ++sp;
            }
            if(s[i]==' ' && sp){
                cout<<' ';
                --sp;
            }
        }
        if(c1==0){
            cout<<"No Vowel";
        }
        cout<<endl;
    }
    return 0;
}