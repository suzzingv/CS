#include <stdio.h>
int LSearch(int arr[], int len, int target) {
    for(int i = 0; i < len; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 5, 2, 4, 9};

    int idx;

    idx = LSearch(arr, sizeof(arr)/sizeof(int), 4);
    if(idx == -1) {
        printf("Ž�� ���� \n");
    }
    else
        printf("Ÿ�� ���� �ε���: %d \n", idx);
    
    idx = LSearch(arr, sizeof(arr)/sizeof(int), 7);
    if(idx == -1) {
        printf("Ž�� ���� \n");
    }
    else 
        printf("Ÿ�� ���� �ε���: %d \n", idx);
    return 0;
}