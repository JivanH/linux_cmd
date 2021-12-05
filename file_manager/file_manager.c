#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
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
if ( command==0)
  {
break;
 }
 
if(command==1){
char Arg1[100] ;
   scanf("%s",Arg1);
pid_t pid=fork();
if (pid==0)
{
char *parmList[]={"../bin/rm_project",Arg1,NULL};
execv("../bin/rm_project",parmList);
}
else if (pid==-1)
{
perror("fork error");
  }
}
if(command==2){
char arg1[100] ;
char arg2[100] ;
   scanf("%s",arg1);
     scanf("%s",arg2);
pid_t pid=fork();
if (pid==0)
{
char* parmList[]={"../bin/cp_project",arg1,arg2,NULL};
execv("../bin/cp_project",parmList);
 }
else if (pid==-1){
perror("fork error");
   }
 }
if(command==3){
char arg1[100] ;
   scanf("%s",arg1);
pid_t pid=fork();
if (pid==0){
char* parmList[]={"../bin/cd_project",arg1,NULL};
execv("../bin/cd_project",parmList);
 }
else if (pid==-1){
perror("fork error");
  }
}
if(command==4){
char Arg1[100] ;
   scanf("%s",Arg1);
char Arg2[100] ;
   scanf("%s",Arg2);
char*const parmList[]={"../bin/mv_project",Arg1,Arg2,NULL};
pid_t pid=fork();
if (pid==0){
execv("../bin/mv_project",parmList);}
else if (pid==-1){
perror("fork error");
  }
}
if(command==5){
char Arg1[100] ;
   scanf("%s",Arg1);
char Arg2[100] ;
   scanf("%s",Arg2);
pid_t pid=fork();
if (pid==0){
char* parmList[]={"../bin/grep2",Arg1,Arg2,NULL};
execv("../bin/grep2",parmList);
 }
else if (pid==-1){
perror("fork error");
     }
   }
 }
}

