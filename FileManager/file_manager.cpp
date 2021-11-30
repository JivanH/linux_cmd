#include <iostream>
#include <dirent.h>
#include <stddef.h>
#include <unistd.h>
#include <string>
using namespace std;
int main(){
	while(true){
		cout<<"0: for exit\n";
		cout<<"1. cd: directory\n";
		cout<<"2. cp: <source file> destination\n";
		cout<<"3. rm: <filepath>\n";
		cout<<"4. mv: dest 1, dest 2\n";
		cout<<"5. grep: <word> destination\n";
		
		int cmd;
		cin>>cmd;
		if(cmd == 0){
			false;		
			break;
		}
		switch (cmd){
		case 1: {
			string arg1_cd;
			cin>>arg1_cd;
			string prog_cd = "../bin/cd";
			pid_t pid = fork();
			if(pid == 0){
				char *arg_list_cd[] = {prog_cd.data(),arg1_cd.data(),NULL};
				execv(arg_list_cd[0], arg_list_cd);
			}
			break;
	       }case 2: {
			string arg1_cp;
			string arg2_cp;
			cin>>arg1_cp>>arg2_cp;
			string prog_cp = "../bin/cp";
			pid_t pid = fork();
			if(pid == 0){
				char* arg_list_cp[] = {prog_cp.data(),arg1_cp.data(),arg2_cp.data(),NULL};
				execv(arg_list_cp[0], arg_list_cp);
			}
			break;	
	       }case 3: {
			string prog_rm = "../bin/rm";
			string arg1_rm;
			cin>>arg1_rm;
			pid_t pid = fork();
			if(pid == 0){
				char* arg_list_rm[] = {prog_rm.data(),arg1_rm.data(),NULL};
				execv(arg_list_rm[0], arg_list_rm);
			}
			break;
	       }case 4: {
			string prog_mv = "../bin/mv";
			string arg1_mv;
			string arg2_mv;
			cin>>arg1_mv>>arg2_mv;
			pid_t pid = fork();
			if(pid == 0){
				char* arg_list_mv[] = {prog_mv.data(),arg1_mv.data(),arg2_mv.data(),NULL};
				execv(arg_list_mv[0], arg_list_mv);
			}
			break;
	       }case 5: {
			string prog_gr = "../bin/grep";
			string arg1_gr;
			string arg2_gr;
			cin>>arg1_gr>>arg2_gr;
			pid_t pid = fork();
			if(pid == 0){
				char* arg_list_gr[] = {prog_gr.data(),arg1_gr.data(),arg2_gr.data(),NULL};
				execv(arg_list_gr[0], arg_list_gr);
			}
			break;
		}
		default:
			cout<<("please, read the instructions\n");			
		}
	}
}
