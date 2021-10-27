//
//  main.c
//  Perfect_Sqrt
//
//  Created by Diakite on 27/10/2021.
//

#include <stdio.h>
#include <math.h>
// Perrfect square root funcion
int Perfect_sqrt(int a){
    if(a==1 || a==0)
        return 0;
    return (((a-sqrt(a))==a*(a+1)) || ((a-sqrt(a))==a*(a-1)));
}

int main(int argc, const char * argv[]) {
    
    int a,i,j=1;
    do{
    printf("Donnez a= ");
    scanf("%d",&a);
      if (a>=0) {
          i=Perfect_sqrt(a);
          if (i==0)
              printf(" %d est un carre parfait\n",a);
          else
              printf(" %d n'est pas un carre parfait\n",a);
      }
      else
          printf("Warning : Le programme n'accepte que les entiers positif !!!\n ");
      //Continuer notre programme
      printf("Pour continer appuyez sur la touche 1 \n");
      scanf("%d",&j);
    }while(j==1);
    return 0;
}
