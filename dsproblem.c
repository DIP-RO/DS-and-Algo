// Name: Dipro Paul
// ID: 221-15-5666
#include <stdio.h>

void findElement(int count, char elements[], int pos) {
    void getParent(int idx) {
        if (idx == 0) {
            printf("NP\n");
            return;
        }
        int parentIdx = (idx - 1) / 2;
        char parentVal = elements[parentIdx];
        if (parentVal % 2 == 0) {
            printf("%c\n", parentVal);
        } else {
            printf("%d\n", parentVal);
        }
    }

    void getLeft(int idx) {
        int leftChildIdx = 2 * idx + 1;
        if (leftChildIdx >= count) {
            printf("NLC\n"); 
            return;
        }
        char leftChildVal = elements[leftChildIdx];
        if (leftChildVal % 2 == 0) {
            printf("%d\n", leftChildVal);
        } else {
            printf("%c\n", leftChildVal);
        }
    }

    getParent(pos);
    getLeft(pos);
}

int main() {
    int nodeCount;
    scanf("%d", &nodeCount);

    char nodeElements[nodeCount];
    for (int i = 0; i < nodeCount; ++i) {
        scanf(" %c", &nodeElements[i]);
    }
    int position;
    scanf("%d", &position);

    findElement(nodeCount, nodeElements, position);

    return 0;
}

