#include <iostream>
#include <map>
using namespace std;

int main(){

    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    ages["Raj"] = 21;

    //ages.insert(pair<string, int>("Peter", 100));
    ages.insert(make_pair("Peter", 100));

    cout << ages["Mike"] << endl;

    if (ages.find("Raj") != ages.end()){
        cout << "Raj is present in the map" << endl;
    }
    else{
        cout << "Raj is not present in the map" << endl;
    }

    for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }

    for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}