#include <iostream>
#include <cstring>
using namespace std;
typedef struct BookName
{
    char bookname[20];
    char author[10];
    float price;
    void print()
    {
        cout << bookname << " "
             << author << " "
             << price << endl;
    }
} Book;

int main(int argc, char const *argv[])
{
    Book book = {0};
    strcpy(book.bookname, "计算机网络");
    strcpy(book.author, "lisi");
    book.price = 19.9;
    book.print();
    strcpy(book.bookname, "aaa");
    book.print();
    Book *p = &book;
    p->print();
    Book b2;
    b2 = book;
    b2.print();
    return 0;
}
