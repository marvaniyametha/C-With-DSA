#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    int count;

    LinkedList() {
        head = NULL;
        count = 0;
    }

    void create(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        count++;
        cout << "Node inserted successfully.\n";
    }

    void view() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void update(int position, int newData) {
        if (position < 0 || position >= count) {
            cout << "Invalid position.\n";
            return;
        }
        Node* temp = head;
        for (int i = 0; i < position; i++) {
            temp = temp->next;
        }
        temp->data = newData;
        cout << "Node updated successfully.\n";
    }

    void deleteNode(int position) {
        if (position < 0 || position >= count || head == NULL) {
            cout << "Invalid position.\n";
            return;
        }
        Node* temp;
        if (position == 0) {
            temp = head;
            head = head->next;
        } else {
            Node* prev = head;
            for (int i = 0; i < position - 1; i++) {
                prev = prev->next;
            }
            temp = prev->next;
            prev->next = temp->next;
        }
        delete temp;
        count--;
        cout << "Node deleted successfully.\n";
    }
};

int main() {
    LinkedList llList;  // renamed variable here
    int choice, data, position;

    while (true) {
        cout << "\n=== MENU ===\n";
        cout << "1. Create (Insert at end)\n";
        cout << "2. View List\n";
        cout << "3. Update at position\n";
        cout << "4. Delete at position\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                llList.create(data);
                break;
            case 2:
                llList.view();
                break;
            case 3:
                cout << "Enter position to update (starting from 0): ";
                cin >> position;
                cout << "Enter new data: ";
                cin >> data;
                llList.update(position, data);
                break;
            case 4:
                cout << "Enter position to delete (starting from 0): ";
                cin >> position;
                llList.deleteNode(position);
                break;
            case 0:
                cout << "Thank you!\n";
                return 0;
            default:
                cout << "Invalid choice.\n";
        }
    }
}
