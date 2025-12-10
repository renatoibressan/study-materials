#include <iostream>

using namespace std;

class Student {
    public:
    int roll_number;
    string name;
    void getInfo(int roll, string nam) {
        roll_number = roll;
        name = nam;
    }
    void showInfo() {
        cout << "Name: " << name << "\nRoll number: " << roll_number << "\n";
    }
};


int main() {
    Student student1;
    student1.getInfo(202502254, "Renato");
    student1.showInfo();
    return 0;
}