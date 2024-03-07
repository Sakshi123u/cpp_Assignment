#include<iostream>
using namespace std;
class shape{
    float base,height,radius;
    int length,width;
    public:
    shape(){
        length=0;
        base=0;
        height=0;
        radius=0;
        width=0;
    }
    void area(float r);
    void area(float b,float h);
    void area(int l,int w);
};
void shape::area(float r){
    radius=r;
    float res=3.14*radius*radius;
    cout<<"Area of circle is :"<<res<<endl;
}
void shape::area(float b,float h){
    base=b;
    height=h;
    float res=0.5*base*height;
    cout<<"Area of triangle is :"<<res<<endl;
}
void shape::area(int l,int w){
    length=l;
    width=w;
    int res=length*width;
    cout<<"Area of rectangle is :"<<res<<endl;
}
int main(){
    shape s;
    s.area(2.5);
    s.area(1.5f,2.5f);
    s.area(4,2);
    return 0;
}