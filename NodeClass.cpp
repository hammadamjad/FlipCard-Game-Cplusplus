#include <iostream>
#include<cstdlib>
using namespace std;
//defining node class 
class Node {
public:
    int data;
    Node* next;
    //default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }
    //parametrized constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
  