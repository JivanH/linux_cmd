#include<unistd.h> 
#include<stdlib.h> 
#include<stdbool.h> 
#include<stdio.h> 
#include<errno.h> 
#include <string.h> 
int main(int argc, char*argv[]) 
{ 
while (true){ 
printf("0:for exit\n"); 
printf("1(rm):<source_path\n>"); 
printf("2(cp):<source> destination\n>"); 
printf("3(cd):destination\n"); 
printf("4(mv):destination  newnamedestination\n"); 
printf ("5(grep):<line> destination\n"); 
int command; 
scanf("%d",&command); 
char arg_rm[100]; 
char arg_cp1[100]; 
char arg_cp2[100]; 
char arg_cd[100]; 
char arg_mv1[100]; 
char arg_mv2[100]; 
char arg_grep1[100]; 
char arg_grep2[100]; 
long int size = strlen(argv[0]) - 1;
char first_arg[size];
for(int i = 0; i <= sizeof(first_arg) - 12; ++i){
  first_arg[i] = argv[0][i];
}
if ( command==0) 
  { 
break; 
 } 
 if(command==1){ 
   scanf("%s", arg_rm);
   } 
   if(command==2){ 
 scanf("%s", arg_cp2); 
   scanf ("%s",arg_cp2);
 } 
 if(command==3){ 
   scanf("%s", arg_cd);
 } 
   if(command==4){ 
 scanf("%s", arg_mv1); 
   scanf("%s", arg_mv2);
 } 
 if(command==5){
   scanf("%s",arg_grep1);
 scanf("%s",arg_grep2);
   }
   pid_t pid=fork();
 if (pid==-1){ 
 perror("fork error"); 
 exit(1); 
 } 
if (pid==0) 
{  
if(command==1){ 
char rm[] = "rm_project";
for(int i = sizeof(first_arg) -11,  j = 0; i < sizeof(first_arg); ++i, ++j){
first_arg[i] = rm [j];
}
for(int i = 0; i < sizeof(first_arg);++i){
printf("%c",first_arg[i]);
}
char* const parmList[]={first_arg,arg_rm,NULL}; 
execv(parmList[0],parmList); 
exit(1); 
} 
if(command==2){ 
char cp[] = "cp_project";
for(int i = sizeof(first_arg) - 11,  j = 0; i < sizeof(first_arg); ++i, ++j){
first_arg[i] = cp [j];
}
for(int i = 0; i < sizeof(first_arg);++i){
printf("%c",first_arg[i]);
}
char* const parmList[]={first_arg,arg_cp1,arg_cp2,NULL}; 
execv(parmList[0],parmList); 
exit(1); 
 } 
if(command==3){ 
char cd[] = "cd_project";
for(int i = sizeof(first_arg) - 11,  j = 0; i < sizeof(first_arg); ++i, ++j){
first_arg[i] = cd [j];
}
for(int i = 0; i < sizeof(first_arg);++i){
printf("%c",first_arg[i]);
}
char* parmList[]={first_arg,arg_cd,NULL}; 
execv(parmList[0],parmList); 
exit(1); 
 } 
if(command==4){ 
char mv[] = "mv_project";
for(int i = sizeof(first_arg) - 11,  j = 0; i < sizeof(first_arg); ++i, ++j){
first_arg[i] = mv [j];
}
for(int i = 0; i < sizeof(first_arg);++i){
printf("%c",first_arg[i]);
}
char*const parmList[]={first_arg,arg_mv1,arg_mv2,NULL}; 
execv(parmList[0],parmList); 
exit(1); 
} 
if(command==5){ 
char grep[] = "grep";
for(int i = sizeof(first_arg) - 11,  j = 0; i < sizeof(first_arg); ++i, ++j){
first_arg[i] = grep [j];
}
for(int i = 0; i < sizeof(first_arg);++i){
printf("%c",first_arg[i]);
}
char*const parmList[]={first_arg,arg_grep1,arg_grep2,NULL}; 
execv(parmList[0],parmList); 
exit(1); 
} 
     } 
      
   } 
 }
