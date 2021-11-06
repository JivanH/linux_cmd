#include<stdio.h>
#include<unistd.h>

int main(int argc, char** argv)
{
   printf("argc = %d\n", argc);
   
   if (argc != 2)
   {
    printf("ERROR");
    return 1;
   }
   
   int result = chdir(argv[1]);
   
   if (result != 0)
   {
    printf ("Cannot change directory to \'%s\'\n", argv[1]);
   }
   
   else
   { 
    printf ("OK\n");
   }
   
   return 0;
   
}   

    
