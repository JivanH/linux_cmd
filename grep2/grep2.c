#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
void grep(char f[]  , char string[])
{
               FILE *file;
               char line[100];
              file = fopen(f,"r");
             while(fscanf(file , "%[^\n]\n" , line)!=EOF)
            {
                      if(strstr(line , string) !=NULL)
                     {
            
                             printf("%s\n" , line);
                      }
                     else
                    {
                            continue;
                    }
           }
            fclose(file);
}
int isRegular(char* path) {
   struct stat S;
   stat(path,&S);
   return S_ISREG(S.st_mode);
}
void ls(char* path,char string[]) {
   DIR* directory = opendir(path);
   if(directory!=NULL){
    struct dirent* struct_;
     while((struct_ = readdir(directory))!=NULL) {
           if(strcmp(struct_->d_name , "..") == 0 || strcmp(struct_->d_name , ".") == 0) {
              continue ;
           }
char allpath[4096];
char *name = struct_->d_name;
char c = '/';
strncat(allpath,&c,1);
strncat(allpath,name,strlen(name));


           if(isRegular(allpath)!=0){
     grep( allpath ,string);  }
    else {
      ls( allpath,string);
    }
     }
   }
   closedir(directory);
}

int main(int argc , char*argv[]){
   if( argc!=3) {
          return 1 ;
   }
if(isRegular(argv[2]))
     {
      grep(argv[2], argv[1]);
     }
     else
     {
       ls(argv[2],argv[1]);
     }

   return 0;
}
