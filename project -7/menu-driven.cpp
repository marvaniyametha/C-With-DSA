#include <iostream>
#include <vector>
using namespace std;

class MyVector {
public:
    vector<int> nums;

    void push_back(int value) {
        nums.push_back(value);
    }

    void pop_back() {
        nums.pop_back();
    }

    void display() {
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }

    void size() {
        cout << "Size of vector is: " << nums.size() << endl;
    }

    void empty() {
        if (nums.empty()) {
            cout << "Vector is empty" << endl;
        } else {
            cout << "Vector is not empty" << endl;
        }
    }

    void atindex(int index) {
        cout << "Value at index " << index << " is: " << nums[index] << endl;
    }

    void front() {
        cout << "Value at front is: " << nums.front() << endl;
    }

    void back() {
        cout << "Value at back is: " << nums.back() << endl;
    }

    void insert(int index, int value) {
        nums.insert(nums.begin() + index, value);
    }

    void clear() {
        nums.clear();
    }
};

int main() {
    MyVector v;
    int choice;
    int inputValue;
    int inputIndex;
    int insertValue;

    while (true) {
        cout << endl;
        cout << "========== Vector Menu ==========" << endl;
        cout << "1. Push back" << endl;
        cout << "2. Pop back" << endl;
        cout << "3. Display" << endl;
        cout << "4. Size" << endl;
        cout << "5. Check if empty" << endl;
        cout << "6. Value at index" << endl;
        cout << "7. Front value" << endl;
        cout << "8. Back value" << endl;
        cout << "9. Insert at index" << endl;
        cout << "10. Clear vector" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "------------Thank you------------" << endl;
            break;
        }

        switch (choice) {
            case 1:
                cout << "Enter the value: ";
                cin >> inputValue;
                v.push_back(inputValue);
                cout << "Push back successful." << endl;
                break;

            case 2:
                v.pop_back();
                cout << "Pop back successful." << endl;
                break;

            case 3:
                v.display();
                cout << "Display complete." << endl;
                break;

            case 4:
                v.size();
                break;

            case 5:
                v.empty();
                break;

            case 6:
                cout << "Enter the index: ";
                cin >> inputIndex;
                v.atindex(inputIndex);
                break;

            case 7:
                v.front();
                break;

            case 8:
                v.back();
                break;

            case 9:
                cout << "Enter the index: ";
                cin >> inputIndex;
                cout << "Enter the value: ";
                cin >> insertValue;
                v.insert(inputIndex, insertValue);
                cout << "Insert successful." << endl;
                break;

            case 10:
                v.clear();
                cout << "Vector cleared." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}
