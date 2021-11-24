#include <iostream>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <cstring>
#include <dirent.h>
using namespace std;

int isRegular(char* path) {
   int d = strcmp(path,"-f");
   return d;
}

int main(int argc, char **argv){
  if (argc < 2)
    return 1;
  
  if (isRegular(argv[1]) == 0){
    for(int i=2; i<argc; ++i) {
    	int res = remove(argv[i]);
    	if(res != 0)
    	    cout<<"Can't remove a path."<<endl;
    }
    return 0;
  }
  for(int i=1;i<argc;++i){
  	DIR* dir = opendir(argv[i]);
  	if(dir != NULL) {
  	closedir(dir);
  	cout<<"smt is missing (-f)"<<endl;
  	}
  	int res = remove(argv[i]);
  	if(res != 0)
    	    cout<<"Can't remove a path."<<endl;
  } 
  	return 0;
}
