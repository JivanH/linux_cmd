#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
int main( int argc, char* argv[]) {
 if(argc != 3) {
 	cout<<"You must enter 2 args." << endl;
 	return 1;
 }
 if(rename(argv[1],argv[2]) != 0){
 	cout<<"Program can't move " << argv[1] <<  " to " <<argv[2] << endl;
 	return 1;
 }
 cout<<argv[1] << " is moved  to "<<argv[2]<<endl;
 return 0;
}
