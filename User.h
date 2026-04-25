#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User {
protected:
    string username;
    string password;

public:
    User(string u, string p);
    virtual void menu() = 0;
    string getUsername();
    string getPassword();
    virtual ~User() {}
};

#endif
