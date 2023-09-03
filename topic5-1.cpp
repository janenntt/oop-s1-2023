#include <iostream>
#include <string>
using namespace std;

class Publication{
    protected:
        string title;
        string author;
        int year;
    public:
    Publication(string title, string author, int year):
    title(title), author(author), year(year){ }
    Publication():Publication("No title","No author", 0){ } //default constructor
    void print(){
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "Year: " << this->year << endl;
    }
};

class Book: public Publication{
    private:
        string publisher;
        int num_pages;   
        int ISBN;
    public:
    Book(string title, string author, int year, string publisher, int num_pages, int ISBN) : Publication(title, author, year), publisher(publisher), num_pages(num_pages), ISBN(ISBN){}
    Book():Book("No title", "No author", 0, " ", 0, 0 ) { }
    void print(){
        Publication::print();
        cout << "Publisher: " << this -> publisher << endl;
        cout << "Pages: " << this -> num_pages << endl;
        cout << "ISBN: " << this -> ISBN << endl;
    }
};

int main(){
    Book harry_potter("Harry Potter","JK.Rowling",1990,"London",777,12345);
    harry_potter.print(); 
}