#include <iostream>

using namespace std;



/*
Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution,
and you may not use the same element twice.

You can return the answer in any order.


Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

 {(key, value), (key,value)}

 */


int* twoSums(int nums[], int target){
    int firstValue = 0;
    int secondValue = 0;

    int targetIndex[2];

    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                continue;
            }else if(nums[i] + nums[j] == target){
                firstValue = i;
                secondValue = j;
                targetIndex[0] = i;
                targetIndex[1] = j;
                return targetIndex;
            }
        }
    }

    cout << firstValue << endl;
    cout << secondValue << endl;

}

int main() {
//    int nums[] = {2,7,11,15};
//    twoSums(nums, 9);

//    int i = 0;
//    while (i < 5){
//        cout << i << endl;
//        i++;
//    }

    //outer loop

    /*
     *
     * Today we are practicing changing files and commiting them!!!
     *
     * Now we will try branches!!!!!!!!!!!!
     */


    for(int i = 0; i < 5; i++){

        cout << i << endl;

        //inner loop
        for (int j = 0; j < 5; j++){
            cout << "Inner loop: " << j << endl;
        }

    }


    return 0;
}

