#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    // Vasiot kod zapocnuva od tuka
    char c,c1;
    int count = 0;
    FILE *input = fopen("./text/text_1.txt", "r");
    c1 = fgetc(input);
    printf("%c - 1\n", c1);
    while((c = fgetc(input)) != EOF){
        printf("%c\n", c);
        if(tolower(c1) == tolower(c)){
            printf("ISTA %c\n", c1);
            count++;
        }
    }
    fclose(input);
    FILE *output = fopen("./text/text1.txt", "w");
    fprintf(output,"%d pati se pojavi %c ili %c", count, toupper(c1), tolower(c1));

    return 0;
}
