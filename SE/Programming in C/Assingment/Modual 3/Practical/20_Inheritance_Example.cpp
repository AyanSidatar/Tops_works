//  Write a program that implements inheritance using a base class Person and derived
// classes Student and Teacher. Demonstrate reusability through inheritance.


#include <iostream>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived Class: Student
class Student : public Person {
private:
    int rollNo;

public:
    void setStudent(string n, int a, int r) {
        setPerson(n, a); // reuse base class function
        rollNo = r;
    }

    void displayStudent() {
        displayPerson(); // reuse base class function
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived Class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacher(string n, int a, string sub) {
        setPerson(n, a); // reuse base class function
        subject = sub;
    }

    void displayTeacher() {
        displayPerson(); // reuse base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s1;
    s1.setStudent("Rahul", 20, 101);
    cout << "--- Student Info ---" << endl;
    s1.displayStudent();

    Teacher t1;
    t1.setTeacher("Mr. Sharma", 40, "Mathematics");
    cout << "\n--- Teacher Info ---" << endl;
    t1.displayTeacher();

}

