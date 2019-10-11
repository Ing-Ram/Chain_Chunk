#include "chunkList.h"
#include <fstream>
#include <string>
#include "chunkList.h"
int main() {
    ChunkList<int> obj;
    obj.Append(3);
    obj.Append(4);
    obj.Append(9);
    obj.Append(122);
//    obj.Search(122);
    obj.Remove(3);
    obj.Search(3);
//    ofstream outFile;
//    ifstream inFile;
//    ChunkList<int> myList;
//
//
//    inFile.open("test.txt");
//
//    if (!inFile) {
//        cout << "File not found!" << endl;
//        exit(0);
//    }
//    outFile.open("output.txt");
//    string command;
//    inFile >> command;
//
//    while (command != "quit") {
//        if (command == "append") {
//            int num;
//            inFile >> num;
//            myList.Append(num);
//            outFile << "Appending " << num << endl;
//        } else if (command == "print") {
//            myList.Print();
//        } else if (command == "isempty") {
//            if (myList.isEmpty()) {
//                cout << "the list is empty" << endl;
//            } else
//                cout << "the list is not empty" << endl;
//
//        } else if (command == "getlength") {
//            outFile << "Length: " << myList.GetLength() << endl;
//        }
//        inFile >> command;
//
//    }
//
//    inFile.close();
//    outFile.close();
    return 0;
    }

