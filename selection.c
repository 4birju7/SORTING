void selection_sort( int A[], int n )
{
  int i, j, iMin, temp;
  for ( i = 0 ; i < n ; i++ )
  {
    iMin = i;
    for( j = i+1 ; j < n ; j++ )
    {
      if( A[j] < A[iMin] )
      iMin = j;
    }
    temp = A[i];
    A[i] = A[iMin];
    A[iMin] = temp;
  }
}
