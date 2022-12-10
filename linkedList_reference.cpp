#include <iostream>

class Node { // isnt necessary to put the functions inside the class but for objective to learn about classes i did
public:
    int data;
    Node *next;

    Node * InsertBeggining(Node* initialNode, int inputNumber) { // i forgot this kind of referenced but is impotant
        Node *temp = new Node(); //creating an temporary node to put the new values/address there
        temp->data = inputNumber;
        temp->next = initialNode; // changing th temp next for the initialnode.next to save the previous value in the next node

        initialNode = temp; // changing the initialNode for the temp node to put in the begginig
        return initialNode; // we need to return the first new address to the head on the stack in main
    }

    void Print(Node* initialNode) {
        std::cout << "List is: ";
        while(initialNode != NULL) {
            std::cout << " " << initialNode->data; // printing the data
            initialNode = initialNode->next; // changing the address of initialNode for the next in the linkedlist
        }
        std::cout << std::endl;
    }
};

int main() {
    Node *head = NULL; // creating head on the stack to be faster the access

    std::cout << "how many numbers?" << std::endl;
    int numberQuantity,inputNumbers;
    std::cin >> numberQuantity;

    for(int i = 0; i < numberQuantity; i++) {
        std::cout << "Enter the number" << std::endl;
        std::cin >> inputNumbers;

        head = head->InsertBeggining(head, inputNumbers);
        head->Print(head);

    }



}