#include <iostream>
using namespace std;

class Queue {
private:
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    Queue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    bool isFull() {
        return rear == capacity - 1;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is overflow" << endl;
            return;
        }
        if (front == -1)
            front = 0;
        arr[++rear] = element;
        size++;
        cout << "------ Successfully enqueued ------" << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is underflow" << endl;
            return;
        }
        cout << "Element deleted is: " << arr[front] << endl;
        front++;
        size--;
        cout << "------ Successfully dequeued ------" << endl;
    }

    void update(int index, int value) {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else if (index < front || index > rear) {
            cout << "Invalid index for update!" << endl;
        } else {
            arr[index] = value;
            cout << "------ Successfully updated ------" << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Front element is: " << arr[front] << endl;
            cout << "------ Successfully peeked ------" << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            cout << "------ Successfully displayed ------" << endl;
        }
    }

    void displaySize() {
        cout << "Size of queue is: " << size << endl;
        cout << "------ Successfully displayed ------" << endl;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    int ch;
    int capacity, element, index, value;

    cout << "Enter size of queue: ";
    cin >> capacity;

    Queue q(capacity);

    while (true) {
        cout << endl;
        cout << "Menu:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Update" << endl;
        cout << "4. Peek (Front)" << endl;
        cout << "5. Display" << endl;
        cout << "6. Display Size" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        if (ch == 0) {
            cout << "------------ Thank You ------------" << endl;
            break;
        }

        switch (ch) {
            case 1:
                cout << "Enter element: ";
                cin >> element;
                q.enqueue(element);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                cout << "Enter index: ";
                cin >> index;
                cout << "Enter new value: ";
                cin >> value;
                q.update(index, value);
                break;
            case 4:
                q.peek();
                break;
            case 5:
                q.display();
                break;
            case 6:
                q.displaySize();
                break;
            default:
                cout << "Invalid Choice!!" << endl;
        }
    }

    return 0;
}


// output

// Enter size of queue: 4

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Update
// 4. Peek (Front)
// 5. Display
// 6. Display Size
// 0. Exit
// Enter your choice: 1
// Enter element: 10
// ------ Successfully enqueued ------

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Update
// 4. Peek (Front)
// 5. Display
// 6. Display Size
// 0. Exit
// Enter your choice: 1
// Enter element: 20
// ------ Successfully enqueued ------

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Update
// 4. Peek (Front)
// 5. Display
// 6. Display Size
// 0. Exit
// Enter your choice: 1
// Enter element: 30
// ------ Successfully enqueued ------

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Update
// 4. Peek (Front)
// 5. Display
// 6. Display Size
// 0. Exit
// Enter your choice: 1
// Enter element: 40
// ------ Successfully enqueued ------

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Update
// 4. Peek (Front)
// 5. Display
// 6. Display Size
// 0. Exit
// Enter your choice: 1
// Enter element: 0
// Queue is overflow

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Update
// 4. Peek (Front)
// 5. Display
// 6. Display Size
// 0. Exit
// Enter your choice: 2
// Element deleted is: 10
// ------ Successfully dequeued ------

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Update
// 4. Peek (Front)
// 5. Display
// 6. Display Size
// 0. Exit
// Enter your choice: 3
// Enter index: 40
// Enter new value: 45
// Invalid index for update!

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Update
// 4. Peek (Front)
// 5. Display
// 6. Display Size
// 0. Exit
// Enter your choice: 4
// Front element is: 20
// ------ Successfully peeked ------

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Update
// 4. Peek (Front)
// 5. Display
// 6. Display Size
// 0. Exit
// Enter your choice: 5
// Queue elements: 20 30 40 
// ------ Successfully displayed ------

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Update
// 4. Peek (Front)
// 5. Display
// 6. Display Size
// 0. Exit
// Enter your choice: 6
// Size of queue is: 3
// ------ Successfully displayed ------

// Menu:
// 1. Enqueue
// 2. Dequeue
// 3. Update
// 4. Peek (Front)
// 5. Display
// 6. Display Size
// 0. Exit
// Enter your choice: 0
// ------------ Thank You ------------


// === Code Execution Successful ===