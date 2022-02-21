#include <iostream>
#include<cstdlib>
using namespace std;

//defining linked list class
class Linkedlist {
    Node* head;
public:
  
    Linkedlist() { 
	
		head = NULL; 
	
	}
	
	//function for insert node
    void insertNode(int data)
	{
	    Node* newNode = new Node(data);
	  
	    if (head == NULL) {
	        head = newNode;
	        return;
	    }
	    Node* temp = head;
	    while (temp->next != NULL) {
	        temp = temp->next;
	    }
	    temp->next = newNode;
	}
  
  	//function that displays the list
    void printList()
	{
	    Node* temp = head;
	  
	    if (head == NULL) {
	        cout << "List empty" << endl;
	        return;
	    }
	    while (temp != NULL) {
	        cout << temp->data << " ";
	        temp = temp->next;
	    }
	}
	
	//function to find element by index
	int findEl(int value)
	{
	    Node* temp = head;
	  	int index = 0;
	    if (head == NULL) {
	        cout << "List empty" << endl;
	    }
	    while (temp != NULL) {
	    	if(index == value){
	    		return temp->data ;
			}
	        index++;
	        temp = temp->next;
	    }
	    return 0;
	}
};
  