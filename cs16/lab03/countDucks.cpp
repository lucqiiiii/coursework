// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  else {
    ifstream in;
    in.open(argv[1]);
    int num = 0;
    string line = "";
    if (in.fail()){
      cout << "Opening file failed" << endl;
      }
    while (!in.eof()){
      getline(in,line);
      if (line.find("duck") != string::npos){
        num++;
      }
    }
    in.close();
    cout << "There were " << num << " ducks in " << argv[1] << endl;
}
  return 0;
}
