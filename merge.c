#include <stdio.h>
void merge( int L[], int nl, int R[], int nr, int A[])
{
  int i = 0, j = 0 , k = 0;
  while ( i < nl && j < nr )
  {
    if ( L[i] <= R[j] )
    {
      A[k] = L[i];
      k++;
      i++;
    }
    else
    {
      A[k] = R[j];
      k++;
      j++;
    }
  }
  while ( i < nl )
  {
    A[k] = L[i];
    k++;
    i++;
  }
  while ( j < nr )
  {
    A[k] = R[j];
    k++;
    j++;
  }
}
void merge_sort ( int A[], int n )
{
  if ( n < 2 ) return ;
  int mid = n/2 , i;
  int L[mid], R[n-mid];
  for ( i = 0 ; i < mid ; i++ )
  L[i] = A[i];
  for ( i = mid ; i < n ; i++ )
  R[i-mid] = A[i];
  merge_sort ( L, mid );
  merge_sort ( R, n-mid );
  merge ( L, mid, R, n-mid, A );
  printf("\nThis is to observe the changes made in a file in a branch in git and observe that if there is any change or not\n");
}
