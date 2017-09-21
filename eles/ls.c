#include<stdlib.h>
#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include <sys/stat.h>

#include "read_dir.h"
int is_dir_or_reg(char *name);
void read_dir(char *name);
    
int main(int argc, char **argv){
    char *a = argv[1];
    char *tmp;
    struct dirent *dir_pointer;
    DIR *dirp = opendir(argv[1]);

    while ((dir_pointer = readdir(dirp)) != NULL) {
        printf("%s \n", dir_pointer-> d_name );
        sprintf(newpath,"%s/%s", path, dp->d_name); 
        
    }

    
}

int is_dir_or_reg(char *name){
    
     struct stat s;

     if (0 == stat("./test_dir/1", &s)) {
         if (S_ISDIR( s.st_mode)){
             return 1;
         };
         if (S_ISREG( s.st_mode)){
 
          return 0 ;
         }
      } 
      else {
         perror("File system meta data error. ");
      }
 }



 