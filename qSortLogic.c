
int swap( int arr[], int i, int j )
{
  int t = arr[i];
  arr[i] = arr[j];
  arr[j] = t;
}

int partition( int arr[], int low, int high )
{
  int left=low, right = high, pivot = 0;
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
      if( arr[left]>arr[right] )
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
}

