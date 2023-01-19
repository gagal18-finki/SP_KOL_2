#include <stdio.h>
#include <ctype.h>
#include <string.h>
int najznacajnacifra(int n){
    if(n < 10){
        return n;
    }
    return najznacajnacifra(n/10);
}
int main() {
    // Vasiot kod zapocnuva od tuka
    FILE *input = fopen("./text/broevi.txt", "r");
    int broiDo, i, check, najznacajna_red = 0, najznacaen = 0;
    while(fscanf(input,"%d", &broiDo) != EOF){
        if(broiDo != 0){
            najznacajna_red = 0;
            najznacaen = 0;
            for(i = 0; i < broiDo; i++){
                fscanf(input,"%d", &check);
                if(najznacajnacifra(check) > najznacajna_red){
                    najznacajna_red = najznacajnacifra(check);
                    najznacaen = check;
                }
            }
            printf("%d\n", najznacaen);
        }
    }
    fclose(input);

    return 0;
}
