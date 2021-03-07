using namespace std;


class Node {
public:
  int data;
  Node *next = nullptr;

  Node(int data) { this->data = data; }
};

Node *removeDuplicatesFromLL(Node *linkedList) {
	Node *currentNode = linkedList;
	while (currentNode!=nullptr){
		Node *nextDistinctNode = currentNode->next;
		while(nextDistinctNode !=nullptr && nextDistinctNode->data == currentNode->data){
			nextDistinctNode = nextDistinctNode->next;
}
		currentNode->next = nextDistinctNode;
		currentNode = nextDistinctNode;
	}
  return linkedList;
}
