---
description: "Learn more about: /openmp (Enable OpenMP Support)"
title: "/openmp (Enable OpenMP Support)"
ms.date: "04/15/2019"
f1_keywords: ["/openmp", "VC.Project.VCCLCompilerTool.OpenMP"]
helpviewer_keywords: ["/openmp compiler option [C++]", "-openmp compiler option [C++]"]
ms.assetid: 9082b175-18d3-4378-86a7-c0eb95664e13
---
# /openmp (Enable OpenMP Support)

Causes the compiler to process [`#pragma omp`](../../preprocessor/omp.md) directives in support of OpenMP.

## Syntax

::: moniker range=">= msvc-160"

> **/openmp**\[**:**__experimental__]

::: moniker-end

::: moniker range="<= msvc-150"

> **/openmp**

::: moniker-end

## Remarks

`#pragma omp` is used to specify [Directives](../../parallel/openmp/reference/openmp-directives.md) and [Clauses](../../parallel/openmp/reference/openmp-clauses.md). If **/openmp** isn't specified in a compilation, the compiler ignores OpenMP clauses and directives. [OpenMP Function](../../parallel/openmp/reference/openmp-functions.md) calls are processed by the compiler even if **/openmp** isn't specified.

::: moniker range=">= msvc-160"

The C++ compiler currently supports the OpenMP 2.0 standard. However, Visual Studio 2019 also now offers SIMD functionality. To use SIMD, compile by using the **/openmp:experimental** option. This option enables both the usual OpenMP features, and additional OpenMP SIMD features not available when using the **/openmp** switch.

::: moniker-end

Applications compiled by using both **/openmp** and **/clr** can only be run in a single application domain process. Multiple application domains aren't supported. That is, when the module constructor (`.cctor`) is run, it detects if the process is compiled using **/openmp**, and if the app is loaded into a non-default runtime. For more information, see [appdomain](../../cpp/appdomain.md), [/clr (Common Language Runtime Compilation)](clr-common-language-runtime-compilation.md), and [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md).

If you attempt to load an app compiled using both **/openmp** and **/clr** into a non-default application domain, a <xref:System.TypeInitializationException> exception is thrown outside the debugger, and a `OpenMPWithMultipleAppdomainsException` exception is thrown in the debugger.

These exceptions can also be raised in the following situations:

- If your application is compiled using **/clr** but not **/openmp**, and is loaded into a non-default application domain, where the process includes an app compiled using **/openmp**.

- If you pass your **/clr** app to a utility, such as [regasm.exe](/dotnet/framework/tools/regasm-exe-assembly-registration-tool), which loads its target assemblies into a non-default application domain.

The common language runtime's code access security doesn't work in OpenMP regions. If you apply a CLR code access security attribute outside a parallel region, it won't be in effect in the parallel region.

Microsoft doesn't recommend that you write **/openmp** apps that allow partially trusted callers. Don't use <xref:System.Security.AllowPartiallyTrustedCallersAttribute>, or any CLR code access security attributes.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Expand the **Configuration Properties** > **C/C++** > **Language** property page.

1. Modify the **OpenMP Support** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OpenMP%2A>.

## Example

The following sample shows some of the effects of thread pool startup versus using the thread pool after it has started. Assuming an x64, single core, dual processor, the thread pool takes about 16 ms to start up. After that, there's little extra cost for the thread pool.

When you compile using **/openmp**, the second call to test2 never runs any longer than if you compile using **/openmp-**, as there's no thread pool startup. At a million iterations, the **/openmp** version is faster than the **/openmp-** version for the second call to test2. At 25 iterations, both **/openmp-** and **/openmp** versions register less than the clock granularity.

If you have only one loop in your application and it runs in less than 15 ms (adjusted for the approximate overhead on your machine), **/openmp** may not be appropriate. If it's higher, you may want to consider using **/openmp**.

```cpp
// cpp_compiler_options_openmp.cpp
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

volatile DWORD dwStart;
volatile int global = 0;

double test2(int num_steps) {
   int i;
   global++;
   double x, pi, sum = 0.0, step;

   step = 1.0 / (double) num_steps;

   #pragma omp parallel for reduction(+:sum) private(x)
   for (i = 1; i <= num_steps; i++) {
      x = (i - 0.5) * step;
      sum = sum + 4.0 / (1.0 + x*x);
   }

   pi = step * sum;
   return pi;
}

int main(int argc, char* argv[]) {
   double   d;
   int n = 1000000;

   if (argc > 1)
      n = atoi(argv[1]);

   dwStart = GetTickCount();
   d = test2(n);
   printf_s("For %d steps, pi = %.15f, %d milliseconds\n", n, d, GetTickCount() - dwStart);

   dwStart = GetTickCount();
   d = test2(n);
   printf_s("For %d steps, pi = %.15f, %d milliseconds\n", n, d, GetTickCount() - dwStart);
}
```

## See also

[MSVC Compiler Options](compiler-options.md) \
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md) \
[OpenMP in MSVC](../../parallel/openmp/openmp-in-visual-cpp.md)
