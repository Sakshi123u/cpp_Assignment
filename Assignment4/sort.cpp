/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class sort{
    int n,min,i,j,temp;
    int a[50];
    public :
    void getdata();
    void sort_data();
    void display();
};
void sort :: getdata(){
    cout<<"Enter array size :"<<endl;
    cin>>n;
    a[n];
    cout<<"Enter array elements :"<<endl;
    for( i=0;i<n;i++){
        cin>>a[i];
    }
}
void sort :: sort_data(){
    for(i=0;i<n;i++){
        min=i;
        for( j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
         
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
       
    }
}
void sort :: display(){
    cout<<"Sorted array is :"<<endl;
    for( i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    sort a;
    a.getdata();
    a.sort_data();
    a.display();
    return 0;
}
