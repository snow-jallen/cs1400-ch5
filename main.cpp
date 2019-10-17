#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "Opening output file..." << endl;
    ofstream outputFile;
    outputFile.open("output.txt", ios::out);
    outputFile << "File-Based Adding Machine" << endl;

    cout << "Opening input file..." << endl;
    ifstream inputFile;
    inputFile.open("input.txt");
    int num;
    int total = 0;

    cout << "Reading input file..." << endl;
    while(inputFile >> num)
    {
        total += num;
    }
    inputFile.close();

    cout << "Total written to output file is " << total << endl;
    outputFile << "The total is" << endl;
    outputFile << total;
    outputFile.close();

    cout << "All done!" << endl;
    return 0;
}