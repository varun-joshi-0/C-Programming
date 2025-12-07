#include <stdio.h>
#include <stdlib.h>

struct HashNode {
    int val;
    int index;
    struct HashNode *next;
};

struct HashTable {
    int size;
    struct HashNode **table;
};

struct HashTable* createHashTable(int size) {
    struct HashTable *ht = (struct HashTable*)malloc(sizeof(struct HashTable));
    ht->size = size;
    ht->table = (struct HashNode**)calloc(size, sizeof(struct HashNode*));
    return ht;
}

int hash(int key, int size) {
    return abs(key) % size;
}

void insert(struct HashTable *ht, int val, int index) {
    int key = hash(val, ht->size);
    struct HashNode *newNode = (struct HashNode*)malloc(sizeof(struct HashNode));
    newNode->val = val;
    newNode->index = index;
    newNode->next = ht->table[key];
    ht->table[key] = newNode;
}

int search(struct HashTable *ht, int val) {
    int key = hash(val, ht->size);
    struct HashNode *current = ht->table[key];
    while (current != NULL) {
        if (current->val == val) {
            return current->index;
        }
        current = current->next;
    }
    return -1;
}

void freeHashTable(struct HashTable *ht) {
    for (int i = 0; i < ht->size; i++) {
        struct HashNode *current = ht->table[i];
        while (current != NULL) {
            struct HashNode *temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(ht->table);
    free(ht);
}

int main() {
    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    struct HashTable *ht = createHashTable(size * 2);

    int found = 0;
    for (int i = 0; i < size; i++) {
        int complement = target - nums[i];
        int complement_index = search(ht, complement);

        if (complement_index != -1 && complement_index != i) {
            printf("%d %d\n", complement_index, i);
            found = 1;
            break;
        }
        insert(ht, nums[i], i);
    }

    if (!found) {
        printf("-1 -1\n");
    }

    freeHashTable(ht);
    return 0;
}