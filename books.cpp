#include "books.h"
#include <iostream>
using namespace std;

books::books() {
    title = "Unknown";
    author = "Unknown";
    price = 0.0;
    yearPublished = 0;
}

books::books(const string& title, const string& author, double price, int yearPublished) {
    this->title = title;
    this->author = author;
    this->price = price;
    this->yearPublished = yearPublished;
}

books::~books() {
    cout << "A Book object has been removed from memory." << endl;
}

void books::setTitle(const string& title) {
    this->title = title;
}

void books::setAuthor(const string& author) {
    this->author = author;
}

void books::setPrice(double price) {
    if (price > 0.0) {
        this->price = price;
    }
    else {
        cout << "Invalid price. Price must be a positive number." << endl;
    }
}

void books::setYearPublished(int yearPublished) {
    if (yearPublished >= 0) {
        this->yearPublished = yearPublished;
    }
}

const string& books::getTitle() const {
    return title;
}

const string& books::getAuthor() const {
    return author;
}

double books::getPrice() const {
    return price;
}

int books::getYearPublished() const {
    return yearPublished;
}

bool books::operator==(const books& other) const {
    return (title == other.title) && (author == other.author) && (price == other.price) && (yearPublished == other.yearPublished);
}

books books::operator+(const books& other) const {
    return books("Combined Book", "Various Authors", (price + other.price) / 2, (yearPublished + other.yearPublished) / 2);
}

ostream& operator<<(ostream& os, const books& book) {
    os << book.title << " " << book.author << " Price: $" << book.price << ", Year Published: " << book.yearPublished;
    return os;
}

bool books::operator>(const books& other) const {
    return price > other.price;
}
