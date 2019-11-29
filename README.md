# Parallel_Computing
Assignmet for PC using MPI, OpenMP 

clone this repo in the cluster 
```
git clone https://github.com/nandini8/Parallel_Computing.git
cd Parallel_Computing/scripts
source bin/activate
pip install -r requirements.txt
```

1. search
    
    Design Parallel Searching Algorithm and Implement using MPI
    
    MPI implementation in python
    
    ```
    mpirun -np <number of processors> search
    ```

2. pi

    Design Parallel pi calculating Algorithm and Implement using OpenMP;
    
    ```
    gcc -o omp_pi -fopenmp pi
    ./omp_pi
    ```

3. multipy

    Design Parallel Matrix Multiplication Algorithm and Implement using OpenMP
    
    ```
    gcc -fopenmp -o multiply -std=c99  multipy
    ./multiply
    ```

4. vecmul

    Design Parallel Vector Matrix Multiplication Algorithm and Implement using OpenMP
    
    ```
    gcc -fopenmp -o vec vecmul
    ./vec
    ```
    

