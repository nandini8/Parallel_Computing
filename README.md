# Parallel_Computing
Assignmet for PC using MPI, OpenMP 

clone this repo in the cluster 
```
git clone https://github.com/nandini8/Parallel_Computing.git
cd Parallel_Computing/scripts
source bin/activate
pip install -r requirements.txt
```

1. search.py
    
    Design Parallel Searching Algorithm and Implement using MPI
    
    MPI implementation in python
    
    ```
    mpirun -np <number of processors> search.py
    ```

2. pi.c

    Design Parallel pi calculating Algorithm and Implement using OpenMP;
    
    ```
    gcc -o omp_pi -fopenmp pi.c
    ./omp_pi
    ```

3. multipy.c

    Design Parallel Matrix Multiplication Algorithm and Implement using OpenMP
    
    ```
    gcc -fopenmp -o multiply -std=c99  multipy.c
    ./multiply
    ```

4. vecmul.c

    Design Parallel Vector Matrix Multiplication Algorithm and Implement using OpenMP
    
    ```
    gcc -fopenmp -o vec vecmul.c 
    ./vec
    ```
    

