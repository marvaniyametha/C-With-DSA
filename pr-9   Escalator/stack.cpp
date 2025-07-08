
#include <iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int capacity;

    Stack(int size) {
        capacity = size;
        top = -1;
        arr = new int[capacity];
    }

    bool isFull() {
        return top == capacity - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int element) {
        if (isFull()) {
            cout << "---------- Stack Overflow ----------" << endl;
        } else {
            arr[++top] = element;
            cout << "---------- Pushed Successfully ----------" << endl;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "---------- Stack Underflow ----------" << endl;
            return -1;
        } else {
            return arr[top--];
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "---------- Stack is Empty ----------" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty!" << endl;
            return;
        }
        cout << "Stack Elements (Top to Bottom):" << endl;
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    int size;
    cout << "Enter the Stack Size: ";
    cin >> size;

    Stack stack(size);
    int choice, element, value;

    while (true) {
        cout << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Element to Push: ";
                cin >> element;
                stack.push(element);
                break;

            case 2:
                value = stack.pop();
                if (value != -1)
                    cout << "Popped Value: " << value << endl;
                break;

            case 3:
                value = stack.peek();
                if (value != -1)
                    cout << "Top Element: " << value << endl;
                break;

            case 4:
                stack.display();
                break;

            case 0:
                cout << "-------- Thank You --------" << endl;
                return 0;

            default:
                cout << "Invalid Choice! Please try again." << endl;
        }
    }
}






// <!-- output:---- -->

// <!-- Enter the Stack Size: 4

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 0. Exit
// Enter your choice: 1
// Enter Element to Push: 10
// ---------- Pushed Successfully ----------

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 0. Exit
// Enter your choice: 1
// Enter Element to Push: 20
// ---------- Pushed Successfully ----------

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 0. Exit
// Enter your choice: 1
// Enter Element to Push: 30
// ---------- Pushed Successfully ----------

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 0. Exit
// Enter your choice: 1
// Enter Element to Push: 40
// ---------- Pushed Successfully ----------

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 0. Exit
// Enter your choice: 1
// Enter Element to Push: 50
// ---------- Stack Overflow ----------

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 0. Exit
// Enter your choice: 2
// Popped Value: 40

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 0. Exit
// Enter your choice: 3
// Top Element: 30

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 0. Exit
// Enter your choice: 4
// Stack Elements (Top to Bottom):
// 30
// 20
// 10

// 1. Push
// 2. Pop
// 3. Peek
// 4. Display
// 0. Exit
// Enter your choice: 0
// -------- Thank You --------


// === Code Execution Successful === -->