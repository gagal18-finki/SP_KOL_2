//
// Created by Eagle IT Solutions on 21.1.23.
//
#include <stdio.h>

int main(){
    int m,n,arr[100][100],i,j,s1,s2,s3,s4, zemiI, zemiJ;
    s1 = s2 = s3 = s4 = 0;
    scanf("%d %d", &m, &n);
    for(i = 0; i < m;i++){
        for(j = 0;j < n;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d %d", &zemiI, &zemiJ);
    for(i = 0; i < m;i++){
        for(j = 0;j < n;j++){
            if((zemiI > i) && (zemiJ <= j)) s1+= arr[i][j];
            if((zemiI > i) && (zemiJ > j)) s2+= arr[i][j];
            if((zemiI <= i) && (zemiJ > j)) s3+= arr[i][j];
            if((zemiI <= i) && (zemiJ <= j)) s4+= arr[i][j];
        }
    }
    printf("%d %d %d %d", s1, s2, s3, s4);
    return 0;
}