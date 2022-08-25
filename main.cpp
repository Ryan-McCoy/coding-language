#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, char **argv) {
  if (argc > 1) {
    cout << "Coding language\n";
    
    std::string input(argv[1]);
    
    cout << input << endl;
  }
}

int split(str) {
    char *ptr; // declare a ptr pointer  
    ptr = strtok(str, " , "); // use strtok() function to separate string using comma (,) delimiter.  
    cout << " \n Split string using strtok() function: " << endl;  
    // use while loop to check ptr is not null  
    while (ptr != NULL)  
    {  
        cout << ptr  << endl; // print the string token  
        ptr = strtok (NULL, " , ");  
    }  

}
