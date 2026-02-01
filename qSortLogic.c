
#include <stdio.h>

int swap( int arr[], int i, int j )
{
  int t = arr[i];
  arr[i] = arr[j];
  arr[j] = t;
}

void printArr( int arr[], int len )
{
    for( int i=0; i<len; i++ )
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition( int arr[], int low, int high )
{
  int left=low, right = high, pivot = low;
  while( left < right )
    {
      while( arr[left]<=arr[pivot] )
        {
          left ++ ;
        }
      
      while( arr[right]>arr[pivot] )
        {
          right -- ;
        }
      if( arr[left]<arr[right] )
      {
        swap( arr, left, right);
      }
    }

  swap( arr, pivot, right );
  return right;
}

void quickSort( int arr[], int low, int high )
{
  if(high>low)
  {
    int split = partition( arr, low, high );

    quickSort( arr, low, split-1 );
    quickSort( arr, split+1, high ); 
  }
  return;
  
}

int main()
{
    int arr[] = { 312,3,34,34,454,5654,76,77,87,867,8,6,6,35,34,33,13,35,57,68,898,96,5523,413 };
    int len = (sizeof(arr))/(sizeof(int)) ;
    printArr( arr, len );
    quickSort(arr, 0, len-1);
    printArr(arr, len);
}
