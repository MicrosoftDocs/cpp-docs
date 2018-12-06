---
title: "/Zm (Specify Precompiled Header Memory Allocation Limit)"
ms.date: "11/04/2016"
f1_keywords: ["/zm"]
helpviewer_keywords: ["PCH files, memory allocation limit", "Zm compiler option [C++]", "/Zm compiler option [C++]", "precompiled header files, memory allocation limit", "Specify Precompiled Header Memory Allocation Limit compiler option", "cl.exe compiler, memory allocation limit", ".pch files, memory allocation limit", "memory allocation, Memory Allocation Limit compiler option", "-Zm compiler option [C++]"]
ms.assetid: 94c77d5e-6672-46a7-92e0-3f69e277727d
---
# /Zm (Specify Precompiled Header Memory Allocation Limit)

Determines the amount of memory that the compiler allocates to construct precompiled headers.

## Syntax

```
/Zmfactor
```

## Arguments

*factor*<br/>
A scaling factor that determines the amount of memory that the compiler uses to construct precompiled headers.

The *factor* argument is a percentage of the default size of a compiler-defined work buffer. The default value of *factor* is 100 (percent), but you can specify larger or smaller amounts.

## Remarks

In earlier versions of Visual C++, the compiler used several discrete heaps, and each had a finite limit. Currently, the compiler dynamically grows the heaps as necessary up to a total heap size limit, and requires a fixed-size buffer only to construct precompiled headers. Consequently, the **/Zm** compiler option is rarely necessary.

If the compiler runs out of heap space and emits the [C1060](../../error-messages/compiler-errors-1/fatal-error-c1060.md) error message when you use the **/Zm** compiler option, you might have reserved too much memory. Consider removing the **/Zm** option. If the compiler emits the [C1076](../../error-messages/compiler-errors-1/fatal-error-c1076.md) error message, an accompanying [C3859](../../error-messages/compiler-errors-2/compiler-error-c3859.md) message specifies the *factor* argument to use when you recompile by using the **/Zm** compiler option.

The following table shows how the *factor* argument affects the memory allocation limit if you assume the size of the default precompiled header buffer is 75 MB.

|Value of *factor*|Memory allocation limit|
|-----------------------|-----------------------------|
|10|7.5 MB|
|100|75 MB|
|200|150 MB|
|1000|750 MB|
|2000|1500 MB|

## Other Ways to Set the Memory Allocation Limit

#### To set the /Zm compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../working-with-project-properties.md).

1. In the navigation pane, select **Configuration Properties**, **C/C++**, **Command Line**.

1. Enter the **/Zm** compiler option in the **Additional Options** box.

#### To set the /Zm compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See Also

[Compiler Options](compiler-options.md)<br/>
[Setting Compiler Options](setting-compiler-options.md)