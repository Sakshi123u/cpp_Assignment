#include<iostream>
using namespace std;
class convert{
    int dnum,bnum=0,i=1;
    int binary[10];
    public:
    void getdata();
    friend void calculate(convert&);
};
void convert :: getdata(){
    cout<<"Enter decimal number :";
    cin>>dnum;
}
void calculate(convert &c){
    int i=0;
    while(c.dnum!=0){
        c.binary[i]=c.dnum%2;
        c.dnum=c.dnum/2;
        i++;
    }
    c.i=i;
    for(int j=c.i-1;j>=0;j--){
        c.bnum=c.bnum*10+c.binary[j];
    }
    cout<<"binary number is :"<<c.bnum;
}
int main(){
    convert c;
    c.getdata();
    calculate(c);
    return 0;
    
}