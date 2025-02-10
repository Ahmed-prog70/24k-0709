#include <iostream>
#include <string>

using namespace std;
class Book {
public:
    Book(int id, string title, string author, bool availability = true)
        : id(id), title(title), author(author), availability(availability) {}
    int getId() const { return id; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    bool isAvailable() const { return availability; }

    void setAvailability(bool availability) { this->availability = availability; }

private:
    int id;
    string title;
    string author;
    bool availability;
};

class Library {
public:
    Library(int capacity) : capacity(capacity), size(0) {
        books = new Book*[capacity];
    }
    ~Library() {
        delete[] books;
    }
    void addBook(const Book& book) {
        if (size == capacity) {
            cout << "Error: Library is full." << endl;
            return;
        }
        if (!isBookIdUnique(book.getId())) {
            cout << "Error: Book ID already exists." << endl;
            return;
        }
        books[size] = new Book(book);
        size++;
    }
    void borrowBook(int id) {
        for (int i = 0; i < size; i++) {
            if (books[i]->getId() == id) {
                if (books[i]->isAvailable()) {
                    books[i]->setAvailability(false);
                    cout << "Book borrowed successfully." << endl;
                } else {
                    cout << "Error: Book is not available." << endl;
                }
                return;
            }
        }
        cout << "Error: Book not found." << endl;
    }
    void returnBook(int id) {
        for (int i = 0; i < size; i++) {
            if (books[i]->getId() == id) {
                if (!books[i]->isAvailable()) {
                    books[i]->setAvailability(true);
                    cout << "Book returned successfully." << endl;
                } else {
                    cout << "Error: Book is already available." << endl;
                }
                return;
            }
        }
        cout << "Error: Book not found." << endl;
    }

    void displayAvailableBooks() const {
        cout << "Available Books:" << endl;
        for (int i = 0; i < size; i++) {
            if (books[i]->isAvailable()) {
                cout << "ID: " << books[i]->getId() << ", Title: " << books[i]->getTitle()
                     << ", Author: " << books[i]->getAuthor() << endl;
            }
        }
    }

private:
    bool isBookIdUnique(int id) const {
        for (int i = 0; i < size; i++) {
            if (books[i]->getId() == id) {
                return false;
            }
        }
        return true;
    }

    int capacity;
    int size;
    Book** books;
};

int main() {
    const int MAX_BOOKS = 10;
    Library library(MAX_BOOKS);
    library.addBook(Book(1, "Book 1", "Author 1"));
    library.addBook(Book(2, "Book 2", "Author 2"));
    library.addBook(Book(3, "Book 3", "Author 3"));
    library.displayAvailableBooks();
    library.borrowBook(1);
    library.displayAvailableBooks();
    library.returnBook(1);
    library.displayAvailableBooks();
    return 0;
}