void oracle_sqrt(
  int Pre_a, int a, 
  int pathcrawler__retres__sqrt)
{
  int i = pathcrawler__retres__sqrt;
  int lim_inf; 
  int lim_sup; 
  lim_inf = i*i;
  lim_sup = (i+1)*(i+1);

  if (a >= 0)
  {

  if ((lim_inf <= a) && (lim_sup > a))
	{
	    pathcrawler_verdict_success();
	}
  else 
	{
	    pathcrawler_verdict_failure();
	} 
  }
  else if (i == 0)
	{
	    pathcrawler_verdict_success();
	}
  else 
	{
	    pathcrawler_verdict_failure();
	}

  return;
  
}
