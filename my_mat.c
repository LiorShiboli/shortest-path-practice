#include "my_mat.h"
#ifndef N
#define N 10
#endif
//read into a given N*N array N*N numbers
void read_array(int A[N][N]){
    for (int i = 0; i <N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf(" %d",&A[i][j]);
        }

    }


}
int shortest_path(int A[N][N]){
    int copied_array[N][N],old_array[N][N],from,to;
    scanf(" %d",from);
    scanf(" %d",to);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            old_array[i][j]=old_array[i][j];
        }

    }

    for (int through_node = 0; through_node <= N; through_node++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if ((old_array[i][through_node]+old_array[through_node][j])<old_array[i][j])
                {
                    copied_array[i][j]=old_array[i][through_node]+old_array[through_node][j];
                }
                else{
                    copied_array[i][j]=old_array[i][j];
                }

                if (old_array[i][j]==0)
                {
                    copied_array[i][j]=(old_array[i][through_node]+old_array[through_node][j]);
                }
                if ((old_array[i][through_node]==0||old_array[through_node][j]==0))
                {
                    copied_array[i][j]=old_array[i][j];
                }


            }

        }
    int **temp=old_array;
    **old_array=copied_array;
    **copied_array=temp;
    }
    return copied_array[from][to];

}