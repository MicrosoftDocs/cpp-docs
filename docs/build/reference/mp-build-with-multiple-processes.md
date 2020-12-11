---
description: "Learn more about: /MP (Build with Multiple Processes)"
title: "/MP (Build with Multiple Processes)"
ms.date: "04/08/2019"
f1_keywords: ["VC.Project.VCCLCompilerTool.MultiProcessorCompilation"]
helpviewer_keywords: ["-MP compiler option (C++)", "/MP compiler option (C++)", "MP compiler option (C++)", "cl.exe compiler, multi-process build"]
---
# /MP (Build with Multiple Processes)

The **/MP** option can reduce the total time to compile the source files on the command line. The **/MP** option causes the compiler to create one or more copies of itself, each in a separate process. Then these copies simultaneously compile the source files. Consequently, the total time to build the source files can be significantly reduced.

## Syntax

> **/MP**[*processMax*]

## Arguments

*processMax*<br/>
(Optional) The maximum number of processes that the compiler can create.

The *processMax* argument must range from 1 through 65536. Otherwise, the compiler issues warning message **D9014**, ignores the *processMax* argument, and assumes the maximum number of processes is 1.

If you omit the *processMax* argument, the compiler retrieves the number of [effective processors](#effective_processors) on your computer from the operating system, and creates a process for each processor.

## Remarks

The **/MP** compiler option can significantly reduce build time when you compile many files. To improve build time, the compiler creates up to *processMax* copies of itself, and then uses those copies to compile your source files at the same time. The **/MP** option applies to compilations, but not to linking or link-time code generation. By default the **/MP** option is off.

The improvement in build time depends on the number of processors on a computer, the number of files to compile, and the availability of system resources, such as I/O capacity. Experiment with the **/MP** option to determine the best setting to build a particular project. For advice to help you make that decision, see [Guidelines](#guidelines).

## Incompatible Options and Language Features

The **/MP** option is incompatible with some compiler options and language features. If you use an incompatible compiler option with the **/MP** option, the compiler issues warning **D9030** and ignores the **/MP** option. If you use an incompatible language feature, the compiler issues error [C2813](../../error-messages/compiler-errors-2/compiler-error-c2813.md) then ends or continues depending on the current compiler warning level option.

> [!NOTE]
> Most options are incompatible because if they were permitted, the concurrently executing compilers would write their output at the same time to the console or to a particular file. As a result, the output would intermix and be garbled. In some cases, the combination of options would make the performance worse.

The following table lists compiler options and language features that are incompatible with the **/MP** option:

|Option or Language Feature|Description|
|--------------------------------|-----------------|
|[#import](../../preprocessor/hash-import-directive-cpp.md) preprocessor directive|Converts the types in a type library into C++ classes, and then writes those classes to a header file.|
|[/E](e-preprocess-to-stdout.md), [/EP](ep-preprocess-to-stdout-without-hash-line-directives.md)|Copies preprocessor output to the standard output (**stdout**).|
|[/Gm](gm-enable-minimal-rebuild.md)|Deprecated. Enables an incremental rebuild.|
|[/showIncludes](showincludes-list-include-files.md)|Writes a list of include files to the standard error (**stderr**).|
|[/Yc](yc-create-precompiled-header-file.md)|Writes a precompiled header file.|

## Diagnostic Messages

If you specify an option or language feature that is incompatible with the **/MP** option, you will receive a diagnostic message. The following table lists the messages and the behavior of the compiler:

|Diagnostic Message|Description|Compiler Behavior|
|------------------------|-----------------|-----------------------|
|**C2813**|The **#import** directive is not compatible with the **/MP** option.|The compilation ends unless a [compiler warning level](compiler-option-warning-level.md) option specifies otherwise.|
|**D9014**|An invalid value is specified for the *processMax* argument.|The compiler ignores the invalid value and assumes a value of 1.|
|**D9030**|The specified option is incompatible with **/MP**.|The compiler ignores the **/MP** option.|

## <a name="guidelines"></a> Guidelines

### Measure Performance

Use total build time to measure performance. You can measure the build time with a physical clock, or you can use software that calculates the difference between when the build starts and stops. If your computer has multiple processors, a physical clock might yield more accurate results than a software time measurement.

### <a name="effective_processors"></a> Effective Processors

A computer can have one or more virtual processors, which are also known as *effective processors*, for each of its physical processors. Each physical processor can have one or more cores, and if the operating system enables hyperthreading for a core, each core appears to be two virtual processors.

For example, a computer has one effective processor if it has one physical processor that has one core, and hyperthreading is disabled. In contrast, a computer has eight effective processors if it has two physical processors, each of which has two cores, and all the cores have hyperthreading enabled. That is, (8 effective processors) = (2 physical processors) x (2 cores per physical processor) x (2 effective processors per core because of hyperthreading).

If you omit the *processMax* argument in the **/MP** option, the compiler obtains the number of effective processors from the operating system, and then creates one process per effective processor. However, the compiler cannot guarantee which process executes on a particular processor; the operating system makes that decision.

### Number of Processes

The compiler calculates the number of processes that it will use to compile the source files. That value is the lesser of the number of source files that you specify on the command line, and the number of processes that you explicitly or implicitly specify with the **/MP** option. You can explicitly set the maximum number of processes if you provide the *processMax* argument of the **/MP** option. Or you can use the default, which is equal to the number of effective processors in a computer, if you omit the *processMax* argument.

For example, suppose you specify the following command line:

`cl /MP7 a.cpp b.cpp c.cpp d.cpp e.cpp`

In this case the compiler uses five processes because that is the lesser of five source files and a maximum of seven processes. Alternatively, suppose your computer has two effective processors and you specify the following command line:

`cl /MP a.cpp b.cpp c.cpp`

In this case the operating system reports two processors; therefore, the compiler uses two processes in its calculation. As a result, the compiler will execute the build with two processes because that is the lesser of two processes and three source files.

### Source Files and Build Order

The source files might not be compiled in the same order in which they appear on the command line. Although the compiler creates a set of processes that contain copies of the compiler, the operating system schedules when each process executes. Consequently, you cannot guarantee that the source files will be compiled in a particular order.

A source file is compiled when a process is available to compile it. If there are more files than processes, the first set of files is compiled by the available processes. The remaining files are processed when a process finishes handling a previous file and is available to work on one of the remaining files.

Do not specify the same source file multiple times on a command line. This might occur, for example, if a tool automatically creates a [makefile](contents-of-a-makefile.md) that is based on dependency information in a project. If you do not specify the **/MP** option, the compiler processes the list of files sequentially and recompiles each occurrence of the file. However, if you specify the **/MP** option, different compilers might compile the same file at the same time. Consequently, the different compilers will try to write to the same output file at the same time. One compiler will acquire exclusive write access to the output file and succeed, and the other compilers will fail with a file access error.

### Using Type Libraries (#import)

The compiler does not support the use of the [#import](../../preprocessor/hash-import-directive-cpp.md) directive with the **/MP** switch. If possible, follow these steps to work around this problem:

- Move all the `#import` directives in your various source files to one or more files, and then compile those files without the **/MP** option. The result is a set of generated header files.

- In your remaining source files, insert [#include](../../preprocessor/hash-include-directive-c-cpp.md) directives that specify the generated headers, and then compile your remaining source files by using the **/MP** option.

### Visual Studio Project Settings

#### The MSBUILD.exe Tool

Visual Studio uses the [MSBuild.exe](/visualstudio/msbuild/msbuild-reference) tool to build solutions and projects. The **/maxcpucount:**_number_ (or **/m:**_number_) command-line option of the MSBuild.exe tool can build multiple projects at the same time. And the **/MP** compiler option can build multiple compilation units at the same time. If it is appropriate for your application, improve your solution's build time by using either or both **/MP** and **/maxcpucount**.

The build time of your solution partly depends on the number of processes that perform the build. The *number* argument of the [/maxcpucount](/visualstudio/msbuild/msbuild-command-line-reference) MSBuild option specifies the maximum number of projects to build at the same time. Similarly, the *processMax* argument of the **/MP** compiler option specifies the maximum number of compilation units to build at the same time. If the **/maxcpucount** option specifies *P* projects and the **/MP** option specifies *C* processes, a maximum of *P* x *C* processes execute at the same time.

The guideline for deciding whether to use MSBuild or **/MP** technology is as follows:

- If there are many projects with few files in each project, use the MSBuild tool.

- If there are few projects with many files in each project, use the **/MP** option.

- If the number of projects and files per project is balanced, use both MSBuild and **/MP**. Initially set the **/maxcpucount** option to the number of projects to build and the **/MP** option to the number of processors on your computer. Measure performance and then adjust your settings to yield the best results. Repeat that cycle until you are satisfied with the total build time.

## See also

[#import Directive](../../preprocessor/hash-import-directive-cpp.md)<br/>
[Command-Line Reference](/visualstudio/msbuild/msbuild-command-line-reference)<br/>
[/Zf (Faster PDB generation)](zf.md)<br/>
