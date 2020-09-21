#include <bits/stdc++.h>
#define MAX 20
using namespace std;

struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};

void display(Node* head)
{
    Node* Rp;
	Node* Dp = head;
	while (Dp) {
		Rp = Dp;
		while (Rp) {
			cout << Rp->data << " ";
			Rp = Rp->right;
		}
		
		Dp = Dp->down;
	}
}

Node* constructLinkedMatrix(int mat[MAX][MAX], int n);
Node* constructLinkedMatrixnew(int mat[MAX][MAX], int i,int j,int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mat[MAX][MAX];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>mat[i][j];
        Node* head = constructLinkedMatrix(mat, n);
        if(!head)cout<<"-1";
	    else display(head);
	    cout<<"\n";
    }
	return 0;
}

Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{   
    int i = 0, j=0;
    Node *temp = constructLinkedMatrixnew(mat,i,j,n);
    return temp;

}

Node* constructLinkedMatrixnew(int mat[MAX][MAX], int i,int j,int n)
{   
    struct Node *temp = new Node(mat[i][j]);
    if((i>n-1)|| (j>n-1)){
        return NULL;
    }
    temp->right = constructLinkedMatrixnew(mat,i,j+1,n);
    temp->down = constructLinkedMatrixnew(mat,i+1,j,n);
    return temp;
}

