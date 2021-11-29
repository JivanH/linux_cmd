#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
   char linebuffer[100];
   FILE *file = NULL;
    if (argc != 3){
      printf("Please specify correct arguments\n");
      return 1;
    }
    file = fopen (argv[2], "r");
    while (fgets(linebuffer,100,file)){
       if(strstr(linebuffer,argv[1])){
         printf("%s", linebuffer);
       }
    }
    fclose(file);
  


}


