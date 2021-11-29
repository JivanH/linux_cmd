#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
int main(int argc,char** argv) {
const char* folder;
if (argc < 2){
   printf("wrong count");
   return 1;
}
if (strcmp(argv[1],"-f") == 0){
   for(int i = 2; i < argc; i++){
      int result=remove(argv[i]);
      if(result == 0){
        printf("successful D");
        }
      else{
        printf("unsuccessful D");
      }  
        return 0;
      }
    for(int i = 1; i < argc; i++){
      folder=(argv[i]);
      struct stat sb;
      if(stat(folder,&sb)==0 && S_ISDIR(sb.st_mode)){
         continue;
      }
      int result = remove(argv[i]);
      if (result == 0){
      printf("successful F");
        }
      else{
        printf("unsuccessful F");
      }  
        return 0;
      }
      }
    }
