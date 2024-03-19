#include<iostream>
using namespace std;
class students{
    int roll_no;
    string name;
    public :
    void getdata(){
        cout<<"Enter student details:"<<endl;
        cin>>name>>roll_no;
    }
    void show(){
        cout<<"Name of student :"<<name<<endl;
        cout<<"Roll_NO of student :"<<roll_no<<endl;
    }
};
class test: public virtual students{
    public:
    int marks_sub1;
    int marks_sub2;
    void get_marks(){
        cout<<"Enter marks scored in subject :"<<endl;
        cin>>marks_sub1>>marks_sub2;
    }
    void put_marks(){
        cout<<"Marks scored in subject1 :"<<marks_sub1<<endl;
        cout<<"Marks scored in subject2 :"<<marks_sub2<<endl;
    }
};
class sports:public virtual students{
    int SPA_score;
    public:
    void get_score(){
        cout<<"ENTER SPA SCORE :"<<endl;
        cin>>SPA_score;
    }
    void cal_grade(){
        if(SPA_score >=80 && SPA_score <=100){
            cout<<"GRADE : A"<<endl;
        }
        else if(SPA_score >=70 && SPA_score <=80){
            cout<<"GRADE : B"<<endl;
        }
        else if(SPA_score >=60 && SPA_score <=70){
            cout<<"GRADE : C"<<endl;
        }
        else{
            cout<<"Candidate Fail!"<<endl;
        }
    }
};
class result:public test,public sports{
    int total_score;
    public:
    void calculate(){
        total_score=marks_sub1+marks_sub2;
        cout<<"Total score of student :"<<total_score;
    }
};
int main(){
    result t;
    t.getdata();
    t.show();
    t.get_marks();
    t.put_marks();
    t.get_score();
    t.cal_grade();
    t.calculate();
    return 0;
}