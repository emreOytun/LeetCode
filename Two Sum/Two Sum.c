#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *indices = (int*)malloc(sizeof(int) * 2);
    int i,j,fark;
    for(i=0; i<numsSize-1; i++){			// For each element, go checking with the next one, because we've already checked previos ones.
        	fark = target - nums[i];		
        	for(j=i+1; j<numsSize; j++){
            	if(nums[j] == fark){
                	indices[0] = i;
                	indices[1] = j;
                    *returnSize = 2;
                	return indices;
                }
        	}        	
    }
    return indices;
}

int main(){
	int arr[] = {1,2,3,4};
	int target = 7;
	int arrSize = 0;
	int *arrRes = twoSum(arr,4,target,&arrSize);
	printf("%d %d",arrRes[0],arrRes[1]);
	free(arr);
	return 0;
}

