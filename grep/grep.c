#include<stdio.h>
#include<string.h>

int main(int argc , char **argv)
{if (argc != 3) {
	  printf("Please specify correct arguments\n");
	  return 1;
  }


               FILE *file;
               char line[100];
              file= fopen(argv[2],"r");
             while(fscanf(file , "%[^\n]\n" , line)!=EOF)
            {
                      if(strstr(line , argv[1]) !=NULL)
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
