---
description: "Learn more about: Auto-Parallelization and Auto-Vectorization"
title: "Auto-Parallelization and Auto-Vectorization"
ms.date: "11/04/2016"
ms.assetid: ec71583a-287b-4599-8767-1d255e080fe3
---
# Auto-Parallelization and Auto-Vectorization

Auto-Parallelizer and Auto-Vectorizer are designed to provide automatic performance gains for loops in your code.

## Auto-Parallelizer

The [/Qpar](../build/reference/qpar-auto-parallelizer.md) compiler switch enables *automatic parallelization* of loops in your code. When you specify this flag without changing your existing code, the compiler evaluates the code to find loops that might benefit from parallelization. Because it might find loops that don't do much work and therefore won't benefit from parallelization, and because every unnecessary parallelization can engender the spawning of a thread pool, extra synchronization, or other processing that would tend to slow performance instead of improving it, the compiler is conservative in selecting the loops that it parallelizes. For example, consider the following example in which the upper bound of the loop is not known at compile time:

```cpp
void loop_test(int u) {
   for (int i=0; i<u; ++i)
      A[i] = B[i] * C[i];
}
```

Because `u` could be a small value, the compiler won’t automatically parallelize this loop. However, you might still want it parallelized because you know that `u` will always be large. To enable the auto-parallelization, specify [#pragma loop(hint_parallel(n))](../preprocessor/loop.md), where `n` is the number of threads to parallelize across. In the following example, the compiler will attempt to parallelize the loop across 8 threads.

```cpp
void loop_test(int u) {
#pragma loop(hint_parallel(8))
   for (int i=0; i<u; ++i)
      A[i] = B[i] * C[i];
}
```

As with all [pragma directives](../preprocessor/pragma-directives-and-the-pragma-keyword.md), the alternate pragma syntax `__pragma(loop(hint_parallel(n)))` is also supported.

There are some loops that the compiler can’t parallelize even if you want it to. Here's an example:

```cpp
#pragma loop(hint_parallel(8))
for (int i=0; i<upper_bound(); ++i)
    A[i] = B[i] * C[i];
```

The function `upper_bound()` might change every time it's called. Because the upper bound cannot be known, the compiler can emit a diagnostic message that explains why it can’t parallelize this loop. The following example demonstrates a loop that can be parallelized, a loop that cannot be parallelized, the compiler syntax to use at the command prompt, and the compiler output for each command line option:

```cpp
int A[1000];
void test() {
#pragma loop(hint_parallel(0))
    for (int i=0; i<1000; ++i) {
        A[i] = A[i] + 1;
    }

    for (int i=1000; i<2000; ++i) {
        A[i] = A[i] + 1;
    }
}
```

Compiling by using this command:

`cl d:\myproject\mylooptest.cpp /O2 /Qpar /Qpar-report:1`

yields this output:

```Output
--- Analyzing function: void __cdecl test(void)
d:\myproject\mytest.cpp(4) : loop parallelized
```

Compiling by using this command:

`cl d:\myproject\mylooptest.cpp /O2 /Qpar /Qpar-report:2`

yields this output:

```Output
--- Analyzing function: void __cdecl test(void)
d:\myproject\mytest.cpp(4) : loop parallelized
d:\myproject\mytest.cpp(4) : loop not parallelized due to reason '1008'
```

Notice the difference in output between the two different [/Qpar-report (Auto-Parallelizer Reporting Level)](../build/reference/qpar-report-auto-parallelizer-reporting-level.md) options. `/Qpar-report:1` outputs parallelizer messages only for loops that are successfully parallelized. `/Qpar-report:2` outputs parallelizer messages for both successful and unsuccessful loop parallelizations.

For more information about reason codes and messages, see [Vectorizer and Parallelizer Messages](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

## Auto-Vectorizer

The Auto-Vectorizer analyzes loops in your code, and uses the vector registers and instructions on the target computer to execute them, if it can. This can improve the performance of your code. The compiler targets the SSE2, AVX, and AVX2 instructions in Intel or AMD processors, or the NEON instructions on ARM processors, according to the [/arch](../build/reference/arch-minimum-cpu-architecture.md) switch.

The Auto-Vectorizer may generate different instructions than specified by the `/arch` switch. These instructions are guarded by a runtime check to make sure that code still runs correctly. For example, when you compile `/arch:SSE2`, SSE4.2 instructions may be emitted. A runtime check verifies that SSE4.2 is available on the target processor and jumps to a non-SSE4.2 version of the loop if the processor does not support those instructions.

By default, the Auto-Vectorizer is enabled. If you want to compare the performance of your code under vectorization, you can use [#pragma loop(no_vector)](../preprocessor/loop.md) to disable vectorization of any given loop.

```cpp
#pragma loop(no_vector)
for (int i = 0; i < 1000; ++i)
   A[i] = B[i] + C[i];
```

As with all [pragma directives](../preprocessor/pragma-directives-and-the-pragma-keyword.md), the alternate pragma syntax `__pragma(loop(no_vector))` is also supported.

As with the Auto-Parallelizer, you can specify the [/Qvec-report (Auto-Vectorizer Reporting Level)](../build/reference/qvec-report-auto-vectorizer-reporting-level.md) command-line option to report either successfully vectorized loops only—`/Qvec-report:1`—or both successfully and unsuccessfully vectorized loops—`/Qvec-report:2`).

For more information about reason codes and messages, see [Vectorizer and Parallelizer Messages](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md).

For an example showing how the vectorizer works in practice, see [Project Austin Part 2 of 6: Page Curling](https://devblogs.microsoft.com/cppblog/project-austin-part-2-of-6-page-curling/)

## See also

[loop](../preprocessor/loop.md)<br/>
[Parallel Programming in Native Code](/archive/blogs/nativeconcurrency)<br/>
[/Qpar (Auto-Parallelizer)](../build/reference/qpar-auto-parallelizer.md)<br/>
[/Qpar-report (Auto-Parallelizer Reporting Level)](../build/reference/qpar-report-auto-parallelizer-reporting-level.md)<br/>
[/Qvec-report (Auto-Vectorizer Reporting Level)](../build/reference/qvec-report-auto-vectorizer-reporting-level.md)<br/>
[Vectorizer and Parallelizer Messages](../error-messages/tool-errors/vectorizer-and-parallelizer-messages.md)
