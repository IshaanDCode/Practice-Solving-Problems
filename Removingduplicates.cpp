#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    int j = 1;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] != nums[i - 1]){
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main() {
    std::vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4}; // Example input
    int newLength = removeDuplicates(nums);

    std::cout << "New length: " << newLength << std::endl;
    std::cout << "Array after removing duplicates: ";
    for(int i = 0; i < newLength; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
