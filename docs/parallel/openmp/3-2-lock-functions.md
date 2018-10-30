---
title: "3.2 Lock Functions"
ms.date: "11/04/2016"
ms.assetid: 0ec855c6-55a9-49d7-bee4-5edae6e86a1b
---
# 3.2 Lock Functions

The functions described in this section manipulate locks used for synchronization.

For the following functions, the lock variable must have type **omp_lock_t**. This variable must only be accessed through these functions. All lock functions require an argument that has a pointer to **omp_lock_t** type.

- The `omp_init_lock` function initializes a simple lock.

- The `omp_destroy_lock` function removes a simple lock.

- The `omp_set_lock` function waits until a simple lock is available.

- The `omp_unset_lock` function releases a simple lock.

- The `omp_test_lock` function tests a simple lock.

For the following functions, the lock variable must have type **omp_nest_lock_t**.  This variable must only be accessed through these functions. All nestable lock functions require an argument that has a pointer to **omp_nest_lock_t** type.

- The `omp_init_nest_lock` function initializes a nestable lock.

- The `omp_destroy_nest_lock` function removes a nestable lock.

- The `omp_set_nest_lock` function waits until a nestable lock is available.

- The `omp_unset_nest_lock` function releases a nestable lock.

- The `omp_test_nest_lock` function tests a nestable lock.

The OpenMP lock functions access the lock variable in such a way that they always read and update the most current value of the lock variable. Therefore, it is not necessary for an OpenMP program to include explicit **flush** directives to ensure that the lock variable's value is consistent among different threads. (There may be a need for **flush** directives to make the values of other variables consistent.)