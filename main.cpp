#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {
    cout << "Coding language\n";
    if (argc > 1) {
        std::string input(argv[1]);
    }
    cout << input << endl; 
}
