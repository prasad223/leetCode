#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

int testCases = 0;
scanf("%d",&testCases);
char A[10];
char B[10];
int i=0,j=0;
int ti=-1,tj=-1,tk=-1;
while(testCases--){
 i = 0; j = 0;
 int tii=0;
 scanf("%s",A);
 scanf("%s",B);
 
 while(A[i] != '\0' && B[j] != '\0'){
 if(A[i] == B[j]){
   //if( i == j && i < tk){
   int tempi = i+1, tempj= j+1;
   while(A[tempi] == B[tempj]){
     tempi++;
     tempj++;
   }
   ti = tempi;
   tj = tempj;
   tk = tempi-i;
   if(A[tempi] < B[tempj]){
     printf("%c",A[tempi]);
     i++;
   }
   else{
     printf("%c",B[tempj]);
     j++;
   }
 }else if(A[i] < B[j]){
    printf("%c",A[i++]); }
  else
    printf("%c",B[j++]);
 }
 if(A[i] == '\0'){
   int k=j;
   for(;B[k] != '\0';k++)
    printf("%c",B[k]);
    printf("\n");
 }
 if(B[j] =='\0'){
  int k = i;
  for(;A[k] != '\0';k++)
   printf("%c",A[k]);
  printf("\n");
 }

}
return 0;
}
