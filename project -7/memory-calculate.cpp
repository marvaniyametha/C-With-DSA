#include <iostream>
#include <vector>
using namespace std;

template <typename Type>
class Student {
private:
    Type id;
    string name;

public:
    Student(Type studentId, string studentName) {
        id = studentId;
        name = studentName;
    }

    void showStudent() const {
        cout << "Student ID: " << id << ", Name: " << name << endl;
    }

    Type getStudentId() const {
        return id;
    }

    string getStudentName() const {
        return name;
    }
};

template <typename Type>
class StudentList {
private:
    vector<Student<Type>> studentList;

public:
  
    void addStudent(Type id, string name) {
        Student<Type> newStudent(id, name);
        studentList.push_back(newStudent);
        cout << "Student added successfully." << endl;
    }

    void showAllStudents() {
        if (studentList.empty()) {
            cout << "Student list  empty." << endl;
            return;
        }

        cout << "Student List:" << endl;
        for (auto student : studentList) {
            student.showStudent();
        }
    }

    void removeStudent(Type givenId) {
        bool found = false;
        for (int i = 0; i < studentList.size(); i++) {
            if (studentList[i].getStudentId() == givenId) {
            
                studentList.erase(studentList.begin() + i);
                cout << "Student removed successfully." << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with ID " << givenId << " not found." << endl;
        }
    }

    void findStudent(Type id) {
        bool found = false;

        for (auto student : studentList) {
            if (student.getStudentId() == id) {
                cout << "Student found:" << endl;
                student.showStudent();
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with ID " << id << " not found." << endl;
        }
    }
};

int main() {
    StudentList<int> myStudents;
    int choice;
    int studentId;
    string studentName;

    while (true) {
        cout << endl;
        cout << "========== Student Menu ==========" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Show All Students" << endl;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Find Student by ID" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Thank you! Exiting..." << endl;
            break;
        }

        switch (choice) {
            case 1:
                cout << "Enter Student ID: ";
                cin >> studentId;
                cout << "Enter Student Name: ";
                cin.ignore();
                getline(cin, studentName);
                myStudents.addStudent(studentId, studentName);
                break;

            case 2:
                myStudents.showAllStudents();
                break;

            case 3:
                cout << "Enter ID of student to remove: ";
                cin >> studentId;
                myStudents.removeStudent(studentId);
                break;

            case 4:
                cout << "Enter ID of student to find: ";
                cin >> studentId;
                myStudents.findStudent(studentId);
                break;

            default:
                cout << "Invalid option.retry againnn!!!." << endl;
        }
    }

    return 0;
}




// ----------------------------output:------------------------------


// ========== Student Menu ==========
// 1. Add Student
// 2. Show All Students
// 3. Remove Student by ID
// 4. Find Student by ID
// 5. Exit
// Choose an option: 1
// Enter Student ID: 1819
// Enter Student Name: metha
// Student added successfully.

// ========== Student Menu ==========
// 1. Add Student
// 2. Show All Students
// 3. Remove Student by ID
// 4. Find Student by ID
// 5. Exit
// Choose an option: 1
// Enter Student ID: 1918
// Enter Student Name: nensss
// Student added successfully.

// ========== Student Menu ==========
// 1. Add Student
// 2. Show All Students
// 3. Remove Student by ID
// 4. Find Student by ID
// 5. Exit
// Choose an option: 2
// Student List:
// Student ID: 1819, Name: metha
// Student ID: 1918, Name: nensss

// ========== Student Menu ==========
// 1. Add Student
// 2. Show All Students
// 3. Remove Student by ID
// 4. Find Student by ID
// 5. Exit
// Choose an option: 3
// Enter ID of student to remove: 1918
// Student removed successfully.

// ========== Student Menu ==========
// 1. Add Student
// 2. Show All Students
// 3. Remove Student by ID
// 4. Find Student by ID
// 5. Exit
// Choose an option: 4
// Enter ID of student to find: 1819
// Student found:
// Student ID: 1819, Name: metha

// ========== Student Menu ==========
// 1. Add Student
// 2. Show All Students
// 3. Remove Student by ID
// 4. Find Student by ID
// 5. Exit
// Choose an option: 5
// Thank you! Exiting...


// === Code Execution Successful ===