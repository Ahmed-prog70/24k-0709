#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

int main() {
    string name, email, summary;
    int yearsOfExperience;

    cout << "=== Resume Builder ===\n";
    cout << "Enter your details:\n";

    cout << "Name: ";
    getline(cin, name);

    cout << "Email: ";
    getline(cin, email);

    cout << "Years of Experience: ";
    while (!(cin >> yearsOfExperience)) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Invalid input. Please enter a number for Years of Experience: ";
    }
    cin.ignore(); 
    cout << "Professional Summary: ";
    getline(cin, summary);

    ofstream outFile("resume.txt", ios::trunc);
    if (!outFile) {
        cerr << "Error: Could not create/open resume.txt for writing\n";
        return 1;
    }

    outFile << "Name: " << name << "\n";
    outFile << "Email: " << email << "\n";
    outFile << "Years of Experience: " << yearsOfExperience << "\n";
    outFile << "Summary: " << summary << "\n";

    outFile.close();
    cout << "\nResume data successfully written to file.\n";

    ifstream inFile("resume.txt");
    if (!inFile) {
        cerr << "Error: Could not open resume.txt for reading\n";
        return 1;
    }

    cout << "\n=== Current Resume Contents ===\n";
    string line;
    while (getline(inFile, line)) {
        cout << line << "\n";
    }
    inFile.close();

    cout << "\nPress Enter to exit...";
    cin.get();

    return 0;
}