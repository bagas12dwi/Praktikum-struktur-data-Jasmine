/*Nama	: Jasmine Sarah Maqnolia*/
/*NIM	: 20051397078*/
/*Kelas	: 2020B*/
/*Prodi	: Manajemen Informatika*/

#include <stdio.h>
#include <stdlib.h>

void urutan();
int main()
{
 int n, x=0;

 printf("Input n : ");scanf("%d", &n);
 urutan();
 return 0;
}

void urutan(int x,int n){
 printf("%d\n", x);
 if(x==n)
 return;
 urutan(x+1,n);
}
