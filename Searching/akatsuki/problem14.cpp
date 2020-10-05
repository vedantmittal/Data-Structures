/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n;
	cin>>n;
	int ax[n],ay[n],hx[n],hy[n];
	for(int i =0;i<n;i++){
		cin>>ax[i]>>ay[i];
	}
	for(int i =0;i<n;i++){
		cin>>hx[i]>>hy[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(ax[i]>ax[j]){
				swap(&ax[i],&ax[j]);
				swap(&ay[i],&ay[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(hx[i]>hx[j]){
				swap(&hx[i],&hx[j]);
				swap(&hy[i],&hy[j]);
			}
		}
	}
	int sum=0;
	int temp=-1;
	set<int> check;
	int num=0,store =0;
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			if(num==1){
				auto checking = check.find(j);
				if(checking!=check.end()){
					int val = abs(hx[i] - ax[j]) + abs(hy[i] - ay[j]);
					if(temp==-1){
						temp = val;
						store =j;
					}
					if(val<temp){
						temp = val;
						store =j;
					}
				}
				
			}
			else{
				int val = abs(hx[i] - ax[j]) + abs(hy[i] - ay[j]);
				if(temp==-1){
					temp = val;
					store =j;
				}
				if(val<temp){
					temp = val;
					store = j;
				}
				num=1;
			}
		}
		check.insert(store);
		sum = sum+temp;
		temp =-1;
	}
	cout<<sum;
	return 0;
}
