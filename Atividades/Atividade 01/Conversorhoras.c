#include <stdio.h>
#include <stdlib.h>


int main () 
{

int segundos;

printf("Digite o tempo em segundos:/n");
scanf("%d", &segundos);

printf("Tempo em horas: %d", segundos/3600);
printf("Tempo em minutos: %d", segundos/60);

system "pause";

return 0;
}