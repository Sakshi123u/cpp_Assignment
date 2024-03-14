#include<iostream>
using namespace std;
class matrix{
    int i,j,k;
    int a[2][2],b[2][2],c[2][2];
    void getdata(){
        cout<<"Enter numbers in first matrix :"<<endl;
        for( i=0;i<2;i++){
            for(j=0;j<2;j++){
               cin>>a[i][j];
            }
        }
        cout<<"Enter numbers in second matrix :"<<endl;
        for( i=0;i<2;i++){
            for(j=0;j<2;j++){
               cin>>b[i][j];
            }
        }
    }
    public :
    void add_matrix(){
        getdata();
       cout<<"Addition of matrix is:"<<endl;
       for( i=0;i<2;i++){
            for(j=0;j<2;j++){
               c[i][j]=a[i][j]+b[i][j];
            }
        }
         for( i=0;i<2;i++){
            for(j=0;j<2;j++){
              cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void sub_matrix(){
       cout<<"substraction of matrix is:"<<endl;
       for( i=0;i<2;i++){
            for(j=0;j<2;j++){
               c[i][j]=a[i][j]-b[i][j];
            }
        }
         for( i=0;i<2;i++){
            for(j=0;j<2;j++){
              cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void mul_matrix(){
        cout<<"Multiplication of matrix is :"<<endl;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                for(k=0;k<2;k++){
                    c[i][j]=a[i][k]*b[k][j];
                }
            }
        }
        for( i=0;i<2;i++){
            for(j=0;j<2;j++){
              cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
};
int main(){
    matrix obj;
    obj.add_matrix();
    obj.sub_matrix();
    obj.mul_matrix();
    return 0;
}