#include <stdio.h>   // standard input output lib
#include <stdlib.h>  // standard lib

#define MAX_SIZE 10000  // macro used as constant to define maximum size of data structure

// def a hashitem
typedef struct {
    int value;
    int index;
} HashItem;

// the hashtable we are going to use
typedef struct {
    HashItem items[MAX_SIZE];
    int size;
} HashTable;

// initialize the hastable at size 0 (no object stored)
void initHashTable(HashTable* ht) {
    ht->size = 0;
}

// compute hash value for given integer key
int hash(int key) {
    return abs(key) % MAX_SIZE;  // modulo to ensure it fits, no neg indices
}

// insert key in hashtable at hashed index given key
void insert(HashTable* ht, int key, int index) {
    int h = hash(key);
    ht->items[h].value = key;
    ht->items[h].index = index;
    ht->size++; // hashtable incremented by one
}

// function searching inside hashtable for a key
int find(HashTable* ht, int key) {
    int h = hash(key);
    return (ht->items[h].value == key) ? ht->items[h].index : -1;
}

// main function to fing two number summing to target
void twoSum(int* nums, int numsSize, int target) {
    HashTable ht;
    initHashTable(&ht);

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int complementIndex = find(&ht, complement);
        if (complementIndex != -1) {
            printf("Indices: %d and %d\n", complementIndex, i);
            return;
        }
        insert(&ht, nums[i], i);
    }

    printf("No two sum solution found.\n");
}

// entrypoint of program with an example
int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    twoSum(nums, numsSize, target);
    return 0;
}
