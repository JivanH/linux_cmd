#include <iostream>
#include <unistd.h>
using namespace std;
int main(int argc, char** argv)
{
  if (argc != 2)
          cout << "Please specify correct arguments\n";
  char buffer[100];
  cout<<"Origin directory is\n" << getcwd(buffer, 100) << endl;
  int result = chdir(argv[1]);
  if (result != 0)
	  cout<<"Can't change directory to \'\'\n"<< argv[1];
  else if (result == 0)	   
  	  cout<<"Changed directory is \n" << getcwd(buffer, 100);
}
