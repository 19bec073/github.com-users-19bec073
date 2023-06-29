#include<stdio.h>
int main(){
int m1,n1,m2,n2;
printf("enter the first matrix row and column");
scanf("%d%d",&m1,&n1);
printf("enter the second matrix row and column");
scanf("%d%d",&m2,&n2);
int a[m1][n1],b[m2][n2];
if(n1==m2){
   int c[m1][n2];	
printf("enter first elements:\n");	//for array a
for(int i=0;i<m1;i++){
for(int j=0;j<n1;j++){
scanf("%d",&a[i][j]);
}
}printf("enter second array elements\n");                        //for array b
for(int i=0;i<m2;i++){
for(int j=0;j<n2;j++){
scanf("%d",&b[i][j]);
}
}printf("array 1\n");
for(int i=0;i<m1;i++){
for(int j=0;j<n1;j++){
printf("%d",a[i][j]);
}
printf("\n");
}printf("array 2\n");
for(int i=0;i<m2;i++){
for(int j=0;j<n2;j++){
printf("%d",b[i][j]);
}
printf("\n");
}
/******************************************************************************/
int z,x,sum=0;
//for(z=0;z<m1;z++){
//for(x=0;x<n2;x++){
      for(int i=0;i<n2;i++){
      for(int j=0;j<m1;j++){
	      for(int k=0;k<n1;k++){
             c[i][j]+=(a[i][k]*b[k][j]);
	      }
      }
      }
//
//}
//}
printf("array result\n");
for(int i=0;i<m1;i++){
for(int j=0;j<n2;j++){
printf("%d\t",c[i][j]);
}

printf("\n");
}}
else
printf("MULTIPLICATION CANT\'T BE");
	
	return 0;
}
