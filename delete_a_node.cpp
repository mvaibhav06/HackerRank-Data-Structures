#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
	
		Node(){
			data = 0;
			next = NULL;
		}
		
		
};
Node *head;

void append(Node *n){
	if(head==NULL){
		head = n;
		cout<<"Node appended"<<endl;
	}
	else{
		Node *ptr = head;
		while(ptr->next!=NULL){
			ptr = ptr->next;
		}
		ptr->next = n;
		cout<<"Node Appended"<<endl;
	}
}

void remove(int d){
	Node *p = head;
	Node *q = p->next;
	
	if(head==NULL){
		cout<<"Linked list is empty,nothing to delete"<<endl;
	}
	
	else{
		// First node
		if(p->data==d){
			head = q;
		}
		
		else{
			while(q->data!=d){
				p = p->next;
				q= q->next;
			}
			
			//Last Node
			if(q->next==NULL){
				p->next = NULL;
			}
			
			//Internal Node
			else{
				p->next = q->next;
			}
		}
	}
	
}

void display(){
	if(head==NULL){
		cout<<"Linked list is empty"<<endl;
	}
	else{
		Node *ptr = head;
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr = ptr->next;
		}
	}
}

int main(){
	Node *n1 = new Node();
	Node *n2 = new Node();
	Node *n3 = new Node();
	Node *n4 = new Node();
	Node *n5 = new Node();
	
	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;
	n5->data = 5;
	
	append(n1);
	append(n2);
	append(n3);
	append(n4);
	append(n5);
	
	cout<<endl<<endl;
	
	display();
	
	cout<<endl<<endl;
	
	remove(4);
	display();
}
