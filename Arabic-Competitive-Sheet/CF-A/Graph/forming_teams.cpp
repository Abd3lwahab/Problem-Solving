#include <iostream>

// Max number of students and edges
#define MAX 100

// enmity[i][j] means i is an archenemy to j.
bool enmity[MAX][MAX];

int students_count;
int archenemy_count;

int depth = 0;
int layer = 0;

// aValue[i] means value of a at layer i
int aValue[MAX];

// Function prototypes
bool bench(int a, int b);

int main() {
    std::cin >> students_count >> archenemy_count;

    // Clear graph of enmity in pairs
    for (int i = 0; i < students_count; i++) {
        for (int j = 0; j < students_count; j++) {
            enmity[i][j] = false;
        }
        aValue[i] = -1;
    }

    // Number of students will send to the bench
    int count = 0;

    // Query for archenemy
    for (int i = 0; i < archenemy_count; i++) {
        int a, b;
        std::cin >> a >> b;

        // Intialize depth and layer to zero before call bench fuction
        depth = 0, layer = 0;

        // Check if this edge create odd cycle
        if (bench(a - 1, b - 1)) {
            count++;
        }

        // Lock each pair of archenemy in undirected graph
        enmity[a - 1][b - 1] = true;
        enmity[b - 1][a - 1] = true;
    }

    // Ensure that the two teams are the same size
    if ((students_count - count) % 2 != 0) {
        count++;
    }

    std::cout<< count << '\n';
}

// Check if this edge create odd cycle
bool bench(int a, int b) {
    bool OddCycle = false;
    if (enmity[a][b]) {
        return true;
    }

    for (int i = 0; i < students_count; i++) {
        // Ensure that this node is not the node it came from
        if (enmity[a][i] && i != aValue[layer - 1]) {
            // Store Values of a to prevent a segmentation fault
            aValue[layer] = a;
            depth++;
            layer++;
            OddCycle = OddCycle || bench(i, b);
            layer--;
        }
    }

    // Return false if this cycle is even
    if (OddCycle && depth % 2 == 0) {
        return false;
    }

    return OddCycle;
}