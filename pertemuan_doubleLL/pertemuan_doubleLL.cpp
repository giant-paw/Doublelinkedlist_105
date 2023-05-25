#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START;
public:
	DoubleLinkedList();
	void addNote();
	bool search(int rollNo, Node** previous, Node** current);
	bool deleteNode(int rollNo);
	bool listEmpty();
	void traverse();
	void retraverse();
	void hapus();
	void searchData();
};

DoubleLinkedList::DoubleLinkedList() {
	START = NULL;
}

void DoubleLinkedList::addNote() {
	int nim;
	string nm;
	cout << "\nEnter the roll number of the Student : ";
	cin >> nim;
	cout << "\nEnter the name of the Student : ";
	cin >> nm;
	Node* newNode = new Node();			//step 1
	newNode->noMhs = nim;				//step 2
	newNode->name= nm;					//step 2
}

int main()
{
}