#include<iostream>
using namespace std;
class sample{
    int *ptr;
    int size;
    public:
    sample(){
        size=10;
        ptr=new int[size];
    }
    void calculate();
    void display();
    ~sample(){
        delete []ptr;
    }
};
void sample :: calculate(){
    for(int i=0;i<size;i++){
        ptr[i]=i+1;
    }
}
void sample :: display(){
    cout<<"Values stored in dynamically  allocated memory :"<<endl;
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<" ";
    }
}
int main(){
    sample s;
    s.calculate();
    s.display();
    return 0;
}