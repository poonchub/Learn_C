#include <stdio.h>
#include <stdlib.h>

// นิยามโหนด (Node) ของกราฟ
typedef struct Node {
    int data;             // ข้อมูลในโหนด
    struct Node* next;    // ตัวแปรเก็บ pointer ไปยังโหนดถัดไป
} Node;

// ฟังก์ชันสร้างโหนดใหม่
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// ฟังก์ชันเพิ่มเส้นเชื่อมระหว่างโหนด
void addEdge(Node** adjacencyList, int src, int dest) {
    // สร้างโหนดปลายทาง
    Node* destinationNode = createNode(dest);
    destinationNode->next = adjacencyList[src];
    adjacencyList[src] = destinationNode;

    // (ถ้ากราฟเป็นไม่ทิศทาง) สร้างโหนดต้นทาง
    Node* sourceNode = createNode(src);
    sourceNode->next = adjacencyList[dest];
    adjacencyList[dest] = sourceNode;
}

int main() {
    // จำนวนโหนดในกราฟ
    int numNodes;
    printf("Enter the number of nodes in the graph: ");
    scanf("%d", &numNodes);

    // สร้างแอดจาเซนซีลิสต์ (Adjacency List)
    Node** adjacencyList = (Node**)malloc(numNodes * sizeof(Node*));
    for (int i = 0; i < numNodes; i++) {
        adjacencyList[i] = NULL;  // กำหนดให้ทุกโหนดเป็น NULL เริ่มต้น
    }

    // เพิ่มเส้นเชื่อมในกราฟ
    int numEdges;
    printf("Enter the number of edges in the graph: ");
    scanf("%d", &numEdges);

    for (int i = 0; i < numEdges; i++) {
        int src, dest;
        printf("Enter edge %d (source destination): ", i + 1);
        scanf("%d %d", &src, &dest);
        addEdge(adjacencyList, src, dest);
    }

    // แสดงแอดจาเซนซีลิสต์ (Adjacency List) ของกราฟ
    printf("Adjacency List:\n");
    for (int i = 0; i < numNodes; i++) {
        printf("Node %d: ", i);
        Node* currentNode = adjacencyList[i];
        while (currentNode != NULL) {
            printf("%d ", currentNode->data);
            currentNode = currentNode->next;
        }
        printf("\n");
    }

    // คืนทรัพยากร
    // for (int i = 0; i < numNodes; i++) {
    //     Node* currentNode = adjacencyList[i];
    //     while (currentNode != NULL) {
    //         Node* temp = currentNode;
    //         currentNode = currentNode->next;
    //         free(temp);
    //     }
    // }
    // free(adjacencyList);

    return 0;
}
