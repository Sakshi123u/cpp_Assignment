#include<iostream>
using namespace std;
class sorl{
    int array[50];
    int i,n,max,min;
    public :
    void getdata();
    void largest();
    void smallest();
    void show();
};
void sorl :: getdata(){
    cout<<"enter array size :"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++){
        cin>>array[i];
    }
}
void sorl :: largest(){
    max=array[0];
    for(i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
}
void sorl :: smallest(){
    min=array[0];
    for(i=0;i<n;i++){
        if(array[i]<min){
            min=array[i];
        }
    }

}
void sorl :: show(){
    cout<<"Largest element : "<<max<<" "<<"smallest element : "<<min<<endl;
}
int main(){
    sorl s;
    s.getdata();
    s.largest();
    s.smallest();
    s.show();
    return 0;
}