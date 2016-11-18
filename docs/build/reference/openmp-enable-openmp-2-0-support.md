---
title: "-openmp (Enable OpenMP 2.0 Support) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/openmp"
  - "VC.Project.VCCLCompilerTool.OpenMP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/openmp compiler option [C++]"
  - "-openmp compiler option [C++]"
ms.assetid: 9082b175-18d3-4378-86a7-c0eb95664e13
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# /openmp (Enable OpenMP 2.0 Support)
Causes the compiler to process `#pragma`[omp](../../preprocessor/omp.md).  
  
## Syntax  
  
```  
/openmp  
```  
  
## Remarks  
 `#pragma omp` is used to specify [Directives](../../parallel/openmp/reference/openmp-directives.md) and [Clauses](../../parallel/openmp/reference/openmp-clauses.md). If **/openmp** is not specified in a compilation, the compiler ignores OpenMP clauses and directives. [OpenMP Function](../../parallel/openmp/reference/openmp-functions.md) calls are processed by the compiler even if **/openmp** is not specified.  
  
 An application compiled with **/openmp** and using the [Libraries](../../parallel/openmp/reference/openmp-libraries.md) can only be run on Windows 2000 or later operating systems.  
  
 Applications compiled with **/openmp** and **/clr** can only be run in a single application domain process; multiple application domains are not supported. That is, when the module constructor (.cctor) is run, it will detect the process is compiled with **/openmp** and if the application is being loaded into a non-default runtime. For more information, see [appdomain](../../cpp/appdomain.md), [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md), and [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md).  
  
 If you attempt to load an application compiled with **/openmp** and **/clr** into a non-default application domain, a <xref:System.TypeInitializationException> exception will be thrown outside the debugger and a OpenMPWithMultipleAppdomainsException exception will be thrown in the debugger.  
  
 These exceptions can also be raised in the following situations:  
  
-   If your application compiled with **/clr**, but not with **/openmp**, is loaded into a non-default application domain but where the process includes an application that was compiled with **/openmp**.  
  
-   If you pass your **/clr** application to a utility, such as regasm.exe ([Regasm.exe (Assembly Registration Tool)](http://msdn.microsoft.com/Library/e190e342-36ef-4651-a0b4-0e8c2c0281cb)), which loads its target assemblies into a non-default application domain.  
  
 The common language runtime's code access security doesn’t work in OpenMP regions. If you apply a CLR code access security attribute outside a parallel region, it won't be in effect in the parallel region.  
  
 Microsoft advises that you do not write **/openmp** applications that allows partially trusted callers, using <xref:System.Security.AllowPartiallyTrustedCallersAttribute>, or any CLR code access security attributes.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **C/C++** node.  
  
4.  Select the **Language** property page.  
  
5.  Modify the **OpenMP Support** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.OpenMP%2A>.  
  
## Example  
 The following sample shows some of the effects of threadpool startup versus using the threadpool after it started up. Assuming an x64, single core, dual processor the threadpool takes about 16ms to startup. After that though there is very little cost for the threadpool.  
  
 When you compile with **/openmp**, the second call to test2 never runs any longer than if you compile with **/openmp-**, as there is no threadpool startup. At a million iterations the **/openmp** version is faster than the **/openmp-** version for the second call to test2, and at 25 iterations both **/openmp-** and **/openmp** versions register less than the clock granularity.  
  
 So if you have only one loop in your application and it runs in less than 15ms (adjusted for the approximate overhead on your machine), **/openmp** may not be appropriate, but if it's anything more than that, you may want to consider using **/openmp**.  
  
```  
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
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)