void oracle_search(
  int *Pre_A, int *A, 
  int Pre_elem, int elem, 
  int pathcrawler__retres__search)
{
 int i = pathcrawler__retres__search;
int cur ;
int index = -1 ;
 for( cur=0; cur<8; cur++ ) {
    if ( elem == A[cur] )
      index = cur;
    }
if(i == index){
pathcrawler_verdict_success();}
else{
pathcrawler_verdict_failure();}	

return;
}
