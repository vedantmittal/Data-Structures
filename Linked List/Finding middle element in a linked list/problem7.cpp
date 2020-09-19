#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int getMiddle(Node *head);
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		cout<<getMiddle(head)<<endl;
	}
	return 0; 
} 

int getMiddle(Node *head)
{
   struct Node *temp = head;
   int count =0;
   while(temp != NULL){
       temp = temp->next;
       ++count;
   }
   if(count == 1){
       return head->data;
   }
   int mid = count /2;
   count =0 ;
   temp = head;
   while(count!= mid){
        temp = temp->next;
        ++count;
    }
    return temp->data;
}

    
