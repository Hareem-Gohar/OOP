#include <iostream>
#include <string>
using namespace std;
class Teacher{
//Access Modifier
private:
    double salary;
public:
  //props //attributes
    string name;
    string dept;
    string subject;
  //methods ---function written in the class //Member Function
  void changeDeptt(string newDeptt){
      dept = newDeptt;
  }
  //Setter 
  void setSalary(double s){
      salary = s;
  }
  //Getter 
  double getSalary(){
      return salary;
  }
};
class Student {
    
};

int main(){
     Teacher t1;
     Teacher T2;
     t1.name = "Hareem";
     t1.dept = "CS";
     t1.setSalary(25000);
     t1.subject = "Software Eng";
     cout<< t1.name <<endl;
     cout<< t1.getSalary() <<endl;
    return 0;

}