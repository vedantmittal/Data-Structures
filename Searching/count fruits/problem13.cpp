#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
	int p[3],it[3],c;
    for(int i=0;i<3;i++){
        cin>>p[i];
    }
    for(int i=0;i<3;i++){
        cin>>it[i];
    }
    cin>>c;
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            if(p[i]>p[j]){
                swap(&p[i],&p[j]);
                swap(&it[i],&it[j]);
            }
        }
    }
    int count =0;
    int i=0;
    while (c)
    {
        if(i>3){
            break;
        }
        if(c>=p[i] && it[i]){
            ++count;
            --it[i];
            c= c- p[i];
        }
        else{
            ++i;
        }
    }
    cout<<count;
}