#include<iostream>
using namespace std;
class bankmanager;
class bank{
    int acc_no;
    int bal;
    public:
    bank(int x,int y){
        acc_no=x;
        bal=y;
    }
    friend class bankmanager;
};
class bankmanager{
    public:
    void display(bank b){
        cout<<"Account number is : "<<b.acc_no<<endl;
        cout<<"Account balance is : "<<b.bal<<endl;
    }
};
int main(){
    bank b(123456789,500);
    bankmanager obj;
    obj.display(b);
    return 0;
}