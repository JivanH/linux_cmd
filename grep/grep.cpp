#include <iostream>
#include <string.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <limits.h>
#include <pwd.h>
using namespace std;

void search(char* file, char* word, const char* dirname){
    FILE* fp = fopen(file,"r");
    if (!fp)
    	return;
    int BUF_LEN = 511;
    char buffer[BUF_LEN+1];
    while(fgets( buffer, BUF_LEN, fp)) {
      	if(strstr(buffer,word))
      	{
      	   if(dirname!="")
        	cout<<dirname<<"/"<<file<<": "<<fgets(buffer,BUF_LEN,fp);
           else 
           	cout<<file<<": "<<fgets(buffer,BUF_LEN,fp);
        }
    }	
    fclose(fp);
}

int isRegular(char* path) {
   struct stat S;
   stat(path,&S);
   return S_ISREG(S.st_mode);
}

void ls(const char* dirname, char* word) {
    DIR* dir = opendir(dirname);
    if (!dir) 
        return;
    char path[256] = {'\0'};
    struct dirent * entry;
    while ((entry = readdir(dir))) {
        if (entry->d_type == DT_DIR) {
           if (strcmp(entry->d_name, ".") && strcmp(entry->d_name, "..")) {
               strcpy(path, dirname);
               strcat(path, "");
               strcat(path, entry->d_name);
               ls(path,word);
           }
        } 
        else 
	    search(entry->d_name,word,dirname);
    }
    closedir(dir);
}

int main(int argc, char* argv[]){
    if(argc != 3)
	cout<<"You must enter 1) directiory. 2)word."<<endl;
    
    if(isRegular(argv[1]))
    	search(argv[1],argv[2],"");
    else 
    	ls(argv[1],argv[2]);
    return 0;
}

