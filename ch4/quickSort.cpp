int Partition(int arr[], int left, int right) {
    int temp = arr[left];
    while(left < right) {
        while(left<right&&arr[right]>temp)right--;
        arr[left]=arr[right];
        while(left < right && arr[left]<=temp)left++;
        arr[right]=arr[left];
    }
    arr[left]=temp;
    return left;
}

void quickSort(int arr[], int left, int right) {
    if(left < right) {
        int pos = Partition(arr, left, right);
        quickSort(arr, left, pos-1);
        quickSort(arr, pos+1,right);
    }
}
