/*Nama	: Jasmine Sarah Maqnolia*/
/*NIM	: 20051397078*/
/*Kelas	: 2020B*/
/*Prodi	: Manajemen Informatika*/

#include <stdio.h>
#include <stdlib.h>
void urutan();
int main()
{
 int n;
 printf("Input n : ");scanf("%d", &n);
 urutan();
 return 0;
}
void urutan(int i){
 printf("%d\n", i);
 if(i==0)
 return;
 urutan(i-1);
}
