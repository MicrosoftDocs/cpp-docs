---
description: "Learn more about: SIMD Extension"
title: "SIMD Extension"
ms.date: "03/20/2019"
helpviewer_keywords: ["SIMD", "OpenMP in Visual C++, new features", "explicit parallelization, new features"]
---
# SIMD Extension

Visual C++ currently supports the OpenMP 2.0 standard, however Visual Studio 2019 also now offers SIMD functionality.

> [!NOTE]
> To use SIMD, compile with the `-openmp:experimental` switch that enables additional OpenMP features not available when using the `-openmp` switch.
>
> The `-openmp:experimental` switch subsumes `-openmp`, meaning all OpenMP 2.0 features are included in its use.

For more information, see [SIMD Extension to C++ OpenMP in Visual Studio](https://devblogs.microsoft.com/cppblog/simd-extension-to-c-openmp-in-visual-studio/).

## OpenMP SIMD in Visual C++

OpenMP SIMD, introduced in the OpenMP 4.0 standard, targets making vector-friendly loops. By using the `simd` directive before a loop, the compiler can ignore vector dependencies, make the loop as vector-friendly as possible, and respect the users’ intention to have multiple loop iterations executed simultaneously.

```c
    #pragma omp simd
    for (i = 0; i < count; i++)
    {
        a[i] = a[i-1] + 1;
        b[i] = *c + 1;
        bar(i);
    }
```

Visual C++ provides similar non-OpenMP loop pragmas like `#pragma vector` and `#pragma ivdep`, however with OpenMP SIMD, the compiler can do more, like:

- Always allowed to ignore present vector dependencies.
- `/fp:fast` is enabled within the loop.
- Outer loops and loops with function calls are vector-friendly.
- Nested loops can be coalesced into one loop and made vector-friendly.
- Hybrid acceleration with `#pragma omp for simd` to enable coarse-grained multi-threading and fine-grained vectors.  

For vector-friendly loops, the compiler remains silent unless you use a vector-support log switch:

```cmd
    cl -O2 -openmp:experimental -Qvec-report:2 mycode.cpp
```

```Output
    mycode.cpp(84) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(90) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(96) : info C5001: Omp simd loop vectorized
```

For non-vector-friendly loops, the compiler issues each a message:

```cmd
    cl -O2 -openmp:experimental mycode.cpp
```

```Output
    mycode.cpp(84) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(90) : info C5002: Omp simd loop not vectorized due to reason '1200'
```

### Clauses

The OpenMP SIMD directive can also take the following clauses to enhance vector-support:

|Directive|Description|
|---|---|
|`simdlen(length)`|Specify the number of vector lanes.|
|`safelen(length)`|Specify the vector dependency distance.|
|`linear(list[ : linear-step]`)|The linear mapping from loop induction variable to array subscription.|
|`aligned(list[ : alignment])`|The alignment of data.|
|`private(list)`|Specify data privatization.|
|`lastprivate(list)`|Specify data privatization with final value from the last iteration.|
|`reduction(reduction-identifier:list)`|Specify customized reduction operations.|
|`collapse(n)`|Coalescing loop nest.|

> [!NOTE]
> Non-effective SIMD clauses are parsed and ignored by the compiler with a warning.
>
> For example, use of the following code issues a warning:
>
> ```c
>    #pragma omp simd simdlen(8)
>    for (i = 0; i < count; i++)
>    {
>        a[i] = a[i-1] + 1;
>        b[i] = *c + 1;
>        bar(i);
>    }
> ```
>
> ```Output
>    warning C4849: OpenMP 'simdlen' clause ignored in 'simd' directive
> ```

### Example
  
The OpenMP SIMD directive provides users a way to dictate the compiler make loops vector-friendly. By annotating a loop with the OpenMP SIMD directive, users intend to have multiple loop iterations executed simultaneously.

For example, the following loop is annotated with the OpenMP SIMD directive. There's no perfect parallelism among loop iterations since there's a backward dependency from a[i] to a[i-1], but because of the SIMD directive the compiler is still allowed to pack consecutive iterations of the first statement into one vector instruction and run them in parallel.

```c
    #pragma omp simd
    for (i = 0; i < count; i++)
    {
        a[i] = a[i-1] + 1;
        b[i] = *c + 1;
        bar(i);
    }
```

Therefore, the following transformed vector form of the loop is **legal** because the compiler keeps the sequential behavior of each original loop iteration. In other words, `a[i]` is executed after `a[-1]`, `b[i]` is after `a[i]` and the call to `bar` happens last.

```c
    for (i = 0; i < count; i+=4)
    {
        a[i:i+3] = a[i-1:i+2] + 1;
        b[i:i+3] = *c + 1;
        bar(i);
        bar(i+1);
        bar(i+2);
        bar(i+3);
    }
```

It's **not legal** to move the memory reference `*c` out of the loop if it may alias with `a[i]` or `b[i]`. It's also not legal to reorder the statements inside one original iteration if it breaks the sequential dependency. For example, the following transformed loop isn't legal:

```c
    c = b;
    t = *c;
    for (i = 0; i < count; i+=4)
    {
        a[i:i+3] = a[i-1:i+2] + 1;
        bar(i);            // illegal to reorder if bar[i] depends on b[i]
        b[i:i+3] = t + 1;  // illegal to move *c out of the loop
        bar(i+1);
        bar(i+2);
        bar(i+3);
    }
```

## See also

[/openmp (Enable OpenMP 2.0 Support)](../../build/reference/openmp-enable-openmp-2-0-support.md)<br/>
