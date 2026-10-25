#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main() {
    struct stat  file_stat;
    char filename[100];
    scanf("%99s",filename);
    if(stat(filename,&file_stat)==0){
        char *time_str=ctime(&file_stat.st_mtime);
        printf("%s",time_str);
    }
    else printf("dne");
    return 0;
}