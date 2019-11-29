const int matrix_size = 5;
int main()
{
    float matrix[matrix_size][matrix_size];
    float vector[matrix_size];
    float results[matrix_size];
    int i, j;
    // Initialize buffers.
    for (i = 0; i < matrix_size; ++i) {
        for (j = 0; j < matrix_size; ++j) {
            matrix[i][j] = (float)i;
            vector[i] = (float)i;
            results[i] = 0.0f;
        }
    }

    #pragma omp parallel private(i) num_threads(4)
    {
        // tid = omp_get_thread_num();
        // world_size = omp_get_num_threads();
        // printf("Threads: %d\n",world_size);
        int y;
        for(y = 0; y < matrix_size ; y++){
            #pragma omp parallel for private(i) shared(results, vector, matrix)
            for(i = 0; i < matrix_size; i++){
                    results[y] = results[y] + vector[i]*matrix[i][y];   
            }
        }
    }
     for (i = 0; i < matrix_size; ++i) {
       
            printf("%f ", results[i]);
    }
    return 0;
}