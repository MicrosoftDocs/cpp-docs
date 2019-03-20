---
title: "New features"
ms.date: "03/20/2019"
helpviewer_keywords: ["OpenMP in Visual C++, new features", "explicit parallelization, new features"]
---

# New features

Visual C++ currently supports the OpenMP 2.0 standard, however with Visual Studio 2019, new features such as SIMD will be introduced.

To try these features, use the `-openmp:experimental` switch. This switch enables the additional OpenMP features not available under `-openmp`.

> [!NOTE]
> The `-openmp:experimental` switch subsumes the `-openmp` switch meaning it's compatible with all OpenMP 2.0 features.

## OpenMP SIMD in Visual C++

OpenMP SIMD, first introduced in the OpenMP 4.0 standard, targets loop vectorization. By annotating a loop with the `simd` directive, the compiler can ignore vector dependencies and vectorize the loop as much as possible. The compiler respects users’ intention to have multiple loop iterations executed simultaneously.

```c
    #pragma omp simd
    for (i = 0; i < count; i++)
    {
        a[i] = a[i-1] + 1;
        b[i] = *c + 1;
        bar(i);
    }
```

Visual C++ already provides similar non-OpenMP loop pragmas like `#pragma vector` and `#pragma ivdep`, however with OpenMP SIMD, the compiler can do more, such as:

- Always allowed to ignore any vector dependencies that are present.
- `/fp:fast` is enabled within the loop.
- Outer loops and loops with function calls are vectorizable.
- Nested loops can be coalesced into one loop and vectorized.
- Hybrid acceleration with `#pragma omp for simd` to enable coarse-grained multi-threading and fine-grained vectorization.  

For loops that aren't vectorized, the compiler issues a message for each:

```cmd
    cl -O2 -openmp:experimental mycode.cpp
```

```Output
    mycode.cpp(84) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(90) : info C5002: Omp simd loop not vectorized due to reason '1200'
```

For loops that are vectorized, the compiler is silent unless a vectorization logging switch is provided:

```cmd
    cl -O2 -openmp:experimental -Qvec-report:2 mycode.cpp
```

```Output
    mycode.cpp(84) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(90) : info C5002: Omp simd loop not vectorized due to reason '1200'
    mycode.cpp(96) : info C5001: Omp simd loop vectorized
```

In addition, the OpenMP SIMD directive takes the following clauses to further enhance the vectorization:

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
> None of the SIMD clauses are effective in Visual Studio 2019. They'll be parsed but ignored by the compiler with a warning issued for user's awareness.
>
> For example, the compiler will issue:
>
> ```Output
>    warning C4849: OpenMP 'simdlen' clause ignored in 'simd' directive
> ```
>
> for the code:
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

### Example
  
The OpenMP SIMD directive provides users a way to dictate the compiler to vectorize a loop. By annotating a loop with the OpenMP SIMD directive, users intend to have multiple loop iterations executed simultaneously.

For example, the following loop is annotated with the OpenMP SIMD directive. There is no perfect parallelism among loop iterations since there is a backward dependency from a[i] to a[i-1], but because of the SIMD directive the compiler is still allowed to pack consecutive iterations of the first statement into one vector instruction and run them in parallel.

```c
    #pragma omp simd
    for (i = 0; i < count; i++)
    {
        a[i] = a[i-1] + 1;
        b[i] = *c + 1;
        bar(i);
    }
```

Therefore, the following transformed vector form of the loop is legal because the compiler keeps the sequential behavior of each original loop iteration. In other words, `a[i]` is executed after `a[-1]`, `b[i]` is after `a[i]` and the call to `bar` happens last.

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

It's illegal to move the memory reference `*c` out of the loop if it may alias with `a[i]` or `b[i]`. It's also illegal to reorder the statements inside one original iteration if it breaks the sequential dependency. As an example, the following transformed loop is not legal.

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

## Feedback

We encourage you to try out this new feature. If you see an OpenMP SIMD loop that you expect to be vectorized, but isn't or the generated code isn't optimal, please let us know via [email](mailto:visualcpp@microsoft.com), [Twitter](twitter.com/visualc), or [Developer Community](https://developercommunity.visualstudio.com).

Moving forward, we'd also love to hear your need of OpenMP functionalities missing in Visual Studio.

## See also

[/openmp (Enable OpenMP 2.0 Support)](../../build/reference/openmp-enable-openmp-2-0-support.md)<br/>
