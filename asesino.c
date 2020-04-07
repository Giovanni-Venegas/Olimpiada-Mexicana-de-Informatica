
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void scorpio (void);
int main (void){
   scorpio();
   return 0;
}
void scorpio (void){
int x, y;
system ("clear");
do{
	printf("Escoje el largo de tu habitacion (1-100): ");
	scanf("%d",&x);
	if (x<1||x>100){
		printf("Valor incorrecto ingresa un valor entre 1 y 100\n");}
}
while(x<1||x>100);
do{
	printf("Escoje el ancho de tu habitacion (1-100): ");
	scanf("%d",&y);
	if (y<1||y>100){
		printf("Valor incorrecto ingresa un valor entre 1 y 100\n");}
}
while(y<1||y>100);
int cuarto[100][100];
int nscorpio, maxscorpio, i, j, k, posx, posy;
maxscorpio=(x*y)/2;
do{
	printf("Ingresa el numero de escorpiones que deseas en el cuarto (1-%d): ", maxscorpio);
	scanf("%d",&nscorpio);
	if (nscorpio>maxscorpio+1 || nscorpio<1){
		printf("Valor incorrecto ingresa un valor entre 1 y %d\n", maxscorpio);}
} 
while(nscorpio>maxscorpio+1 || nscorpio<1);

for(i=1;i<=nscorpio;i++){
	printf("Ingresa la posicion en x del escorpion %d: ", i);
	scanf("%d",&posx);
	printf("Ingresa la posicion en y del escorpion %d: ", i);
	scanf("%d",&posy);
	cuarto[posy-1][posx-1]=1;
}
int mp=0;

for(i=0;i<(x-1);i++){
	for(j=0;j<(y-1);j++){
		if(cuarto[i][j]==0 && cuarto[i+1][j]==0 && cuarto[i][j+1]==0 && cuarto[i+1][j+1]==0){
			mp++;
		}
	}
}
printf("Existen %d maneras posibles de dormir en el cuarto\n", mp);
}
