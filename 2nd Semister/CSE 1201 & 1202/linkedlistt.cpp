#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the end of the linked list
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to delete a node with a given data value
    void deleteNode(int value) {
        Node* temp = head;
        Node* prev = nullptr;

        // If the node to be deleted is the head node
        if (temp != nullptr && temp->data == value) {
            head = temp->next;
            delete temp;
            return;
        }

        // Search for the node to be deleted, keeping track of the previous node
        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        // If the node with the given value is not present in the list
        if (temp == nullptr) {
            std::cout << "Node with value " << value << " not found in the linked list." << std::endl;
            return;
        }

        // Unlink the node from the linked list
        prev->next = temp->next;
        delete temp;
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }

    // Destructor to deallocate memory used by the linked list
    ~LinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        head = nullptr;
    }
};

int main() {
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);

    std::cout << "Original linked list: ";
    list.display();

    int valueToDelete;
    std::cout << "Enter the value to delete from the linked list: ";
    std::cin >> valueToDelete;

    list.deleteNode(valueToDelete);

    std::cout << "Linked list after deletion: ";
    list.display();

    return 0;
}
