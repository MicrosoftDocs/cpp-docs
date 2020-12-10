---
description: "Learn more about: Optimizing your code"
title: "Optimizing Your Code"
ms.date: "05/06/2019"
helpviewer_keywords: ["performance, optimizing code", "optimization", "cl.exe compiler, performance", "optimization, C++ code", "code, optimizing", "performance, compiler"]
---
# Optimizing your code

By optimizing an executable, you can achieve a balance between fast execution speed and small code size. This topic discusses some of the mechanisms that Visual Studio provides to help you optimize code.

## Language features

The following topics describe some of the optimization features in the C/C++ language.

[Optimization Pragmas and Keywords](optimization-pragmas-and-keywords.md) \
A list of keywords and pragmas that you can use in your code to improve performance.

[Compiler Options Listed by Category](reference/compiler-options-listed-by-category.md) \
A list of **/O** compiler options that specifically affect execution speed or code size.

[Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md) \
Rvalue references support the implementation of *move semantics*. If move semantics are used to implement template libraries, the performance of applications that use those templates can significantly improve.

### The optimize pragma

If an optimized section of code causes errors or a slowdown, you can use the [optimize](../preprocessor/optimize.md) pragma to turn off optimization for that section.

Enclose the code between two pragmas, as shown here:

```cpp
#pragma optimize("", off)
// some code here
#pragma optimize("", on)
```

## Programming practices

You might notice additional warning messages when you compile your code with optimization. This behavior is expected because some warnings relate only to optimized code. You can avoid many optimization problems if you heed these warnings.

Paradoxically, optimizing a program for speed could cause code to run slower. This is because some optimizations for speed increase code size. For example, inlining functions eliminates the overhead of function calls. However, inlining too much code might make your program so large that the number of virtual-memory page faults increases. Therefore, the speed gained from eliminating function calls may be lost to memory swapping.

The following topics discuss good programming practices.

[Tips for Improving Time-Critical Code](tips-for-improving-time-critical-code.md) \
Better coding techniques can yield better performance. This topic suggests coding techniques that can help you make sure that the time-critical parts of your code perform satisfactorily.

[Optimization Best Practices](optimization-best-practices.md) \
Provides general guidelines about how best to optimize your application.

## Debugging optimized code

Because optimization might change the code created by the compiler, we recommend that you debug your application and measure its performance, and then optimize your code.

The following topics provide information about how to debug release builds.

- [Debugging in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio)

- [How to: Debug Optimized Code](/visualstudio/debugger/how-to-debug-optimized-code)

- [Why Floating-Point Numbers May Lose Precision](why-floating-point-numbers-may-lose-precision.md)

The following topics provide information about how to optimize building, loading, and executing your code.

- [Improving Compiler Throughput](improving-compiler-throughput.md)

- [Using Function Name Without () Produces No Code](using-function-name-without-parens-produces-no-code.md)

- [Optimizing Inline Assembly](../assembler/inline/optimizing-inline-assembly.md)

- [Specifying Compiler Optimization for an ATL Project](../atl/reference/specifying-compiler-optimization-for-an-atl-project.md)

- [What optimization techniques should I use to improve the client application's performance when loading?](../build/dll-frequently-asked-questions.md#mfc_optimization)

## In this section

[Optimization Pragmas and Keywords](optimization-pragmas-and-keywords.md) \
[Improving Compiler Throughput](improving-compiler-throughput.md) \
[Why Floating-Point Numbers May Lose Precision](why-floating-point-numbers-may-lose-precision.md) \
[IEEE Floating-Point Representation](ieee-floating-point-representation.md) \
[Tips for Improving Time-Critical Code](tips-for-improving-time-critical-code.md) \
[Using Function Name Without () Produces No Code](using-function-name-without-parens-produces-no-code.md) \
[Optimization Best Practices](optimization-best-practices.md) \
[Profile-Guided Optimizations](profile-guided-optimizations.md) \
[Environment Variables for Profile-Guided Optimizations](environment-variables-for-profile-guided-optimizations.md) \
[PgoAutoSweep](pgoautosweep.md) \
[pgomgr](pgomgr.md) \
[pgosweep](pgosweep.md) \
[How to: Merge Multiple PGO Profiles into a Single Profile](how-to-merge-multiple-pgo-profiles-into-a-single-profile.md)

## See also

[C/C++ Building Reference](reference/c-cpp-building-reference.md)
