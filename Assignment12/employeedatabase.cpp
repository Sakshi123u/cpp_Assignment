#include<iostream>
using namespace std;

class employee {
    static int count;
    int age;
    int ph_number;
    float salary;
    string department;
    string name; 

public:
    void getdata();
    void putdata();
    void cal_salary();
};

int employee::count = 0;

void employee::getdata() {
    cout << "Enter Employee details :" << endl;
    cout<<"Name:"<<endl;
    cin>>name;
    cout<<"Enter age : "<<endl;
    cin>>age;
    cout<<"Enter department :"<<endl;
    cin>>department;
    cout<<"Enter phone-no : "<<endl;
    cin>>ph_number;
    
    int temp_ph_number = ph_number; // Store the phone number in a temporary variable

    // Count the number of digits in the phone number
    while (temp_ph_number != 0) {
        temp_ph_number = temp_ph_number / 10;
        count++;
    }
}

void employee::cal_salary() {
    float hra = 500;
    float da = 200;
    float cla = 300;
    float basic_salary = 700;
    salary = hra + da + cla + basic_salary;
    cout << "Total salary of employee is: " << salary << endl;
}

void employee::putdata() {
    try {
        if (count > 10) {
            throw 1;
        } else if (age < 18) {
            throw 'a';
        } else {
            cout << "Name is: " << name << endl;
            cout << "Age is: " << age << endl;
            cout << "ph_number is: " << ph_number << endl;
            cout << "Department is: " << department << endl;
            cout << "Salary is: " << salary << endl;
        }
    } catch (int x) {
        cout << "Your phone number is not valid" << endl;
    } catch (char x) {
        cout << "Age cannot be less than 18" << endl;
    }
}

int main() {
    employee obj;
    int choice;
    char ch;
    cout << "1. getdata()\n2. cal_salary()\n3. putdata()" << endl;
    do {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                obj.getdata();
                break;
            case 2:
                obj.cal_salary();
                break;
            case 3:
                obj.putdata();
                break;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}