#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
class Student{
    private:
    map<string, vector<int>> stuMap; 
    public:
    
     int getGradesCount(string& name) {
        auto getName = stuMap.find(name);
        return (getName != stuMap.end()) ? getName->second.size() : 0;
    }
    
    bool hasGrade(string& name) {
        auto checkIsPresent = stuMap.find(name);
        return (checkIsPresent != stuMap.end() && !checkIsPresent->second.empty());
    }
    
    void addGrade(string& name, int grade){
        if (grade < 0 || grade > 100){
            cout<< "Invalid grade. Please enter a grade between 0 and 100." << endl;
            return;
        }
        stuMap[name].push_back(grade);
        cout << "Grade added successfully for " << name << "." << endl;
    }
    
    bool removeGrade(string& name, int grade){
        if(!hasGrade(name)){
            cout << "Student " << name << " not found or has no grades." << endl;
            return false;
        }
        auto& grades = stuMap[name];
        auto specGrade = find(grades.begin(), grades.end(), grade);
        
        if(specGrade != grades.end()){
             grades.erase(specGrade); 
             cout << "Grade " << grade << " removed for " << name << "." << endl;
            if (grades.empty()) {
                stuMap.erase(name);
                cout << "Student removed from the record as they have no grades left." << endl;
            }
            return true; 
        } 
        else {
            cout << "Grade " << grade << " not found for " << name << "." << endl;
            return false;
        }
    }

    
    void displayAllGrades(string& name){
        if (!hasGrade(name)) {
            cout << "No grades available for " << name << "." << endl;
            return;
        }
        cout << "Grades for " << name << ": ";
        for(int grade : stuMap[name]){
                 cout << grade << ", ";
        }
        cout << endl; 
    }
    
    void displayClassAvg(){
        int totalGrades = 0;
        int gradeSum = 0;
        for(auto& entry : stuMap){
            for(int grade : entry.second){
                gradeSum = gradeSum + grade;
                totalGrades++;
            }
        }
        if(totalGrades > 0){
            cout << "Class average: " << static_cast<double>(gradeSum) / totalGrades << endl;

        }
        else {
            cout << "No grades available to calculate class average." << endl;
        }
        
    }
    void findStudentHighestLowest(string& name){
        if(!hasGrade(name)){
            cout << "No grades found for " << name << "." << endl;
        }
        else{
            int highest = *max_element(stuMap[name].begin(), stuMap[name].end());
            int lowest = *min_element(stuMap[name].begin(), stuMap[name].end());
            cout << "Highest grade for " << name << ": " << highest << endl;
            cout << "Lowest grade for " << name << ": " << lowest << endl;
        }
    }
    void findClassHighestLowest(){
        if(stuMap.empty()){
             cout << "No students in the class." << endl;
            return;
        }
        int highest = -1;
        int lowest = 101;
        for(auto& entry: stuMap){
            for(int grade : entry.second){
                if(grade > highest){
                    highest = grade;
                }
                if(grade < lowest){
                    lowest = grade;
                }
            }
        }
            cout << "Highest grade in the class: " << highest << endl;
            cout << "Lowest grade in the class: " << lowest << endl;
    }
};
int main(){
    Student stu1;
    int choice;
    do{
        cout << "\nStudent Grades Management System:\n";
        cout << "1. Add Grade\n";
        cout << "2. Remove Grade\n";
        cout << "3. Display Grades for a Student\n";
        cout << "4. Display Class Average\n";
        cout << "5. Find Highest and Lowest Grade for a Student\n";
        cout << "6. Display Highest and Lowest Grade in the Class\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:{
                string name;
                int gradeNum;
                cout << "Enter Student name: ";
                cin >> name;
                if(stu1.getGradesCount(name) >= 5){
                    cout << "Cannot add more than 5 grades for " << name << ". Please remove a grade first." << endl;
                    break;
                }
                int numGradesToAdd = 5 - stu1.getGradesCount(name);
                cout << "Enter " << numGradesToAdd << " grades for " << name << ":\n";
                for (int n = 0; n < numGradesToAdd; n++) {
                    cout << "Enter grade " << (n + 1) << ": ";
                    cin >> gradeNum;  
                    stu1.addGrade(name, gradeNum); 
                }
                break;
            }
            case 2:{
                string name;
                int gradeNum;
                cout << "Enter Student Name: ";
                cin >> name;
                stu1.displayAllGrades(name);
                
                 if (stu1.getGradesCount(name) > 0) {
                    cout << "Enter grade to remove: ";
                    cin >> gradeNum;

                    if (!stu1.removeGrade(name, gradeNum)) {
                        cout << "Failed to remove grade. Make sure the grade is correct or the student has grades to remove." << endl;
                    }
                } else {
                    cout << "No grades available to remove for " << name << "." << endl;
                }
                break; 
            }
            case 3:{
                string name;
                cin.ignore();
                cout << "Enter Student Name: ";
                getline(cin, name);
                stu1.displayAllGrades(name);
                break;
            }
            case 4:{
                stu1.displayClassAvg();
                break;
            }
            case 5:{
               string name;
                cout << "Enter student name: ";
                cin.ignore();
                getline(cin, name);
                stu1.findStudentHighestLowest(name);
                break;
            }
            case 6:{
                stu1.findClassHighestLowest();
                break;
            }
            case 7:{
                cout << "Exit Program.";
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    while(choice != 7);
    return 0;
}