#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int split(char str[]) {
    char *ptr; // declare a ptr pointer  
    ptr = strtok(str, ":, "); // use strtok() function to separate string using comma (,) delimiter.  
    cout << " \n Split string using strtok() function: " << endl;  
    // use while loop to check ptr is not null  
    while (ptr != NULL)  
    {  
        cout << ptr  << endl; // print the string token  
        ptr = strtok (NULL, ":, ");  
    }  
  return 0;
}

int main(int argc, char **argv) {
  if (argc > 1) {
    cout << "Coding language\n";
    
    std::string input(argv[1]);
    std::string frame;
    cout << input << endl;
    fstream inputfile(input);
    file << inputfile;
    inputfile.close();
    int len = file.length();
    char str[len + 1];
    strcpy(str, file.c_str());
    return split(str);
  }
}
