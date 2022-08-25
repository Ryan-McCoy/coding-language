#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {
  if (argc > 1) {
    cout << "Coding language\n";
    
    std::string input(argv[1]);
    
    cout << input << endl;
  }
}
