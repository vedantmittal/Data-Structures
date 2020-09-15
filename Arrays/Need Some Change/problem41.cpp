#include <iostream>
using namespace std;
void swapElements(int[], int);

void swapElements(int arr[], int sizeof_array){
    if(sizeof_array>2){
        int temp=0;
        for(int i =0;i<sizeof_array-2;i++){
            temp = arr[i];
            arr[i] = arr[i+2];
            arr[i+2] = temp;
        }
    }
}

int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
        
	    swapElements(arr, sizeof_array);
	    for(int i = 0;i<sizeof_array;i++){
            cout << arr[i] << " ";
        }
	    
	    cout << endl;
	}
	
	return 0;
} 