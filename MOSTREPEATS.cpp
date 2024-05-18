#include <iostream>

using namespace std;

class rpNode{
	public:
	int repeat;
	int key;
	rpNode *next;
	rpNode()
	{
		repeat=0;
		key=0;
		next=NULL;
	}
	
		rpNode(int r, int k)
	{
		this->repeat=r;
		this->key=k;
		next=NULL;
		
	
	}
};
class LL{
	
	rpNode * head;
	public:
		
	LL()
	{
		head=NULL;
	}

void insertion(int r, int k)
{
	rpNode* Newnode= new rpNode(r, k);
	
	if(head==NULL)
	{
		head=Newnode;
		return;
	}
	
 	rpNode *last= head;
 	
 	while (last->next!=NULL)
 	 {
 		last=last->next;
	 }
	 
	 last->next=Newnode;
	
}
void printnodes()
{

	rpNode *n=head;
//	cout<<"BEFORE SORTING"<<endl;
	while (n!=NULL)
	{	
		cout<<"KEY: "<<n->key<<" REPEAT: "<<n->repeat<<endl;
		n=n->next;
	}
//	cout<<endl;
//	cout<<"AFTER SORTING"<<endl;
	
}
void sorting()
{
	rpNode* temp = head;
	while (temp != NULL && temp->next != NULL) {
		temp = temp->next;
	}
	quick_sort(head, temp);

}
void mostlistenedsong(int rp, int key)
{

insertion(rp,key);

}
// rpNode* last_node(rpNode* head)
//{
//    rpNode* temp = head;
//    while (temp != NULL && temp->next != NULL) {
//        temp = temp->next;
//    }
//    return temp;
//}
 
// We are Setting the given last node position to its proper
// position
rpNode* parition(rpNode* first, rpNode* last)
{
    // Get first node of given linked list
    rpNode* pivot = first;
    rpNode* front = first;
    rpNode* temp=new rpNode ;
    while (front != NULL && front != last) {
        if (front->repeat < last->repeat) {
            pivot = first;
 
 			swap(temp->key,first->key);
 			swap(temp->repeat,first->repeat);   //temp = first->data;
 			
 			swap(first->key,front->key);
 			swap(first->repeat,front->repeat);  //first->data = front->data;
 			
 			swap(front->key,temp->key);
 			swap(front->repeat,temp->repeat);   //front->data = temp;
            // Swapping  node values
//            temp = first->data;
//            first->data = front->data;
//            front->data = temp;
 
            // Visiting the next node
            first = first->next;
        }
 
        // Visiting the next node
        front = front->next;
    }
 
    // Change last node value to current node
//    temp = first->data;
    swap(temp->key,first->key);
 	swap(temp->repeat,first->repeat);
    
    
    
//    first->data = last->data;
    swap(first->key,last->key);
	swap(first->repeat,last->repeat);
    
    
//    last->data = temp;
	swap(last->key,temp->key);
 	swap(last->repeat,temp->repeat);

    return pivot;
}
 
// Performing quick sort in  the given linked list
void quick_sort(rpNode* first,  rpNode* last)
{
    if (first == last) {
        return;
    }
    rpNode* pivot = parition(first, last);
 
    if (pivot != NULL && pivot->next != NULL) {
        quick_sort(pivot->next, last);
    }
 
    if (pivot != NULL && first != pivot) {
        quick_sort(first, pivot);
    }
}
void reverse()
    {
        // Initialize current, previous and next pointers
        rpNode* current = head;
        rpNode *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }
    rpNode* mostrepeated()
    {
    	
    	return head;
	}

};

//int main()
//{
//	LL obj;
//	obj.mostlistenedsong(11,1);
//	obj.mostlistenedsong(2,2);
//	obj.mostlistenedsong(13,3);
//	obj.mostlistenedsong(14,4);
////obj.sorting();
//
//	obj.printnodes();
//	cout<<endl<<endl;
//	obj.sorting();
//	obj.printnodes();
//	cout<<endl;
//	obj.reverse();
//	obj.printnodes();
//	rpNode* mr=new rpNode;
//	mr=obj.mostrepeated();
//	cout<<"Key of most repeated song is "<<mr->key;
//}

