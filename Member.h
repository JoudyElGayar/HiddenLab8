#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;
class Member {
private:
    int id;
    string name;
    string address;
    string contact;

public:
    Member(int id, const string& name, const string& address,
           const string& contact);

    int getId() const;
    void setId(int id);
    string getName() const;
    void setName(const string& name);
    string getAddress() const;
    void setAddress(const string& address);
    string getContact() const;
    void setContact(const string& contact);
};

#endif  // MEMBER_H
