#include<bits/stdc++.h>
using namespace std;

void swap1(int arr[], int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void swap2(string arr[], int i, int j){
	string temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int main(){
	int n;
	cin>>n;
	string name[n];
	int sch[n],marks[n];
	for(int i=0;i<n;i++){
		cin>>name[i];
		cin>>sch[i]>>marks[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(marks[j]>marks[i]){
				swap1(marks,i,j);
				swap1(sch,i,j);
				swap2(name,i,j);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(marks[i]==marks[j]){
				if(name[i]>name[j]){
					swap1(marks,i,j);
					swap1(sch,i,j);
					swap2(name,i,j);
				}
				else if(name[i]==name[j]){
					if(sch[i]>sch[j]){
						swap1(marks,i,j);
						swap1(sch,i,j);
						swap2(name,i,j);
					}
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<name[i]<<" "<<sch[i]<<" "<<marks[i]<<endl;
	}	
	
}