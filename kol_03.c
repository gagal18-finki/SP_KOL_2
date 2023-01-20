//
// Created by Eagle IT Solutions on 19.1.23.
//

#include <stdio.h>
int sum_niza_index(int a[], int end, int ind){
    int j, sum = 0;
    if(ind > end){
        return 0;
    }else{
        for(j = ind; j < end;j++ ){
            sum+= a[j];
        }
        return sum;
    }

}
int main(){
    int arr[100], n, i, index;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &index);
    printf("%d",sum_niza_index(arr, n, index));
    return 0;
}