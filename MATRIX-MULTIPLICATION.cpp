//matrtix multiplaction using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

int main(){
    register int* matrixsize;
    matrixsize = (int*)calloc(4,sizeof(int));
    printf("Enter your 1st matrix row and column: ");
    scanf("%d%d",&matrixsize[0],&matrixsize[1]);

    printf("Enter the 2nd matrix row and column: ");
    scanf("%d%d",&matrixsize[2],&matrixsize[3]);
    
    if(matrixsize[1] == matrixsize[2]){
        register int** matrix1,**matrix2;
        matrix1 = (int**)calloc(matrixsize[0],sizeof(int*));
        for(int i = 0; i<matrixsize[0];i++){
            matrix1[i] = (int*)calloc(matrixsize[1],sizeof(int));
        }

        matrix2 = (int**)calloc(matrixsize[2],sizeof(int*));
        for(int i = 0; i<matrixsize[2];i++){
            matrix2[i] = (int*)calloc(matrixsize[3],sizeof(int));
        }

        printf("Enter your entries of matrix1\n");
        for(int i = 0 ;i<matrixsize[0];i++){
            for(int j = 0; j<matrixsize[1];j++){
                printf("\nA%d%d ",i+1,j+1);
                scanf("%d",&matrix1[i][j]);
            }
        }

        printf("\nEnter the entries of matrix2\n");
        for(int i = 0 ;i<matrixsize[2];i++){
            for(int j = 0; j<matrixsize[3];j++){
                printf("\nA%d%d ",i+1,j+1);
                scanf("%d",&matrix2[i][j]);
            }
        }

        printf("\n");
        int** resultantmatrix;
        resultantmatrix = (int**)calloc(matrixsize[0],sizeof(int*));
        for(int i =0; i<matrixsize[1];i++){
            resultantmatrix[i] = (int*)calloc(matrixsize[3],sizeof(int));
        }

        for(int i =0,sum =0;i<matrixsize[0];i++){
            for(int j =0;j<matrixsize[3];j++){
                for(int k =0;k<matrixsize[1];k++){
                    sum += matrix1[i][k]*matrix2[k][j];
                }
                resultantmatrix[i][j] = sum;
                sum =0;
            }
            free(matrix1[i]);
            matrix1[i] = NULL;
        }
        free(matrix1);
        matrix1 =NULL;

        for(int i =0;i<matrixsize[2];i++){
            free(matrix2[i]);
            matrix2[i] = NULL;
        }
        free(matrix2);
        matrix2 =NULL;

        printf("Your resultant matrix is: \n");
        for(int i =0;i<matrixsize[0];i++){
            for(int j =0;j<matrixsize[3];j++){
                printf("%d\t",resultantmatrix[i][j]);
            }
            printf("\n");
        }

        for(int i =0; i<matrixsize[0];i++){
            free(resultantmatrix[i]);
            resultantmatrix[i] = NULL;
        }
        free(resultantmatrix);
        resultantmatrix = NULL;

        free(matrixsize);
        matrixsize = NULL;
    }
    
    else{
        printf("hii");
        return 0;
    }

    return 0;
}
