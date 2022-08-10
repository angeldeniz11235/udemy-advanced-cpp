#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception {
public: 
    virtual const char* what() const throw() {
        return "AHHHHHHHHHHHHHHHHHHHHHH!";
    }
};

class Test {
public:
    void goesWrong() {
        throw MyException();
    }
};

int main() {
    Test test;
    try {
        test.goesWrong();
    } catch (MyException &e) {
        cout << "Caught exception:" << e.what() << endl;
    }
    cout << "Program continues" << endl;
    return 0;
}