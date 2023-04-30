#ifndef LinkedList_h
#define LinkedList_h
class Node{
	public:
	int info;
	Node* next;
		Node();
		Node(int info,Node* next);

};

class LinkedList{
	public:
	Node *HEAD;
	Node *TAIL;
		LinkedList();
      //  ~LinkedList();
		bool isEmpty();
		void addToHead(int data);
		void addToTail(int data);
		void add(int data, Node *pred);
        void removeFromHead();
		void remove(int data);
		Node* retrieve(int data);
        void removeFromTail();
		bool search(int data);
		void traverse();	

};

#endif