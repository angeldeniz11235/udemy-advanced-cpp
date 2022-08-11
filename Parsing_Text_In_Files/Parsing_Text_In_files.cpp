#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string filename = "stats.txt";
    ifstream input;

    input.open(filename);
    if(!input.is_open()){
        cout << "File not found" << endl;
        return 1;
    }
    while(input){
        string line;
        getline(input, line, ':');

        int population;
        input >> population;
        
        //discard the end of line character
        input >> ws;

        //check if there is another line, if not, break
        if(!input){
            break;
        }

        cout << line << " -- " << population << endl;

        input >> ws;
    }
    
    input.close();

    return 0;
}