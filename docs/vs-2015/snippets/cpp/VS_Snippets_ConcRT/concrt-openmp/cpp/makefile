.PHONY: all

all: concrt-omp-count-primes.exe concrt-omp-parallel-any-of.exe concrt-omp-exceptions.exe concrt-omp-fibonacci-reduction.exe

concrt-omp-count-primes.exe:	concrt-omp-count-primes.cpp
   cl.exe /EHsc /openmp concrt-omp-count-primes.cpp

concrt-omp-parallel-any-of.exe:	concrt-omp-parallel-any-of.cpp
   cl.exe /EHsc /openmp concrt-omp-parallel-any-of.cpp

concrt-omp-exceptions.exe:	concrt-omp-exceptions.cpp
   cl.exe /EHsc /openmp concrt-omp-exceptions.cpp
   
concrt-omp-fibonacci-reduction.exe: concrt-omp-fibonacci-reduction.cpp
   cl.exe /EHsc /openmp concrt-omp-fibonacci-reduction.cpp