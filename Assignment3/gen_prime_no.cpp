#include<iostream>
using namespace std;
class prime{
    int i,j,n,found;
    public:
   void primegenerator();
   
};
void prime :: primegenerator(){
    cout<<"Enter range to get prime numbers: "<<endl;
    cin>>n;
    for(i=0;i<=n;i++){
        found=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                found++;
                break;
            }
        }
        if(found==0 && i!=1 && i!=0){
            cout<<i<<" ";
        }
    }
}
int main(){
    prime p;
    p.primegenerator();
    return 0;
}