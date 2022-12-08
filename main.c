#include <stdio.h>
#include "my_mat.h"
#ifndef N
#define N 10
#endif
int main(){
    char func;
    int arr[N][N];
    while (scanf("%c &func")!="D"){
        if (func=="A")
        {
            read_array(arr);
        }
        if (func=="B")
        {
            int is_path= shortest_path(arr);
            if (is_path==0){
                printf("False");
            }
            else{
                printf("True");
            }
        }
        if (func=="C")
        {
            int is_path= shortest_path(arr);
            if (is_path==0){
                printf("-1");
            }
            else{
                printf("%d",&is_path);
            }

        }


    }
    return 0;
}