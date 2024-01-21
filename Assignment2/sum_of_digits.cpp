#include<iostream>
using namespace std;
class sum{
    int num,r,sum=0;
    public :
    void getdata(){
        cout<<"enter number"<<endl;
        cin>>num;
    }
    void calculate(){
        while(num!=0){
            r=num%10;
            sum=sum+r;
            num=num/10;
        }
        cout<<"sum is:"<<sum<<endl;
    }
};
int main(){
    sum s1;
    s1.getdata();
    s1.calculate();
    return 0;

}