#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <dirent.h>
#include <limits.h>
#include <unistd.h>
int isReg(const char* path){
  struct stat S;
  stat(path,&S);
  return S_ISREG(S.st_mode);
}


void SearchText(const char* path, char* text)
{
     FILE* file = fopen(path, "r");
     if (file == 0)
     {
        fprintf(stderr, "Can not open file\n");
        exit(-1);
     }
     else
     {
        char* read = malloc(100);
        while(fgets (read, 100, file))
        {
              if(strstr(read, text))
              {
                printf("%s", read);
              }
        }
        free(read);
      }
 
      fclose(file);
}


void ls(char* path, char* text) {
   DIR* directory = opendir(path);
   if(directory)
   {
     struct dirent* struct_;
     while((struct_ = readdir(directory))!=NULL) 
     {
           if(strcmp(struct_->d_name , "..") == 0 || strcmp(struct_->d_name , ".") == 0) 
           {
              continue ;
           }
           char arr[PATH_MAX];
           char* name = struct_->d_name;
           getcwd(arr, sizeof(arr));
           char slash = '/';
           strncat(arr, &slash, strlen(slash));
           strncat(arr, name, strlen(name));
           printf("%s", arr);
           if(isReg(arr) == 0)
           {
             ls(arr, text);
           }
           else
           {
             SearchText(arr, text);
           }
     }
   } 
         closedir(directory);
}


int main(int argc, char** argv)
{
  if (argc != 3)
  { 
  fprintf(stderr, "Something is wrong\n");
  exit(-1);
  }
  
  if (isReg(argv[2]))
  {
    SearchText(argv[2], argv[1]); 
  }
  else
  {  
    ls(argv[2], argv[1]);
  } 
}
