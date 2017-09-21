#include<stdio.h>
#include<stdlib.h>
#include <sys/stat.h>
int main(){
	struct stat s;
	stat("55687.png",&s);
	printf("Last accessed %d", ctime(&s.st_atime));
	
}



