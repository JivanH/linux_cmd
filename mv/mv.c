#include <stdio.h>
#include <stdlib.h>

int main(int argc , char** argv){
if (argc != 3){
  printf("wrong count ");
  return 1;
  }
 int result=rename(argv[1],argv[2]);
 if (result == 0){
  printf("The file renamed successfully\n ");
 }
 else{
 printf("The file couln't be renamed\n ");
 }
  return 0;
}
