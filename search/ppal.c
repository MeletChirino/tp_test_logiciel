#include <stdio.h>

/* Une implementation de la recherche dichotomique
   d'un element "elem" dans un tableau ordonne "A" */

int search( int A[8], int elem)
{
  int low, high, mid, ret ;
  
  low = 0 ;
  high = 7 ;
  ret = -1 ;
  while( high > low )                      /* ligne 11 */
    { mid = (low + high) / 2 ;
    
      if( elem == A[mid] )                 /* ligne 14 */ 
         ret = mid;
      if( elem > A[mid] )                  /* ligne 16 */ 
        low = mid + 1 ;
      else
        high = mid - 1;
    }  
  mid = (low + high) / 2 ;

  if( ( ret == -1)  && ( elem == A[mid]) )  /* ligne 23 */
    ret = mid; 
  
  return ret ;
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
