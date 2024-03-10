#include<iostream>
using namespace std;
class student{
    int n;
    string name;
    int marks;
    public:
    void getdata();
    void display();
};
void student :: getdata(){
    cout<<"Enter student name:"<<endl;
    cin>>name;
    cout<<"Student CGPA:"<<endl;
    cin>>marks;
}
void student :: display(){
    cout<<"Name of student :"<<name<<" "<<"CGPA SCORED :"<<marks<<endl;
}
int main(){
    student *s;
    int n;
    cout<<"Enter the number of student"<<endl;
    cin>>n;
    s=new student[n];
    for(int i=0;i<n;i++){
        s[i].getdata();
    }
 
     for(int i=0;i<n;i++){
        s[i].display();
    }
    delete []s;
    return 0;
}

