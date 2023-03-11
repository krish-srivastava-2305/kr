#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Please Enter Values for your Matrix : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
    }
    }
    printf("Your 3X3 Matrix is : \n");
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
            if(j==2){
                printf("\n");
            }
    }
    }
    return 0;
}