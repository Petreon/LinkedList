//Linked list: Inserting a node at beginning
#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* head; // global variable, can be accessed anywhere

void InsertBegging(int entrada) { //inserir elementos no inicio da lista
    Node *temp = new Node();
    temp->data = entrada; // colocando o valor da entrada no novo node temporario alocado na memoria
    temp->next = head; //pegando o valor do pointer head.next que se estiver vazia vai ser NULL, mas se estiver ja alocado só ira trocar os ponteiros

    head = temp;

}

void PrintNodes() {
    Node* temp = head;

    std::cout << "List is: ";

    while(temp != NULL) {
        std::cout << " " << temp->data;
        temp = temp->next;
    }
    std::cout << std::endl;


}


int main() {
    head = NULL; // empty linked list

    std::cout << "How many numbers?" << std::endl;
    int n,VariavelInserida;
    std::cin >> n;
    for(int i = 0; i < n ; i++) {
        std::cout << "Enter the number " << std::endl;
        std::cin >> VariavelInserida;
        InsertBegging(VariavelInserida);
        PrintNodes();
    }

}