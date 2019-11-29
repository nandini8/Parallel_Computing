#!/usr/bin/env python

import numpy as np
from mpi4py import MPI


comm = MPI.COMM_WORLD

print("-"*78)
print(" Running on %d cores" % comm.size)
print("-"*78)

search_element = 8
my_N = 4
N = my_N * comm.size

if comm.rank == 0:
    A = np.arange(N, dtype=np.float64)
    search_data = np.empty(N, dtype=np.float64)
    search_data.fill(-1)
else:
    A = np.empty(N, dtype=np.float64)
    search_data = np.empty(N, dtype=np.float64)
    search_data.fill(-1)

my_A = np.empty(my_N, dtype=np.float64)
search_my = np.empty(my_N, dtype=np.float64)
search_data.fill(-1)


# Scatter data into my_A arrays
comm.Scatter( [A, MPI.DOUBLE], [my_A, MPI.DOUBLE] )
comm.Scatter([search_data, MPI.DOUBLE], [search_my, MPI.DOUBLE])

print("After Scatter:")
for r in range(comm.size):
    if comm.rank == r:
        print("DATA: [%d] %s" % (comm.rank, my_A))
        pass
    comm.Barrier()

# Everybody is multiplying by 2
# my_A *= 2
if float(search_element) in my_A:
            index = np.where(my_A == search_element)
            search_my[index] = 0
print("SEARCH: [%d] %s" % (comm.rank, search_my))

# Allgather data into A again
comm.Allgather( [my_A, MPI.DOUBLE], [A, MPI.DOUBLE] )
comm.Allgather([search_my, MPI.DOUBLE], [search_data, MPI.DOUBLE])
if 0 in search_data:
    print("Element found at first index %d" % np.where(search_data == 0))
else:
    print("Element not found")

# print("After Allgather:")
# for r in range(comm.size):
#     if comm.rank == r:
#         # print("DATA: [%d] %s" % (comm.rank, A))
#         # print("SEARCH: [%d] %s" % (comm.rank, search_data))
#         pass
#     comm.Barrier()

