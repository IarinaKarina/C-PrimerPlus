#include "workermi.h"

#ifndef QUEUETP_H_
#define QUEUETP_H_
template <typename Type>
class QueueTP{
private:
	struct Node{
		Type item;
		struct Node* next;
	};
	enum {QSIZE=10};
	Node* front;	//pointer to front of Queue
	Node* rear;		//pointer to rear of Queue
	int items;		//current number of items in Queue
	const int qsize;//maximum number of items in Queue
	//preemptive definitions to prevent public copying
	QueueTP(const QueueTP& q);
	QueueTP& operator=(const QueueTP& q) { return *this;}
public:
	explicit QueueTP(int qs=QSIZE):qsize(qs), front(nullptr), rear(nullptr), items(0)	{}	//a queue with a qs limit
	~QueueTP();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Type& item); // add item to end
    bool dequeue(Type& item); // remove item from front
};

template <typename Type>
QueueTP<Type>::~QueueTP(){
	Node* temp;
	while(front!=nullptr){     //while queue is not yet empty
		temp=front;			//save address of front item;
		front=front->next;  //reset pointer to next item
		delete temp;		//delete former front
	}
}

template <typename Type>
bool QueueTP<Type>::isempty() const{
	return items==0;
}

template <typename Type>
bool QueueTP<Type>::isfull() const{
	return items==qsize;
}

template <typename Type>
int QueueTP<Type>::queuecount() const{
	return items;
}

//add item to end
template <typename Type>
bool QueueTP<Type>::enqueue(const Type& item){
	if(isfull())
		return false;

	Node* newNode=new Node;
	
	if(newNode==nullptr)	//if not available
		return false;
	newNode->item=item;
	newNode->next=nullptr;
	items++;

	if(front==nullptr)		//if Queue is empty
		front=newNode;		//place item at front
	else
		rear->next=newNode;

	rear=newNode;			//rear point to new node
	return true;
}

//place front item into item variable and remove it from queue
template <typename Type>
bool QueueTP<Type>::dequeue(Type& item){
	if(front==nullptr)
		return false;

	item=front->item;
	items--;
	Node* temp=front;
	front=front->next;
	delete temp;

	if(items==0)
		rear=nullptr;

	return true;
}

#endif
