---
title: "/GT (Support Fiber-Safe Thread-Local Storage)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCCLCompilerTool.EnableFiberSafeOptimizations", "/gt"]
helpviewer_keywords: ["/GT compiler option [C++]", "GT compiler option [C++]", "thread-local storage", "static thread-local storage and fiber safety", "-GT compiler option [C++]", "fiber-safe static thread-local storage compiler option [C++]"]
ms.assetid: 071fec79-c701-432b-9970-457344133159
---
# /GT (Support Fiber-Safe Thread-Local Storage)

Supports fiber safety for data allocated using static thread-local storage, that is, data allocated with `__declspec(thread)`.

## Syntax

```
/GT
```

## Remarks

Data declared with `__declspec(thread)` is referenced through a thread-local storage (TLS) array. The TLS array is an array of addresses that the system maintains for each thread. Each address in this array gives the location of thread-local storage data.

A fiber is a lightweight object that consists of a stack and a register context and can be scheduled on various threads. A fiber can run on any thread. Because a fiber may get swapped out and restarted later on a different thread, the address of the TLS array must not be cached or optimized as a common subexpression across a function call (see the [/Og (Global Optimizations)](og-global-optimizations.md) option for details). **/GT** prevents such optimizations.

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Optimization** property page.

1. Modify the **Enable Fiber-safe Optimizations** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.EnableFiberSafeOptimizations%2A>.

## See also

[MSVC Compiler Options](compiler-options.md)<br/>
[MSVC Compiler Command-Line Syntax](compiler-command-line-syntax.md)
