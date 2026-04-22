// ============================================================================
// QUADRATIC SORTING ALGORITHMS - PRACTICE PROBLEMS
// ============================================================================

/*
 * PROBLEM 1: Bubble Sort with Statistics
 * ============================================================================
 * Write a function bubble_sort_stats(arr) that sorts an array using the 
 * Bubble Sort algorithm and returns sorting statistics.
 * 
 * Requirements:
 *   - Sort the array in ascending order
 *   - Count the total number of comparisons and swaps
 *   - Return both the sorted array and the count
 * 
 * Example Input:  [5, 1, 4, 2, 8]
 * Expected Output: ([1, 2, 4, 5, 8], 4)
 *   - Sorted array: [1, 2, 4, 5, 8]
 *   - Total operations: 4 swaps/comparisons
 */
#include <vector>
#include <iostream>
using namespace std;

void bubble_sort(vector<int>& arr, int &comparisons, int &swaps, int &total_opr){
    int n = arr.size();
    comparisons = 0;
    swaps = 0;

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            comparisons++;
            
            if(arr[j] > arr[j+1]){
                swaps++;
                swap(arr[j], arr[j+1]);
            }
        }
    }
    total_opr = comparisons + swaps;
}
int main() {
    vector<int> arr = {5, 1, 4, 2, 8};
    int comparisons = 0;
    int swaps = 0;
    int total_opr = 0;
    cout << "Array before sorting: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    bubble_sort(arr, comparisons, swaps, total_opr);

    cout << "Array after sorting:  ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    cout << "Total Comparisons: " << comparisons << endl;
    cout << "Total Swaps:       " << swaps << endl;
    cout << "Total Operations:  " << (comparisons + swaps) << endl;

    return 0;
}

/*
 * PROBLEM 2: Selection Sort (Maximum Variant)
 * ============================================================================
 * Write a function selection_sort_max(arr) that sorts an array using 
 * Selection Sort but in reverse direction.
 * 
 * Requirements:
 *   - In each iteration, find the MAXIMUM element in the unsorted portion
 *   - Swap it with the element at the END of the unsorted portion
 *   - Continue until the array is sorted in ascending order
 * 
 * Example Input:  [29, 10, 14, 37, 13]
 * Expected Output: [10, 13, 14, 29, 37]
 */

/*
 * PROBLEM 3: Insertion Sort with Trace
 * ============================================================================
 * Write a function insertion_sort_trace(arr) that sorts an array using 
 * Insertion Sort with detailed tracing.
 * 
 * Requirements:
 *   - Sort the array in ascending order
 *   - After each successful insertion (when an element moves to its 
 *     correct position in the sorted prefix), print the current array state
 *   - Print the initial state before any sorting begins
 * 
 * Example Input:  [12, 11, 13, 5, 6]
 * Expected Output:
 *   [12, 11, 13, 5, 6]
 *   [11, 12, 13, 5, 6]
 *   [11, 12, 13, 5, 6]
 *   [5, 11, 12, 13, 6]
 *   [5, 6, 11, 12, 13]
 */
