#include <stdio.h>

/* Une implementation de la recherche dichotomique
   d'un element "elem" dans un tableau ordonne "A" */

int search( int A[8], int elem)
{
  int cur ;
  
  for( cur=0; cur<8; cur++ ) {
    if ( elem == A[cur] ) {
      return(cur);
    } else {
      if ( elem < A[cur] ) {
	return(-1);
      }
    }
  }
  return(-1) ;
}

int main(void)
{

int tab[8]={2,3,5,6,7,8,9,10};
int elem=7;
int retour;

retour = search(tab, elem);

if (retour==4)
	printf("element %d trouve \n",elem);
else
	printf("element %d non trouve \n",elem);

return 0;

}
