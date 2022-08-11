#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)//align the struct to 1 byte boundary to avoid padding

struct Pearson{
   char name[50];
   int age;
   double height;
};

#pragma pack(pop)//align the struct to the default boundary

int main(){

    Pearson someone = {"Frodo", 220, 0.8};

    string filename = "test.bin";
    
    /// write the struct to the file////
    ofstream outputFile;

    outputFile.open(filename, ios::binary);

    if(outputFile.is_open()){

        //outputFile.write((char*)&someone, sizeof(someone));
        outputFile.write(reinterpret_cast<char*>(&someone), sizeof(someone));//new way to cast the struct memory address to char*

        outputFile.close();
    }
    else{
        cout << "Could not create file " + filename << endl;
        return 1;
    }
    outputFile.close();

    ///read the struct from the file////
    ifstream inputFile;

    inputFile.open(filename, ios::binary);

    Pearson someoneElse = {};
    if(inputFile.is_open()){
        inputFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(someoneElse)); //read the struct from the file
        inputFile.close();
    }
    else{
        cout << "Could not open file " + filename << endl;
        inputFile.close();
        return 1;
    }

    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

    return 0;
}