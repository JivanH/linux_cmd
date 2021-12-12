#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char** argv){
    char buffer[1024]; 
    int sourceFile;
    int targetFile;
    size_t count;

    if (argc < 3){
      return 1;
    }
    sourceFile = open(argv[1], O_RDONLY);
    if (sourceFile == -1) {
      std::cout<<"source file isn't opened\n";
      return 1;
    }        
    targetFile = open(argv[2], O_WRONLY| O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IROTH); 
    if (targetFile == -1){
    	std::cout<<"target file isn't opened\n";
        close(sourceFile);
        return 1;
    }
    while ((count = read(sourceFile, buffer, sizeof(buffer))) != 0){
      write(targetFile, buffer, count); 
    }
    close(sourceFile);
    close(targetFile);
    return 0;
}
