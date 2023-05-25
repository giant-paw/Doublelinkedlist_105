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

	//insert a node in the beginning of a doubly - linked list
	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) {
			cout << "\nDuplicate number not allowed" << endl;
			return;
		}
		newNode->next = START;			//step 3
		if (START != NULL)
			START->prev = newNode;		//step 4
		newNode->prev = NULL;			//step 5
		START = newNode;				//step 6
		return;
	}

	//Inserting a Node Between Two Nodes in the List
	Node* current = START;				//step 1.a
	Node* previous = NULL;				//step 1.b
	while (current->next != NULL && current->next->noMhs < nim) {			//step 1.c
		previous = current;				//step 1.d
		current = current->next;		//step 1.e
	}

	if (current->next != NULL && nim == current->next->noMhs) {
		cout << "\nDuplicate roll numbers not allowed" << endl;
		return;
	}

	newNode->next = current->next;		//step 4
	newNode->prev = current;			//step 5
	if (current->next != NULL)
		current->next->prev = newNode;	//step 6
	current->next = newNode;			//step 7
}

bool DoubleLinkedList::search(int rolNo, Node** previous, Node** current) {
	*previous = START;					//step 1.a
	*current = START;					//step 1.b
	
}

int main()
{
}