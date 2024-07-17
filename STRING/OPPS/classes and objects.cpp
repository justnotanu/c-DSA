#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int roll_number;
    string name;
    int standard;
    char gender;
    string mob_number;
    char grade;

public:
    void setName() {
        cin >> name;
    }

    void getName() {
        cout << name;
    }

    void setRollNumber() {
        cin >> roll_number;
    }

    int getRollNumber() {
        return roll_number;
    }

    void setStandard() {
        cin >> standard;
    }

    int getStandard() {
        return standard;
    }

    void setGender() {
        cin >> gender;
    }

    char getGender() {
        return gender;
    }

    void setMobileNumber() {
        cin >> mob_number;
    }

    string getMobileNumber() {
        return mob_number;
    }

    void setGrade() {
        cin >> grade;
    }

    char getGrade() {
        return grade;
    }
};

int main() {
    Student student_1, student_2;

    student_1.setName();
    student_1.setRollNumber();
    student_1.setStandard();
    student_1.setGender();
    student_1.setMobileNumber();
    student_1.setGrade();

    student_1.getName();
    cout << endl;
    cout << "Roll Number: " << student_1.getRollNumber() << endl;
    cout << "Standard: " << student_1.getStandard() << endl;
    cout << "Gender: " << student_1.getGender() << endl;
    cout << "Mobile Number: " << student_1.getMobileNumber() << endl;
    cout << "Grade: " << student_1.getGrade() << endl;

    return 0;
}