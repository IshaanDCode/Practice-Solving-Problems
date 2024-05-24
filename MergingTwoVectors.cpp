#include <vector>
#include <iostream>

// Function to merge two sorted lists
std::vector<int> Merge(const std::vector<int>& L1, const std::vector<int>& L2) {
    std::vector<int> FinalList;
    int i = 0, j = 0;

    // Merge elements from both lists in sorted order
    while (i < L1.size() && j < L2.size()) {
        if (L1[i] < L2[j]) {
            FinalList.push_back(L1[i]);
            ++i;
        } else {
            FinalList.push_back(L2[j]);
            ++j;
        }
    }

    // Add remaining elements from L1 if any
    while (i < L1.size()) {
        FinalList.push_back(L1[i]);
        ++i;
    }

    // Add remaining elements from L2 if any
    while (j < L2.size()) {
        FinalList.push_back(L2[j]);
        ++j;
    }

    return FinalList;
}

// Example usage
int main() {
    std::vector<int> L1 = {1, 3, 5, 7};
    std::vector<int> L2 = {2, 4, 6, 8};

    std::vector<int> FinalList = Merge(L1, L2);

    // Print the merged list
    for (int num : FinalList) {
        std::cout << num << " ";
    }

    return 0;
}
