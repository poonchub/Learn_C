#include <stdio.h>

// กำหนดขนาดของกราฟ
#define MAX_VERTICES 100

// สร้าง adjacency matrix เพื่อเก็บข้อมูลการเชื่อมต่อ
int graph[MAX_VERTICES][MAX_VERTICES];

// กำหนดจำนวน vertices
int numVertices;

int visited[MAX_VERTICES];

int count;

int status;

// เพิ่มเชื่อมต่อระหว่าง vertices u และ v
void addEdge(int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1; // ถ้ากราฟไม่ทิศทาง
}

// แสดง adjacency matrix
void printGraph() {
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

void initializeVisited() {
    for (int i = 0; i < numVertices; i++) {
        visited[i] = 0;
    }
}

void DFS(int startVertex, int currentVertex, int pathLength, int check) {
    visited[currentVertex] = 1;
    printf("\nstartVertex = %d, currentVertex = %d, pathLength %d, count = %d\n",startVertex,currentVertex,pathLength,count);

    // DFS ไปยังตำแหน่งที่ยังไม่ได้เยือน
    for (int i = 0; i < numVertices; i++) {
        
        if (graph[currentVertex][i] == 1 && visited[i] == 0) {
            count++;
            DFS(startVertex, i, pathLength + 1, check);
            
        }
        // if (count>=2 && graph[check][i]==1){
        //     printf("%d -> ",i);
        //     graph[check][i]=0;
        //     graph[i][check]=0;
        //     // status=1;
        //     // graph[currentVertex][i]=0;
        //     // graph[i][currentVertex]=0;
        //     return;
        // }
        
        
    }
    count--;
    visited[currentVertex] = 0; // รีเซ็ต visited เมื่อกลับมาจากการ DFS
}

void findAllCycles() {
    initializeVisited();

    for (int i = 0; i < numVertices-4; i++) {
        count = 0;
        status = 0 ;
        DFS(i, i, 0, i);
        initializeVisited(); // รีเซ็ต visited เพื่อค้นหาวงจรถัดไป
        printGraph();
        printf("\n--------------------\n");
    }
}

int main() {
    // กำหนดจำนวน vertices
    // printf("Enter the number of vertices: ");
    // scanf("%d", &numVertices);
    numVertices = 5;

    // เตรียม adjacency matrix
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            graph[i][j] = 0; // 0 หมายถึงไม่มีเชื่อมต่อ
        }
    }

    // ป้อนข้อมูล edge โดยให้ผู้ใช้ป้อนเอง
    int numEdges, u, v;
    // printf("Enter the number of edges: ");
    // scanf("%d", &numEdges);
    numEdges = 7;

    // printf("Enter edges (vertex u and vertex v):\n");
    // for (int i = 0; i < numEdges; i++) {
    //     scanf("%d %d", &u, &v);
    //     addEdge(u, v);
    // }
    // addEdge(0, 1);
    // addEdge(1, 2);
    // addEdge(2, 0);
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(0, 3);
    addEdge(0, 4);
    addEdge(1, 4);
    addEdge(2, 4);
    addEdge(3, 4);


    // แสดง adjacency matrix
    printGraph();

    findAllCycles();

    return 0;
}
