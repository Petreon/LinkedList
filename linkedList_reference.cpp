#include <iostream>

class Node { // isnt necessary to put the functions inside the class but for objective to learn about classes i did
public:
    int data;
    Node *next;

    Node * InsertBeggining(Node* initialNode, int inputNumber) {
        Node *temp = new Node();
        temp->data = inputNumber;
        temp->next = initialNode;

        initialNode = temp;
        return initialNode;
    }

    void Print(Node* initialNode) {
        std::cout << "List is: ";
        while(initialNode != NULL) {
            std::cout << initialNode->data;
            initialNode = initialNode->next;
        }
    }
};

int main() {
    Node *head = NULL; // criando o head na stack para ser mais facil o acesso

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