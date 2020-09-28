#include <bits/stdc++.h>
using namespace std;


vector<long long> reverse(vector<long long> m,int w, int q){
    long ved;
	long long i=w;
	long long j = q-1;
	long long temp;
	while(i<j){
		temp = m[i];
		m[i] = m[j];
		m[j] = temp;
		i++;
		j--;
	}
    return m;
}

vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    for(int i =0;i<n;i++){
    	if((i+k-1)<n){
    		mv = reverse(mv,i,i+k);
    		i = i+k-1;
		}
		else{
			mv = reverse(mv,i,n);
			break;
		}
	}
	return mv;
}


int main() {
    
    int t;
    cin >> t; 

    while(t--){ 

        int n;
        cin >> n; 
        
        vector<long long> mv; 
        
        int k;
        cin >> k; 

        for(long long i =0;i<n;i++){
            long long x;
            cin >> x; 

            mv.push_back(x); 
        }
        
        mv = reverseInGroups(mv, n, k);
        
        for(long long i =0;i<n;i++){
            cout << mv[i] << " "; 
        }

        cout << endl;
        
       

    }

}