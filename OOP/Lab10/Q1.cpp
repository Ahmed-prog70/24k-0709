#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
    int id;
    string name;
    float gpa;
};

void displayStudent(const Student& s) {
    cout << "ID: " << s.id << ", Name: " << s.name 
         << ", GPA: " << s.gpa << endl;
}

int main() {
    const int INITIAL_STUDENTS = 5;
    Student students[INITIAL_STUDENTS + 1];
    
    cout << "Enter data for " << INITIAL_STUDENTS << " students:\n";
    for (int i = 0; i < INITIAL_STUDENTS; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> students[i].id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "GPA: ";
        cin >> students[i].gpa;
    }
    
    ofstream outFile("students.txt", ios::out);
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }
    
    for (int i = 0; i < INITIAL_STUDENTS; i++) {
        outFile << students[i].id << "\n" 
                << students[i].name << "\n"
                << students[i].gpa << "\n";
    }
    outFile.close();
    
    cout << "\nNow enter data for 1 additional student to append:\n";
    cout << "ID: ";
    cin >> students[INITIAL_STUDENTS].id;
    cin.ignore();
    cout << "Name: ";
    getline(cin, students[INITIAL_STUDENTS].name);
    cout << "GPA: ";
    cin >> students[INITIAL_STUDENTS].gpa;
    
    ofstream appFile("students.txt", ios::app);
    if (!appFile) {
        cerr << "Error opening file for appending!" << endl;
        return 1;
    }
    
    appFile << students[INITIAL_STUDENTS].id << "\n" 
            << students[INITIAL_STUDENTS].name << "\n"
            << students[INITIAL_STUDENTS].gpa << "\n";
    appFile.close();
    
    ifstream inFile("students.txt");
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }
    
    cout << "\nAll student records in the file:\n";
    Student temp;
    int count = 0;
    while (inFile >> temp.id) {
        inFile.ignore();
        getline(inFile, temp.name);
        inFile >> temp.gpa;
        inFile.ignore();
        
        cout << "Student " << ++count << ": ";
        displayStudent(temp);
    }
    
    inFile.close();
    
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();
    
    return 0;
}
