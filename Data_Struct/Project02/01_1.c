#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// กำหนดขนาดของกราฟ
#define MAX_VERTICES 100

// สร้าง adjacency matrix เพื่อเก็บข้อมูลการเชื่อมต่อ
int graph1[MAX_VERTICES][MAX_VERTICES];
int graph2[MAX_VERTICES][MAX_VERTICES];

// กำหนดจำนวน vertices
int numVertices;

// สร้างโครงสร้างข้อมูล
typedef struct{
    int *nodes;
    int size;
} Path;

// ฟังก์ชันเพิ่มเส้นทางใน Path
void addNode(Path *path, int node){
    path->nodes[path->size++] = node;
}

// ฟังก์ชันลบเส้นทางใน Path
void removeNode(Path *path){
    path->size--;
}

// ฟังก์ชันตรวจสอบว่ายังมีเส้นทางที่ไม่ผ่านทุกเส้นในกราฟหรือไม่
int hasUnvisitedEdges(int graph1[MAX_VERTICES][MAX_VERTICES], int vertices){
    int i, j;
    for (i = 0; i < vertices; i++){
        for (j = 0; j < vertices; j++){
            if (graph1[i][j] == 1){
                return 1;
            }
        }
    }
    return 0;
}

// ฟังก์ชันหาวงจร Euler ในกราฟ
void findEuler(int numVertices, int startNode){
    Path path;
    path.nodes = (int *)malloc(numVertices * sizeof(int));
    path.size = 0;

    addNode(&path, startNode);

    while (hasUnvisitedEdges(graph1, numVertices)){
        int currentNode = path.nodes[path.size - 1];
        int nextNode;

        for (nextNode = 0; nextNode < numVertices; nextNode++){
            if (graph1[currentNode][nextNode] == 1){
                addNode(&path, nextNode);
                graph1[currentNode][nextNode] = 0;
                graph1[nextNode][currentNode] = 0;
                break;
            }
        }

        if (nextNode == numVertices){
            // ไม่พบเส้นทางที่เชื่อมต่อกับโหนดปัจจุบัน
            removeNode(&path);
        }
    }

    // แสดงผลลัพธ์
    printf("Euler Circuit: ");
    for (int i = 0; i < path.size; i++){
        printf("%d ", path.nodes[i]);
    }

    free(path.nodes);
}

// ฟังก์ชันเพิ่มเชื่อมต่อระหว่าง vertices u และ v
void addEdge(int u, int v){
    graph1[u][v] = 1;
    graph1[v][u] = 1; // ถ้ากราฟไม่ทิศทาง
    graph2[u][v] = 1;
    graph2[v][u] = 1;
}

// ฟังก์ชันแสดง adjacency matrix
void printGraph(){
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < numVertices; i++){
        for (int j = 0; j < numVertices; j++){
            printf("%d ", graph2[i][j]);
        }
        printf("\n");
    }
}

// ฟังก์ชันแสดงวงจรย่อยที่พบ
void printCircuit(int store[], int count){
    if (count > 2){
        for (int i = 0; i <= count; i++){
            if (i == 0){
                printf("Circuit : ");
            }
            printf("%d ", store[i]);
        }
        printf("\n");
    }
}

// ฟังก์ชันหาวงจรย่อยในกราฟ
void findCircuit(){
    for (int i = 0; i < numVertices; i++){
        int store[MAX_VERTICES];
        int count = 0;
        store[count] = i;
        for (int j = 0; j < numVertices; j++){
            if (graph2[i][j] == 1 && graph2[j][i] == 1){
                count++;
                store[count] = j;
                graph2[i][j] = 0;
                graph2[j][i] = 0;
            }
        }
        for (int w = 0; w < count; w++){
            int node1 = store[w];
            int node2 = store[w + 1];
            if (graph2[node1][node2] == 1 && graph2[node2][node1] == 1){
                count++;
                store[count] = i;
                graph2[node1][node2] = 0;
                graph2[node2][node1] = 0;
            }
        }
        printCircuit(store, count);
    }
}

// ฟังก์ชันตรวจสอบว่าเป็นวงจร Euler หรือไม่
int isEuler(){
    for (int i = 0; i < numVertices; i++){
        int degree = 0;
        for (int j = 0; j < numVertices; j++){
            if (graph1[i][j]){
                degree++;
            }
        }
        if (degree % 2 != 0){
            return 0; // ไม่มีวงจร Euler
        }
    }
    return 1; // มีวงจร Euler
}

// ฟังก์ชันเตรียม adjacency matrix
void setAdMatrix(){
    for (int i = 0; i < numVertices; i++){
        for (int j = 0; j < numVertices; j++){
            graph1[i][j] = 0; // 0 หมายถึงไม่มีเชื่อมต่อ
            graph2[i][j] = 0;
        }
    }
}

int main(){

    int numEdges, startNode;

    // กำหนดจำนวน vertices
    numVertices = 7;
    numEdges = 12;

    setAdMatrix();
    
    // กรณีไม่มีวงจร Euler
    // addEdge(0, 1);
    // addEdge(0, 2);
    // addEdge(1, 3);
    // addEdge(1, 4);
    // addEdge(2, 1);
    // addEdge(2, 4);
    // addEdge(3, 4);

    // กรณีมีวงจร Euler
    addEdge(0, 1);
    addEdge(0, 5);
    addEdge(1, 5);
    addEdge(1, 6);
    addEdge(1, 2);
    addEdge(2, 6);
    addEdge(2, 3);
    addEdge(2, 4);
    addEdge(3, 4);
    addEdge(4, 6);
    addEdge(4, 5);
    addEdge(5, 6);

    // แสดง adjacency matrix
    printGraph();

    int status = isEuler();
    if (status != 1){
        printf("\nNo Eulerian circuit exists.\n");
    }
    else {
        printf("\nEulerian circuit.\n");

        // ป้อนจุดเริ่มต้นวงจร Euler
        printf("Enter the starting node: ");
        scanf("%d", &startNode);
        findEuler(numVertices, startNode);
        printf("%d\n", startNode);
    }

    // หาวงจรย่อย
    printf("\nSubcircuits included in the graph\n");
    findCircuit();

    return 0;
}