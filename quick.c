void swap ( int *a, int *b )
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition ( int A[], int start, int end )
{
	int pivot = A[end], i, temp, pIndex = start;
	for ( i = start ; i < end ; i++ )
	{
		if ( A[i] <= pivot )
		{
			swap( &A[i], &A[pIndex]);
			pIndex++;
		}
	}
	swap( &A[end], &A[pIndex] );
	return pIndex;
}
void quick_sort( int A[],int start, int end )
{
	if( start < end )
	{
		int pIndex = 0;
		pIndex = partition ( A, start, end );
		quick_sort( A, start, pIndex-1 );
		quick_sort( A, pIndex+1 , end );
	}
}
/* THIS IS JUST SORTING PART, YOU CAN DECIDE THE SORTING CRITERIA 
FOR DIFFERENT SORTING QUESTIONS. ALSO YOU CAN SAVE THIS AS HEADERS 
AND INCLUDE IN YOUR FILE BY CUSTOMISING IT ACCORDING TO THE NEED OF 
QUESTION YOU ARE ATTEMPTING*/

/*THIS FILE IS CREATED BY BRIJESH ROHIT (4birju7)*/
