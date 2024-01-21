#include<iostream>
using namespace std;
int main(){
    int n;
    int found=0;
    cout<<"enter array size"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"enter element to be searched"<<endl;
    cin>>key;
     for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<"found :"<<i;
            found++;
        }
    }
    if(found==0){
        cout<<"not found"<<endl;
    }
    return 0;
}