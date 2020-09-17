#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};

void deleteAlt(struct Node *head);
void append(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 
    struct Node *last = *head_ref;  
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }  
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;    
}

void printList(struct Node *node)
{
	while (node != NULL)
	{
		cout<<node->data<<' ';
		node = node->next;
	}
	cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, tmp;
        struct Node* head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        deleteAlt(head);
        printList(head);
    }
	return 0;
}

void deleteAlt(struct Node *head){
    struct Node *temp = head,*val;
    int count =1;
    while(temp != NULL){
        if(count%2 != 0 ){
            ++count;
            if(temp->next == NULL){
            	break;
			}
        }
        else{
            val = (temp->next)->next;
            temp->next = val;
            temp = temp->next;
            ++count;  
        }
    }
}
