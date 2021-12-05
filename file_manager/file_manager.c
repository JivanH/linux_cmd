#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

int main()
{
 while(1)
 {
      printf("0: for exit\n");
      printf("1(cd): <some_path> \n");
      printf("2(cp): <source_file> destination\n");
      printf("3(grep): <some word> Dir/File\n");
      printf("4(rm): <some_path>\n");
      printf("5(mv): <path_1> <path_2>\n");
     
      int cmd;
      scanf("%d", &cmd);
      
      if (cmd == 0)
      {
         break;
      }
      if (cmd == 1)
      {
         char* name;
         char* path;
         printf("Specify source file!\n");
         scanf("%s", path);
         char* some_path;
         printf("Go to - \n");
         scanf("%s", some_path);
         some_path = (char*)malloc(100);
         scanf("%s", some_path);
         name = (char*)malloc(10);
         strcpy(name,"../bin/cd");
      } 
      if (cmd == 2)
      {
         char* source_file;
         printf("Specify source file!\n");
         scanf("%s", source_file);
         char* name;
         char* destination;
         destination = (char*)malloc(100);
         scanf("%s", destination);
         name = (char*)malloc(10);
         strcpy(name,"../bin/cp");
      }
      if (cmd == 3)
      {
         printf("What you want to search - \n");
         char* name;
         char* file_dir;
         printf("Where to look?\n");
         file_dir = (char*)malloc(100);
         scanf("%s", file_dir);
         name = (char*)malloc(12);
         strcpy(name,"../bin/grep");
      } 
      if (cmd == 4)
      {
         char* name;
         char* some_path;
         printf("What do you want to delete?\n");
         scanf("%s", some_path);
         name = (char*)malloc(10);
         strcpy(name,"../bin/rm");
      }   
      if (cmd == 5)
      {
         char* name;
         char* path_1;
         printf("Specify source file!\n");
         scanf("%s", path_1);
         char* path_2;
         printf("Where to move?\n");
         path_2 = (char*)malloc(100);
         scanf("%s", path_2);
         name = (char*)malloc(10);
         strcpy(name,"../bin/mv");
      }  
      
      pid_t pid = fork();
    
      if (pid < 0)
      { 
         fprintf(stderr, "Fork Failed");
         return 1;
      }
      else if (pid == 0)
      { 
               /*child process*/
               char* file;
               char* name;
               char* path;
               printf("Specify source file!\n");
               scanf("%s", path);
               if (file)
               {  
                  char** args = {name, path, NULL};
                  execv(args[0], args);
                  return 1;
               }
      }
      else if (pid > 0)
      {
         /*parent process*/
         /*parent will wait for the child to complete */
         wait(NULL);
         printf("Child Complete \n");
     }
          
       
  }
  
  return 0;     
}
