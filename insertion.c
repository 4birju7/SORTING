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
/* THIS IS JUST SORTING PART, YOU CAN DECIDE THE SORTING CRITERIA 
FOR DIFFERENT SORTING QUESTIONS. ALSO YOU CAN SAVE THIS AS HEADERS 
AND INCLUDE IN YOUR FILE BY CUSTOMISING IT ACCORDING TO THE NEED OF 
QUESTION YOU ARE ATTEMPTING*/

/*THIS FILE IS CREATED BY BRIJESH ROHIT (4birju7)*/
