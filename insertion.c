void insertion_sort( int A[], int n )
{
  int i, j, current;
  for ( i = 0 ; i < n ; i++ )
  {
    current = A[i];
    for ( j = i ; j > 0 && A[j-1] > current ; j-- )
    {
      A[j] = A[j-1];
    }
    A[j] = current;
  }
}
