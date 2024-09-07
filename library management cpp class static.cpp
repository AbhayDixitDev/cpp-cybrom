//Q.3)Create a class named Library to manage a library catalog,
// Data Member:  book_id, author_name, and category.
// One static data member : book_count
// Methods: display() 
// One static member function : total_books()??display total objects been created.

#include <iostream>
using namespace std;

class Library {
private:
    int book_id;
    string author_name;
    string category;
    static int book_count; // static data member to count total books

public:
    // Constructor to initialize book details
    Library(int id, string author, string cat) {
        book_id = id;
        author_name = author;
        category = cat;
        book_count++; // increment book count for each new book
    }

    // Method to display book details
    void display() {
        cout << "Book ID: " << book_id << endl;
        cout << "Author Name: " << author_name << endl;
        cout << "Category: " << category << endl;
    }

    // Static member function to display total books
    static void total_books() {
        cout << "Total Books: " << book_count << endl;
    }
};

// Initialize static data member
int Library::book_count = 0;

int main() {
    // Create Library objects
    Library book1(1, "J.K. Rowling", "Fantasy");
    Library book2(2, "J.R.R. Tolkien", "Fantasy");
    Library book3(3, "George R.R. Martin", "Fantasy");

    // Display book details
    book1.display();
    book2.display();
    book3.display();

    // Display total books
    Library::total_books();

    return 0;
}