#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream outFile;
    string outputFileName = "text.txt";
    outFile.open(outputFileName.c_str());
    if(outFile.is_open()){
        outFile << "Hello World!" << endl;
        outFile << 123 << endl;
        outFile.close();
    } else {
        cout << "Could not open file" << endl;
    }
    return 0;
}