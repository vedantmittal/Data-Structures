#include <iostream>
using namespace std;

int main() {
	int i,j,n;
	cin>>n;
	int a[n];int t[105];int f;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	t[0]=2;
	t[1]=3;
	t[2]=5;
	t[3]=7;
	int temp=4,m,val=0;
	i=11;
	while(temp!=105)
	{
	    f=0;
	    val =i;
	   while(val>0)    
       {  
           f=0;
         m=val%10;
		 val =val/10;  
		   
         if(m!=2 && m!=3 && m!=5 && m!=7)
         {
             f=1;
             break;
         }
//         i=i/10;    
    } 
        if(f==0)
        {	
//		cout<<i;
            t[temp]=i;
            temp++;
        }
        i++;
	    
	}
	for(j=0;j<n;j++)
	{
	    cout<<t[a[j]-1]<<endl;
	}
	return 0;
}
