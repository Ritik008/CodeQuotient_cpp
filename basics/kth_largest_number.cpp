int kthLargest(int arr[], int size, int k)
{
  int c,d,swap;
  for(c=0;c<size-1;c++) {
    for(d=0;d<size-c-1;d++) {
      if(arr[d]<arr[d+1]) {
        swap = arr[d];
        arr[d] = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
  return arr[k];
}
