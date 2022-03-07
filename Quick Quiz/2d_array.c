#include<stdio.h>
int main(){
int x=3;
int y=4;
int a[x][y];
for(int i=0; i<x; i++){
    for(int j=0; j<y; j++){

        printf("Enter the row %d and column %d:\n", i,j);
        scanf("%d",&a[i][j]);

    }

}

for(int i=0; i<x; i++){
    for(int j=0; j<y; j++){

        printf("%d\n", a[i][j]);
    
    }
}
return 0;
}