// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}
Node* insertInMiddle(Node* head, int x)
{
	Node *temp = head,*prev;
    Node *val = new Node(x);
    int count =0;
    while(temp != NULL){
        temp = temp->next;
        ++count;
    }
	if(count == 1){
       head->next = val;
    }
    else{
       int mid = count /2;
        temp = head;
        while(mid--){
            temp = temp->next;
        }
        prev = temp->next;
        temp->next = val;
        val->next = prev;
   }
   return head;
}