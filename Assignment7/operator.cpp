#include<iostream>
using namespace std;
class complex{
    float real;
    float img;
    public:
    complex(float x,float y);
    void operator +(complex c);
    void operator -(complex c);
    void operator *(complex c);
    void operator /(complex c);
};
complex :: complex(float x,float y){
    real=x;
    img=y;
}
void complex ::operator +(complex c){
    int res1=real+c.real;
    int res2=img +c.img;
    cout<<"Addition of two numbers is :"<<res1<<"+i"<<res2<<endl;
}
void complex ::operator -(complex c){
    int res1=real - c.real;
    int res2=img - c.img;
    cout<<"Substraction of two numbers is :"<<res1<<"+i"<<res2<<endl;
}
void complex ::operator *(complex c){
    int res1=real*c.real - img*c.img;
    int res2=real *c.img + img*c.real;
    cout<<"Multiplication of two numbers is :"<<res1<<"+i"<<res2<<endl;
}
void complex ::operator /(complex c){
    int res1=(real*c.real + img*c.img)/(c.real*c.real + c.img*c.img);
    int res2=(real*c.img - img*c.real)/(c.real*c.real + c.img*c.img);
    cout<<"Division of two numbers is :"<<res1<<"+i"<<res2<<endl;
}
int main(){
    int choice;
    char ch;
    complex c1(5,6);
    complex c2(1,2);
    cout<<"1.Addition_of_complex_no\n2.Substraction_of_complex_no\n3.Multiplication_of_complex_no\n4.Division_of_complex_no\n5.Exit"<<endl;
    do{
        cout<<"Enter your choice :";
        cin>>choice;
        switch(choice){
            case 1:
                c1 + c2;
                break;
            case 2:
                c1-c2;
                break;
            case 3:
                c1*c2;
                break;
            case 4:
                c1/c2;
                break;
            case 5:
                cout<<"EXIT!"<<endl;
                break;
            default :
                cout<<"Invalid choice";
        }
        cout<<"Do you want to continue?"<<endl;
        cin>>ch;
    }while(ch=='y');
return 0;
}