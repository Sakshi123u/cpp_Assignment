#include<iostream>
using namespace std;
class fib{
    int n1=0;
    int n2=1;
    int num;
    int n3;
    public :
    void getdata(){
        cout<<"enter number to get fibonnaci of :";
        cin>>num;
    }
    void calculate(){
        cout<<"fibonacci series is :"<<endl;
        cout<<n1<<endl<<n2<<endl;
        for(int i=2;i<=num;i++){
            n3=n1+n2;
            n1=n2;
            n2=n3;
            cout<<n3<<endl;
        }
    }
};
int main(){
    fib f1;
    f1.getdata();
    f1.calculate();
    return 0;
}