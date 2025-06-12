#include<stdio.h>
int main(){
int r,c;
scanf("%d%d",&r,&c);
int arr[r][c];
int arr1[c][r];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("before transpose\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
printf("after transpose\n");
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        arr1[j][i]=arr[i][j];
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d",arr1[i][j]);
    }
    printf("\n");
}
return 0;
}
