#include <iostream>
using namespace std;
class Student
{
private:
    int studentId;
    string name;
    int age;
    char grade;

public:
    Student():  grade('N'){ }

    Student(int sId, string n, int a, char g)
    {
        studentId = sId;
        name = n;
        age = a;
        grade = g;
    }
    void promoteStudent()
    {
        grade--;

        if (grade < 'A')
            grade = 'A';

        if (grade == 'E')
            grade = 'D';
    }
    bool isEligibleForScholarship()
    {
        return (grade =='A');
    }
    void displayDetails(){
        cout << "Id: "<< studentId <<" Name: "<< name << " Age: "<< age << " Grade: "<< grade <<endl;
    }
};

int main()
{
    Student S1(1, "Jackson", 19, 'A');
    Student S2(2, "Nicolas", 20, 'B');
    Student S3(3, "Palmer", 21, 'A');
    S1.displayDetails();
    S1.promoteStudent();
    cout<<"Eligible for Scholarship: "<<(S1.isEligibleForScholarship()?"Yes":"No");
    cout<<endl;
    S2.displayDetails();
    S2.promoteStudent();
    cout<<"Eligible for Scholarship: "<<(S2.isEligibleForScholarship()?"Yes":"No");
    cout<<endl;
    S3.displayDetails();
    S3.promoteStudent();
    cout<<"Eligible for Scholarship: "<<(S3.isEligibleForScholarship()?"Yes":"No");
    cout<<endl;
    return 0;
}