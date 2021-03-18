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
/* THIS IS JUST SORTING PART, YOU CAN DECIDE THE SORTING CRITERIA 
FOR DIFFERENT SORTING QUESTIONS. ALSO YOU CAN SAVE THIS AS HEADERS 
AND INCLUDE IN YOUR FILE BY CUSTOMISING IT ACCORDING TO THE NEED OF 
QUESTION YOU ARE ATTEMPTING*/

/*THIS FILE IS CREATED BY BRIJESH ROHIT (4birju7)*/
