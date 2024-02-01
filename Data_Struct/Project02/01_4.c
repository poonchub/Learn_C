#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// โครงสร้างข้อมูลแทนเส้นทาง
typedef struct {
    int *nodes;
    int size;
} Path;

// ฟังก์ชันเพิ่มเส้นทางใน Path
void addNode(Path *path, int node) {
    path->nodes[path->size++] = node;
}

// ฟังก์ชันลบเส้นทางใน Path
void removeNode(Path *path) {
    path->size--;
}

// ฟังก์ชันตรวจสอบว่ายังมีเส้นทางที่ไม่ผ่านทุกเส้นในกราฟหรือไม่
int hasUnvisitedEdges(int graph[MAX_VERTICES][MAX_VERTICES], int vertices) {
    int i, j;
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            if (graph[i][j] == 1) {
                return 1;
            }
        }
    }
    return 0;
}

// ฟังก์ชันหาวงจร Euler ในกราฟ
void findEulerPath(int graph[MAX_VERTICES][MAX_VERTICES], int vertices, int startNode) {
    Path path;
    path.nodes = (int *)malloc(vertices * sizeof(int));
    path.size = 0;

    addNode(&path, startNode);

    while (hasUnvisitedEdges(graph, vertices)) {
        int currentNode = path.nodes[path.size - 1];
        int nextNode;

        for (nextNode = 0; nextNode < vertices; nextNode++) {
            if (graph[currentNode][nextNode] == 1) {
                addNode(&path, nextNode);
                graph[currentNode][nextNode] = 0;
                graph[nextNode][currentNode] = 0;
                break;
            }
        }

        if (nextNode == vertices) {
            // ไม่พบเส้นทางที่เชื่อมต่อกับโหนดปัจจุบัน
            removeNode(&path);
        }
    }

    // แสดงผลลัพธ์
    printf("Euler Path: ");
    for (int i = 0; i < path.size; i++) {
        printf("%d ", path.nodes[i]);
    }

    free(path.nodes);
}

int main() {
    int vertices, edges, startNode;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    int graph[MAX_VERTICES][MAX_VERTICES];

    // กำหนดค่าเริ่มต้นให้กราฟ
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            graph[i][j] = 0;
        }
    }

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    // รับข้อมูลจากผู้ใช้เกี่ยวกับเส้นทางในกราฟ
    printf("Enter the edges (startNode endNode):\n");
    for (int i = 0; i < edges; i++) {
        int start, end;
        scanf("%d %d", &start, &end);
        graph[start][end] = 1;
        graph[end][start] = 1;
    }

    // รับโหนดเริ่มต้น
    printf("Enter the starting node: ");
    scanf("%d", &startNode);

    // หาวงจร Euler และแสดงผลลัพธ์
    findEulerPath(graph, vertices, startNode);

    return 0;
}
