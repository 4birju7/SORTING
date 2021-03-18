void bubble_sort( int A[], int n )
{
  int i, temp, j, change;
  for ( j = 0 ; j < n-1 ; j++ )
  {
    change = 0;
    for ( i = 0 ; i < n-1-j ; i++ )
    {
      if ( A[i] > A[i+1] )
      {
        change = 1;
        temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
      }
    }
    if ( change == 0)
    break;
  }
}


/*THIS FILE IS CREATED BY BRIJESH ROHIT (4birju7)*/
