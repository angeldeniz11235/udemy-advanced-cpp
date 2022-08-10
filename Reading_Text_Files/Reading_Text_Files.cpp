#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream inFile;
    string fileName = "text.txt";
    inFile.open(fileName.c_str());
    if (inFile.is_open()){
        string line ;
        while (getline(inFile, line)){
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Could not open:" << fileName << endl;
    }
}