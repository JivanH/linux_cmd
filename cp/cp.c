#include <stdio.h>
int main(int argc ,char** argv) {
 if(argc != 3){
  return 1;
 }
FILE *fp1,*fp2;
fp1 = fopen(argv[1], "r");
fp2 = fopen(argv[2], "w");
char c;
while ((c = fgetc(fp1)) != EOF){
 fputc(c,fp2);
}
fclose(fp1);
fclose(fp2);

}
