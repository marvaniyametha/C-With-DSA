#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class LinkedList {
public:
    Node *head;
    int size;

    LinkedList() {
        head = NULL;
        size = 0;
    }

    void createElement(int data) {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void display() {
        Node *curr = head;
        while (curr != NULL) {
            cout << curr->data << endl;
            curr = curr->next;
        }
    }

    void searchElement(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid Index" << endl;
            return;
        }
        Node *curr = head;
        for (int i = 0; i < idx; i++) {
            curr = curr->next;
        }
        cout << "Value at index " << idx << ": " << curr->data << endl;
    }

    void remove(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid Index" << endl;
            return;
        }

        Node *delNode;
        if (idx == 0) {
            delNode = head;
            head = head->next;
        } else {
            Node *prev = head;
            for (int i = 0; i < idx - 1; i++) {
                prev = prev->next;
            }
            delNode = prev->next;
            prev->next = delNode->next;
        }

        delete delNode;
        size--;
    }

    void reverse() {
        Node *prev = NULL, *curr = head, *next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main() {
    LinkedList list;
    int choice, value, index;

    while (1) {
        cout << "1. Insert_at_beginning" << endl;
        cout << "2. Display" << endl;
        cout << "3. Search by index" << endl;
        cout << "4. Delete by index" << endl;
        cout << "5. Reverse" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            list.createElement(value);
            cout << "-----------Inserted successfully----------" << endl;
            break;
        case 2:
            list.display();
            break;
        case 3:
            cout << "Enter index to search: ";
            cin >> index;
            list.searchElement(index);
            break;
        case 4:
            cout << "Enter index to delete: ";
            cin >> index;
            list.remove(index);
            break;
        case 5:
            list.reverse();
            cout << "List reversed." << endl;
            break;
        case 6:
            cout << "Thank you!" << endl;
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }

        cout << endl; 
    }
}



// output:-----

// 1. Insert_at_beginning
// 2. Display
// 3. Search by index
// 4. Delete by index
// 5. Reverse
// 6. Exit
// Enter your choice: 1
// Enter value to insert: 10
// -----------Inserted successfully----------

// 1. Insert_at_beginning
// 2. Display
// 3. Search by index
// 4. Delete by index
// 5. Reverse
// 6. Exit
// Enter your choice: 1
// Enter value to insert: 20
// -----------Inserted successfully----------

// 1. Insert_at_beginning
// 2. Display
// 3. Search by index
// 4. Delete by index
// 5. Reverse
// 6. Exit
// Enter your choice: 1
// Enter value to insert: 30
// -----------Inserted successfully----------

// 1. Insert_at_beginning
// 2. Display
// 3. Search by index
// 4. Delete by index
// 5. Reverse
// 6. Exit
// Enter your choice: 2
// 30
// 20
// 10

// 1. Insert_at_beginning
// 2. Display
// 3. Search by index
// 4. Delete by index
// 5. Reverse
// 6. Exit
// Enter your choice: 3
// Enter index to search: 1
// Value at index 1: 20

// 1. Insert_at_beginning
// 2. Display
// 3. Search by index
// 4. Delete by index
// 5. Reverse
// 6. Exit
// Enter your choice: 4
// Enter index to delete: 2

// 1. Insert_at_beginning
// 2. Display
// 3. Search by index
// 4. Delete by index
// 5. Reverse
// 6. Exit
// Enter your choice: 5
// List reversed.

// 1. Insert_at_beginning
// 2. Display
// 3. Search by index
// 4. Delete by index
// 5. Reverse
// 6. Exit
// Enter your choice: 6
// --------Thank you!------------


// === Code Execution Successful ===