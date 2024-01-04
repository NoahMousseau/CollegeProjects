using namespace std;

#include "BlogEntry.h"

//Noah Mousseau

BlogEntry::BlogEntry() {
    //Default constructor. Creates an entry with unnamed author and empty contents.
    //Uses the default constructors for all data items.
    author = Text();
    contents = Text();
}

BlogEntry::BlogEntry(const Text& initAuthor, const Text& initContents)
    : author(initAuthor), contents(initContents)
{
    //No additional code necessary
}

Text BlogEntry::getAuthor() const {
    return author;
}

Text BlogEntry::getContents() const {
    return contents;
}

Date BlogEntry::getCreateDate() const {
    return created;
}

Date BlogEntry::getModifyDate() const {
    return modified;
}

void BlogEntry::printHTML(ostream& out) const {
    out << "<html>" << endl;
    out << "<body>" << endl;
    out << "<h1>" << author << "</h1>" << endl;
    out << "<p>" << endl;
    out << contents << endl;
    out << "</p>" << endl;
    out << "<p>" << endl;
    out << "Created: " << created << endl;
    out << "</p>" << endl;
    out << "<p>" << endl;
    out << "Last modified: " << modified << endl;
    out << "</p>" << endl;
    out << "</body>" << endl;
    out << "</html>" << endl;
}

void BlogEntry::setAuthor(const Text& newAuthor) {
    author = newAuthor;
}

void BlogEntry::setContents(const Text& newContents) {
    contents = newContents;
}

void BlogEntry::showStructure() const {
    cout << "Author: " << author << endl;
    cout << "Created: " << created << endl;
    cout << "Modified: " << modified << endl;
    cout << "Content: " << contents << endl;
}