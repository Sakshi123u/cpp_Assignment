#include<iostream>
using namespace std;
class employee{
    int id;
    string name;
    string position;
    public :
    //default constructor
    employee();
    //paramitarised constructor
    employee(int a,string b,string c);
    //copy constructor
    employee(employee &a);
    void display();

};
employee::employee(){
        id=0;
        name="BALGURUSWAMI ";
        position="FIRST ";
    }
    //paramitarised constructor
    employee :: employee(int a,string b,string c){
        id=a;
        name=b;
        position=c;
    }
    //copy constructor
    employee :: employee(employee &a){
        id=a.id;
        name=a.name;
        position=a.position;
    }
    
    void employee :: display(){
        cout<<"Id : "<<id<<" "<<"Name : "<<name<<" "<<"Position :"<<position<<endl;
    }
   
    
int main(){
    employee e1;  //default constructor is call
    e1.display();
    cout<<"Enter values to pass in paramiterised constructor :";
    int a;
    string b,c;
    cin>>a>>b>>c;
    employee e2(a,b,c); //paramiterised constructor is called
    e2.display();
    employee e3(e2); //copy constructor is called
    e3.display();
}
