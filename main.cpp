#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv[]) {
    cout << "Coding language\n";
    char input[] = argv[1];
    fstream infile(input);
    string temptext;
    string code;
    while (getline(infile, temptext)){
        code << temptext;
    }
    delete temptext;
    
}