---
description: "Learn more about: OpenMP Environment Variables"
title: "OpenMP Environment Variables"
ms.date: "03/20/2019"
f1_keywords: ["OpenMP environment variables", "OMP_DYNAMIC", "OMP_NESTED", "OMP_NUM_THREADS", "OMP_SCHEDULE"]
helpviewer_keywords: ["OpenMP environment variables", "OMP_DYNAMIC OpenMP environment variable", "OMP_NESTED OpenMP environment variable", "OMP_NUM_THREADS OpenMP environment variable", "OMP_SCHEDULE OpenMP environment variable"]
ms.assetid: 2178ce2b-ffa1-45ec-a455-64437711d15d
---
# OpenMP Environment Variables

Provides links to environment variables used in the OpenMP API.

The Visual C++ implementation of the OpenMP standard includes the following environment variables. These environment variables are read at program startup and modifications to their values are ignored at runtime (for example, using [_putenv, _wputenv](../../../c-runtime-library/reference/putenv-wputenv.md)).

|Environment variable|Description|
|--------------------|-----------|
|[OMP_SCHEDULE](#omp-schedule)|Modifies the behavior of the [schedule](openmp-clauses.md#schedule) clause when `schedule(runtime)` is specified in a `for` or `parallel for` directive.|
|[OMP_NUM_THREADS](#omp-num-threads)|Sets the maximum number of threads in the parallel region, unless overridden by [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) or [num_threads](openmp-clauses.md#num-threads).|
|[OMP_DYNAMIC](#omp-dynamic)|Specifies whether the OpenMP run time can adjust the number of threads in a parallel region.|
|[OMP_NESTED](#omp-nested)|Specifies whether nested parallelism is enabled, unless nested parallelism is enabled or disabled with `omp_set_nested`.|

## <a name="omp-dynamic"></a> OMP_DYNAMIC

Specifies whether the OpenMP run time can adjust the number of threads in a parallel region.

```cmd
set OMP_DYNAMIC[=TRUE | =FALSE]
```

### Remarks

The `OMP_DYNAMIC` environment variable can be overridden by the [omp_set_dynamic](openmp-functions.md#omp-set-dynamic) function.

The default value in the Visual C++ implementation of the OpenMP standard is `OMP_DYNAMIC=FALSE`.

For more information, see [4.3 OMP_DYNAMIC](../4-environment-variables.md#43-omp_dynamic).

### Example

The following command sets the `OMP_DYNAMIC` environment variable to TRUE:

```cmd
set OMP_DYNAMIC=TRUE
```

The following command displays the current setting of the `OMP_DYNAMIC` environment variable:

```cmd
set OMP_DYNAMIC
```

## <a name="omp-nested"></a> OMP_NESTED

Specifies whether nested parallelism is enabled, unless nested parallelism is enabled or disabled with `omp_set_nested`.

```cmd
set OMP_NESTED[=TRUE | =FALSE]
```

### Remarks

The `OMP_NESTED` environment variable can be overridden by the [omp_set_nested](openmp-functions.md#omp-set-nested) function.

The default value in the Visual C++ implementation of the OpenMP standard is `OMP_DYNAMIC=FALSE`.

For more information, see [4.4 OMP_NESTED](../4-environment-variables.md#44-omp_nested).

### Example

The following command sets the `OMP_NESTED` environment variable to TRUE:

```cmd
set OMP_NESTED=TRUE
```

The following command displays the current setting of the `OMP_NESTED` environment variable:

```cmd
set OMP_NESTED
```

## <a name="omp-num-threads"></a> OMP_NUM_THREADS

Sets the maximum number of threads in the parallel region, unless overridden by [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) or [num_threads](openmp-clauses.md#num-threads).

```cmd
set OMP_NUM_THREADS[=num]
```

### Parameters

*num*<br/>
The maximum number of threads you want in the parallel region, up to 64 in the Visual C++ implementation.

### Remarks

The `OMP_NUM_THREADS` environment variable can be overridden by the [omp_set_num_threads](openmp-functions.md#omp-set-num-threads) function or by [num_threads](openmp-clauses.md#num-threads).

The default value of `num` in the Visual C++ implementation of the OpenMP standard is the number of virtual processors, including hyperthreading CPUs.

For more information, see [4.2 OMP_NUM_THREADS](../4-environment-variables.md#42-omp_num_threads).

### Example

The following command sets the `OMP_NUM_THREADS` environment variable to `16`:

```cmd
set OMP_NUM_THREADS=16
```

The following command displays the current setting of the `OMP_NUM_THREADS` environment variable:

```cmd
set OMP_NUM_THREADS
```

## <a name="omp-schedule"></a> OMP_SCHEDULE

Modifies the behavior of the [schedule](openmp-clauses.md#schedule) clause when `schedule(runtime)` is specified in a `for` or `parallel for` directive.

```cmd
set OMP_SCHEDULE[=type[,size]]
```

### Parameters

*size*<br/>
(Optional) Specifies the size of iterations. *size* must be a positive integer. The default is `1`, except when *type* is static. Not valid when *type* is `runtime`.

*type*<br/>
The kind of scheduling, either `dynamic`, `guided`, `runtime`, or `static`.

### Remarks

The default value in the Visual C++ implementation of the OpenMP standard is `OMP_SCHEDULE=static,0`.

For more information, see [4.1 OMP_SCHEDULE](../4-environment-variables.md#41-omp_schedule).

### Example

The following command sets the `OMP_SCHEDULE` environment variable:

```cmd
set OMP_SCHEDULE="guided,2"
```

The following command displays the current setting of the `OMP_SCHEDULE` environment variable:

```cmd
set OMP_SCHEDULE
```
