
#include<stdio.h>
int main() {
    float provvigione;
    float biglietto;
    float prezzofinale;
    printf("Qual'e' il prezzo del biglietto?(min_33.3€) ");
    scanf("%f",&biglietto);
    provvigione= biglietto*15/100;
    provvigione<5) {
        if(provvigione=5);}
    provvigione+=biglietto;
    prezzofinale= biglietto+provvigione;
    printf("%.2f€ provvigione\n%.2f€ prezzo finale del biglietto",provvigione, prezzofinale);
return 0;
}
