#include <iostream>
#include <map>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
      //  constructor with no arguments
        Person(): age(0), name(""){}

        //copy constructor
        Person(const Person& p): age(p.age), name(p.name){
            cout << "Copy constructor called" << endl;
        }

        Person(string name, int age) : 
        name(name), age(age){
        }

    void print(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    try {
        map<int, Person> people;
        // Add people to the map
        people[50] = Person("John", 30);
        people[32] = Person("Mary", 25);
        people[1] = Person("Mike", 20);
    
        for(map<int, Person>::iterator it = people.begin(); it != people.end(); it++){
            cout << it->first << " " << flush;
            it->second.print();
        }
    } catch (std::bad_alloc& ba) {
        cout << ba.what() << endl;
    }
    return 0;
}
