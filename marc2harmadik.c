#include <stdio.h>

void tomb_kiir(int meret, int tomb[]){
    for(int i=0; i<meret; i++){
        printf("%d ",tomb[i]);
    }
    puts("");
}



int main(){

int szamok[10]={85,72,45,29,8,35,76,3,88,94};
int meret = 10;
tomb_kiir(meret,szamok);
/*for(int i=0; i<10; i++){
    printf("%d ",szamok[i]);
}
puts("");
*/
return 0;

}