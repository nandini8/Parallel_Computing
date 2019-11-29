# Parallel_Computing
Assignmet for PC using MPI, OpenMP 
clone https://github.com/nandini8/Parallel_Computing.git
cd Parallel_Computing
source bin/activate
pip install -r requirements.txt

1. search.py
    MPI implementation in python
    mpirun -np <number of processors> search.py

2. pi.c
    gcc -o omp_pi -fopenmp pi.c
    ./omp_pi

3. multipy.c
    gcc -fopenmp -o multiply -std=c99  multipy.c
    ./multiply

4. vecmul.c
    gcc -fopenmp -o vec vecmul.c 
    ./vec
    

