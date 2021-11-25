#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char* argv[]){
    if(argc != 3)
	cout<<"You must enter 1) word. 2)file."<<endl;
    FILE* fp;
    fp = fopen(argv[2], "r");
    if (! fp) {
    	cout<<"source file isn't opened\n";
    	return 1;
    }
    int BUF_LEN = 511;
    char buffer[BUF_LEN +1]; 
    int count = 0;
    while(fgets( buffer, BUF_LEN, fp)) {
        if(strstr(buffer,argv[1]))
        {
            cout<<buffer;
            ++count;
        }
    }
    fclose(fp);
    cout<<"found "<< count <<" occurrences"<<endl;
return 0;
}

