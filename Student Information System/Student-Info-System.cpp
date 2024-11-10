#include <iostream>
#include <string>
using namespace std;
class Student{
private:
    string name;
    int rollNo;
    int age;
    char grade;
public:
      Student(){
        name="";
        rollNo = 0;
        age = 18;
        grade = 'F';
        }
        void setInfoStu(string n, int rn, int a, char g){
            name = n;
            rollNo = rn;
            if(a >= 18 && a <= 100){
                age = a;
            }
            else{
                cout<<"Age should be between 18 and 100. Setting default age to 18."<<endl;
                 age = 18; 
            }
            if(g >= 'A' && g <= 'F'){
                grade = g;
            }
            else{
                cout<<"Invalid grade. Setting default grade to 'F'.";
                grade = 'F';
            }
        }
        void getInfoStu(){
            cout<<"Name:"<< name<<endl;
            cout<<"Age:"<<age<<endl;
            cout<<"Roll No:"<<rollNo<<endl;
            cout<<"Grade:"<<grade<<endl;
        }
        
};
int main(){
    Student s1;
    s1.setInfoStu("Ali", 12, 2, 'A');
    s1.getInfoStu();
    return 0;
}