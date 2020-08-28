#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
	int a,b,i,j,temp,val,digits=0,check=0,succ=0,res=0;
	
	cin>>b;
	while(b){
	    cin>>a;
    	for(i=2;i<INT_MAX;i++){
    		val = i;
    		while(val>0){
    			temp = val % 10;
    			val = val/10; 
    			++digits;
    			if(temp>1){
    				for(j=2;j<=temp;j++){
    				if(temp % j == 0){
    					++ check;
    				}
    			}
    			if(check == 1){
    				++succ;
    			}
    			check =0;
    			}
    		}
    		if(succ == digits){
    			++res;
    			if(res == a){
    				cout<<i;
    				break;
    			}
    		}
    		succ=0;
    		digits=0;
    		
    	}
	}
}
