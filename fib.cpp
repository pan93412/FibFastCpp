#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#define FORMAT unsigned long long int
using namespace std;

template <typename T>
vector<T> matrix (vector<T> A, vector<T> B) {
    vector<T> C = {
        A[0] * B[0] + A[2] * B[1],
        A[1] * B[0] + A[3] * B[1],
        A[0] * B[2] + A[2] * B[3],
        A[1] * B[2] + A[3] * B[3]
    };

    return C;
}

bool argparse(int argc, char* argv[], char* arg) {
    for (int i = 0; i<argc; i++)
        if (strcmp(argv[i], arg) == 0) return true;
    return false;
}

int main (int argc, char* argv[]) {
    vector<FORMAT> answer = {1,0,0,1},
                   temp = {1,1,1,0};
    bool verbose = argparse(argc, argv, "-v");
    int num = atoi(argv[argc-1]);

    while (num > 0) {
        if (num % 2 == 1) answer = matrix(answer, temp);
        temp = matrix(temp, temp);
        num = static_cast<int>(num/2);

        if (verbose) {
            printf("\r[I] Processing: %d    ", num);
            fflush(stdout);
        }
    }

    if (verbose) printf("\n");
    printf("[I] Done. F(n) is: \n%llu\n", answer[1]);
}
