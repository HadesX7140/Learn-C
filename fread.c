#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

 int main(void){
    FILE *file;
    file = fopen("f:\\cse.txt","r");
    if(file == NULL){
        printf("ERROR");
        return 1;
    }
    char c;
    int vowel=0,consonant=0,digit=0,space=0,special=0;
    while(c=fgetc(file)!=EOF){
        if(isalpha(c)){
            char lower = tolower(c);
            if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
                vowel++;
            }
            else consonant++;
        }
        else if(isdigit(c)){
            digit++;
        }
        else if(c==' '||c=='\n'||c=='\t'){
            space++;
        }
        else special++;
    }
    fclose(file);
    printf("%d\t%d\t%d\t%d\t%d",vowel,consonant,digit,space,special);
}