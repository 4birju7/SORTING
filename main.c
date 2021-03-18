#include <stdio.h>
#include "selection.c"
#include "insertion.c"
#include "bubble.c"
#include "merge.c"
#include "quick.c"

int main()
{
  int i = 0;
  //for A
  int A[]={7, 4, 6, 5, 9, 7, 0, 4, 5, 7, 3, 7, 2, 5, 2, 1, 8};
  int n = sizeof(A)/sizeof(int);
  selection_sort( A, n );
  printf("\nUnder Selection Sort :\n");
  for ( i = 0 ; i < n ; i++ )
  printf("  %d ", A[i]);

  //for B
  int B[]={7, 4, 6, 5, 9, 7, 0, 4, 5, 7, 3, 7, 2, 5, 2, 1, 8};
  bubble_sort( B, n );
  printf("\nUnder Bubble Sort :\n");
  for ( i = 0 ; i < n ; i++ )
  printf("  %d ", B[i]);

  //for C
  int C[]={7, 4, 6, 5, 9, 7, 0, 4, 5, 7, 3, 7, 2, 5, 2, 1, 8};
  insertion_sort( C, n );
  printf("\nUnder Insertion Sort :\n");
  for ( i = 0 ; i < n ; i++ )
  printf("  %d ", C[i]);
  //for D
  int D[]={7, 4, 6, 5, 9, 7, 0, 4, 5, 7, 3, 7, 2, 5, 2, 1, 8};
  merge_sort( D, n );
  printf("\nUnder Merge Sort :\n");
  for ( i = 0 ; i < n ; i++ )
  printf("  %d ", D[i]);
  //for E
  int E[]={7, 4, 6, 5, 9, 7, 0, 4, 5, 7, 3, 7, 2, 5, 2, 1, 8};
  quick_sort( E, 0, n-1 );
  printf("\nUnder Quick Sort :\n");
  for ( i = 0 ; i < n ; i++ )
  printf("  %d ", E[i]);

  printf("\nWell there is a chnge just to see changes made in the file through git");
  return 0;
}
/* THIS IS MAIN FILE WITH UNSORTED ARRAY, AND AS CODED ABOVE, 
THIS IS HOW YOU CAN INCLUDE C FILES AND RUN DIRECTLY AND MODIFY 
SORTING CRITERIA ACCORDING TO THE NEED OF QUESTION.*/

/*THIS FILE IS CREATED BY BRIJESH ROHIT (4birju7)*/
