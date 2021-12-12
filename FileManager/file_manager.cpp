#include <iostream>
#include <dirent.h>
#include <stddef.h>
#include <unistd.h>
#include <string>
#include <libgen.h>
#include <cstring>
#include <sys/wait.h>
using namespace std;
int main(int argc,char* argv[]){
	while(true){
		cout<<"0: for exit\n";
		cout<<"1. cd: directory\n";
		cout<<"2. cp: <source file> destination\n";
		cout<<"3. rm: <filepath>\n";
		cout<<"4. mv: dest 1, dest 2\n";
		cout<<"5. grep: <word> destination\n";
		
		char* file = (char*)malloc(100);
		char* path = (char *) malloc(100);
		strcpy(path,argv[0]);
		if(argv[0][0] == '.'){
			path++;
			getcwd(file,100);
		}
		strcat(file,dirname(path));
		int cmd;
		cin>>cmd;
		if(cmd == 0){
			false;		
			break;
		}
		switch (cmd){
		case 1: {
			char* arg1_cd = (char*)malloc(100);
			cin>>arg1_cd;
			strcat(file,"/cd\0");
			pid_t pid = fork();
			if(pid == 0){
				char *const arg_list_cd[] = {file,arg1_cd,NULL};
				execv(arg_list_cd[0], arg_list_cd);
				_exit(0);
			}
			else if(pid < 0)
			{
				cout<<"Fork Failed\n";
				_exit(0);
			}
			wait(NULL);
			break;
	       }case 2: {
			char* arg1_cp = (char*)malloc(100);
			char* arg2_cp = (char*)malloc(100);
			cin>>arg1_cp>>arg2_cp;
			strcat(file,"/cp\0");
			pid_t pid = fork();
			if(pid == 0){
				char* arg_list_cp[] = {file,arg1_cp,arg2_cp,NULL};
				execv(arg_list_cp[0], arg_list_cp);
				_exit(0);
			}
			else if(pid < 0)
			{
				cout<<"Fork Failed\n";
				_exit(0);
			}
			wait(NULL);
			break;	
	       }case 3: {
	       		char* arg1_rm = (char*)malloc(100);
			cin>>arg1_rm;
			strcat(file,"/rm\0");
			pid_t pid = fork();
			if(pid == 0){
				char* arg_list_rm[] = {file,arg1_rm,NULL};
				execv(arg_list_rm[0], arg_list_rm);
				_exit(0);
			}
			else if(pid < 0)
			{
				cout<<"Fork Failed\n";
				_exit(0);
			}
			wait(NULL);
			break;
	       }case 4: {
			char* arg1_mv = (char*)malloc(100);
			char* arg2_mv = (char*)malloc(100);
			cin>>arg1_mv>>arg2_mv;
			strcat(file,"/mv\0");
			pid_t pid = fork();
			if(pid == 0){
				char* arg_list_mv[] = {file,arg1_mv,arg2_mv,NULL};
				execv(arg_list_mv[0], arg_list_mv);
				_exit(0);
			}
			else if(pid < 0)
			{
				cout<<"Fork Failed\n";
				_exit(0);
			}
			wait(NULL);
			break;
	       }case 5: {
	       		char* arg1_gr = (char*)malloc(100);
			char* arg2_gr = (char*)malloc(100);
			cin>>arg1_gr>>arg2_gr;
			strcat(file,"/grep\0");
			pid_t pid = fork();
			if(pid == 0){
				char* arg_list_gr[] = {file,arg1_gr,arg2_gr,NULL};
				execv(arg_list_gr[0], arg_list_gr);
				_exit(0);
			}
			else if(pid < 0)
			{
				cout<<"Fork Failed\n";
				_exit(0);
			}
			wait(NULL);
			break;
		}
		default:
			cout<<("please, read the instructions\n");			
		}
	}
	return 0;
}
