#include<iostream>
using namespace std;
class sample{
    int num,n1,n2,n3;
    public:
    sample(){
        num=5;
        n1=0;
        n2=1;
    }
    void calculate(){
        cout<<n1<<" "<<n2<<" ";
        for(int i=2;i<=num;i++){
            n3=n1+n2;
            n1=n2;
            n2=n3;
            cout<<n3<<" ";
        }
    }
};
int main(){
    sample s;
    s.calculate();
    return 0;
}