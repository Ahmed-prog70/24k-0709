#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream createChapter1("chapter1.txt");
    createChapter1 << "CHAPTER 1\n\nThis is the content of chapter one.\n";
    createChapter1 << "It contains the introduction to our story.\n";
    createChapter1.close();

    ofstream createChapter2("chapter2.txt");
    createChapter2 << "CHAPTER 2\n\nThis is the content of chapter two.\n";
    createChapter2 << "The plot thickens in this chapter.\n";
    createChapter2.close();

    ifstream chapter1("chapter1.txt");
    ifstream chapter2("chapter2.txt");

    if (!chapter1 || !chapter2) {
        cerr << "Error: Could not open one or both chapter files\n";
        return 1;
    }

    ofstream book("book.txt", ios::app);
    if (!book) {
        cerr << "Error: Could not create/open book.txt\n";
        return 1;
    }

    string line;
    while (getline(chapter1, line)) {
        book << line << "\n";
    }

    book << "\n";

    while (getline(chapter2, line)) {
        book << line << "\n";
    }

    chapter1.close();
    chapter2.close();
    book.close();

    cout << "Chapters successfully merged into book.txt\n";

    ifstream verifyBook("book.txt");
    if (!verifyBook) {
        cerr << "Error: Could not open book.txt for verification\n";
        return 1;
    }

    cout << "\n=== Contents of book.txt ===\n";
    while (getline(verifyBook, line)) {
        cout << line << "\n";
    }
    verifyBook.close();

    cout << "\nPress Enter to exit...";
    cin.get();

    return 0;
}