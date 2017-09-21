/*WoodProgrammer*/
#include<stdlib.h>
#include<stdio.h>
#include<dirent.h>
#include<string.h>
#include <sys/stat.h>

char* concat(const char *s1,const char *s2);


int is_dir_or_reg(char *name);
void read_dir(char *name);
    
int main(int argc, char **argv){
    char *a = argv[1];
    char *tmp_dir_name;
    struct dirent *dir_pointer;
    DIR *dirp = opendir(argv[1]);

    while ((dir_pointer = readdir(dirp)) != NULL) {
        printf("%s \n", dir_pointer-> d_name );
        /**Directory pathleri merge ediliyor.*/
        /**Merging directory paths */

        tmp_dir_name = concat(a,dir_pointer->d_name);
        
    }
    
}

int is_dir_or_reg(char *name){
    
     struct stat s;

     if (0 == stat(name, &s)) {
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


 char* concat(const char *s1, const char *s2)
 {
     char * tmp;
     char *result = malloc(strlen(s1)+strlen(s2)+1);
     strcpy(result, s1);
     strcat(result, "/");
     strcat(result, s2);
     return result;
 }