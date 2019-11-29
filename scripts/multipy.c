const int size = 5;



int main()
{
    float a[size][size];
    float b[size][size];
    float c[size][size];
    int i, j;
    // Initialize buffers.
    for (i = 0; i < size; ++i) {
        for (j = 0; j < size; ++j) {
            a[i][j] = (float)i;
            b[i][j] = (float)i;
            c[i][j] = 0.0f;
        }
    }

    // Compute matrix multiplication.
    // C <- C + A x B
    #pragma omp parallel for default(none) shared(a,b,c)
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < size; ++i) {
        for (j = 0; j < size; ++j) {
            printf("%f ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}