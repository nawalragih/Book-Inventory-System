#pragma once
#ifndef books_h
#define books_h
#include <string>
using namespace std;

class books {
private:
    string title;
    string author;
    double price;
    int yearPublished;

public:
    books();
    books(const string& title, const string& author, double price, int yearPublished);

    ~books();

    void setTitle(const string& title);
    void setAuthor(const string& author);
    void setPrice(double price);
    void setYearPublished(int yearPublished);

    const string& getTitle() const;
    const string& getAuthor() const;
    double getPrice() const;
    int getYearPublished() const;

    bool operator==(const books& other) const;

    books operator+(const books& other) const;

    friend ostream& operator<<(ostream& os, const books& book);

    bool operator>(const books& other) const;

};
#endif
