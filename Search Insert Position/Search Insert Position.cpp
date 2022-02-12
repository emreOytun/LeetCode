int searchInsert(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize-1;
    int mid;
    int index=0;
    while(left <= right){                   // Dizi sirali oldugundan binary search algoritmasi kullanilabilir.
        mid = (left+right) / 2;
        if(nums[mid] == target) return mid;
        else if(target < nums[mid]){
          index = mid;
          right = mid-1;  
        } 
        else{
            index = mid+1;
            left = mid+1;
        }
    }
    return index;
}
