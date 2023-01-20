#include <stdio.h>
#include <ctype.h>
#include <string.h>

int samoglaska(char c){
    int check = toupper(c);
    if(check == 'A' || check == 'E' || check == 'I' || check == 'O' || check == 'U'){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    // Vasiot kod zapocnuva od tuka
    char c, c_prva;
    int count = 0;
    FILE *input = fopen("./text/text_1.txt", "r");
    c_prva = fgetc(input);
    while((c = fgetc(input)) != EOF){
        if(samoglaska(c_prva) && samoglaska(c)){
            printf("%c%c\n", tolower(c_prva), tolower(c));
            count++;
        }
        c_prva = c;
    }
    fclose(input);
    printf("%d", count);

    return 0;
}
