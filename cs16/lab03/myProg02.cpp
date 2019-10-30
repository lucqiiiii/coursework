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
    int numd = 0;
    int numa = 0;
    int numn = 0;

    string line = "";
    if (in.fail()){
      cerr << "Opening file failed" << endl;
      }
    while (!in.eof()){
      getline(in,line);
      if (line.find("duck") != string::npos){
        numd++;
      }
      else{
        numn++;
      }  
    }
    numa = numd + numn;
    in.close();
    cout << "Report for " << argv[1] << ":" << endl;
    cout << "   Animal count:    " << numa-1 << endl;
    cout << "   Duck count:      " << numd << endl;
    cout << "   Non duck count:  " << numn-1 << endl;
}
  return 0;
}




