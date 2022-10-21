// USE THE MAXHEAP TO COMPLETE THIS CODE.
#include <iostream>
#include <vector>
using namespace std;

struct Heap
{
    int array_size;
    int array[array_size];
    int last_index;
};

// Function to sort an array using the MAXHEAP Data Structure
vector<int> HeapSort(vector<int> &arr)
{
    int n = arr.size();      // Size of unsorted array
    Heap tmp_heap;           // Defining Heap
    tmp_heap.array_size = n; // Defining Heap Size
    vector<int> result;      // Difining an array

    int j = 0;    // Iterative Variables
    while (j < n) // Loop for creating the MaxHeap for the Unsorted Array
    {
        // HeapInsert(tmp_heap, arr[j])  //Refer to the Max_Heap.cpp
        j++; // Increament
    }

    j = 0;
    while (j < n) // Loop for getting the max element from the heap
    {
        // result.push_back(HeapRemoveMax(temp_heap)) //Refer to Max_Heap.cpp
        j++;
    }

    return result;
}