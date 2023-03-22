---
title: "How to report a problem with the Microsoft C++ toolset"
description: How to create a good problem report and repro information for the Microsoft C++ toolset.
ms.date: "09/24/2019"
ms.technology: "cpp-ide"
author: "tylermsft"
ms.author: "twhitney"
---
# How to report a problem with the Microsoft C++ toolset or documentation

If you find problems in the Microsoft C++ compiler (MSVC), the linker, or other tools and libraries, we want to know about them. When the issue is in our documentation, we want to know about that, too.

## How to report a C++ toolset issue

The best way to let us know about a problem is to send us a report that includes a description of the problem you've discovered. It should have all the details about how you build your program. And it should include a *repro*, a complete test case we can use to reproduce the problem on our own machines. This information lets us quickly verify that the problem exists in our code and isn't local to your environment. It helps us determine whether it affects other versions of the compiler, and to diagnose its cause.

In the sections below, you'll read about what makes a good report. We describe how to generate a repro for the kind of issue you've found, and how to send your report to the product team. Your reports are important to us and to other developers like you. Thank you for helping us improve Microsoft C++!

## How to prepare your report

It's important to create a high-quality report, because it's difficult for us to reproduce the problem you found without complete information. The better your report is, the more effectively we can recreate and diagnose the problem.

At a minimum, your report should contain:

- The full version information of the toolset you're using.

- The full cl.exe command line used to build your code.

- A detailed description of the problem you found.

- A repro: a complete, simplified, self-contained source code example that demonstrates the problem.

Read on to learn more about the specific information we need and where you can find it, and how to create a good repro.

### The toolset version

We need the full version information and the target architecture of the toolset that causes the problem. That's so we can test your repro against the same toolset on our machines. If we can reproduce the problem, this information also gives us a starting point to investigate which other versions of the toolset have the same problem.

#### To report the full version of your compiler

1. Open the **Developer Command Prompt** that matches the Visual Studio version and configuration architecture used to build your project. For example, if you build by using Visual Studio 2017 on x64 for x64 targets, choose **x64 Native Tools Command Prompt for VS 2017**. For more information, see [Developer command prompt shortcuts](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts).

1. In the developer command prompt console window, enter the command **cl /Bv**.

The output should look similar to:

```Output
C:\Users\username\Source>cl /Bv
Microsoft (R) C/C++ Optimizing Compiler Version 19.14.26428.1 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

Compiler Passes:
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\cl.exe:        Version 19.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\c1.dll:        Version 19.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\c1xx.dll:      Version 19.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\c2.dll:        Version 19.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\link.exe:      Version 14.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\mspdb140.dll:  Version 14.14.26428.1
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\VC\Tools\MSVC\14.14.26428\bin\HostX86\x86\1033\clui.dll: Version 19.14.26428.1

cl : Command line error D8003 : missing source filename
```

Copy and paste the entire output into your report.

### The command line

We need the exact command line, cl.exe and all of its arguments, used to build your code. That's so we can build it in exactly the same way on our machines. It's important because the problem you've found might only exist when building with a certain argument or combination of arguments.

The best place to find this information is in the build log immediately after you experience the problem. It ensures that the command line contains exactly the same arguments that might contribute to the problem.

#### To report the contents of the command line

1. Locate the **CL.command.1.tlog** file and open it. By default, this file is located in your Documents folder in \\Visual Studio *version*\\Projects\\*SolutionName*\\*ProjectName*\\*Configuration*\\*ProjectName*.tlog\\CL.command.1.tlog, or in your User folder under \\Source\\Repos\\*SolutionName*\\*ProjectName*\\*Configuration*\\*ProjectName*.tlog\\CL.command.1.tlog. It may be in a different location if you use another build system, or if you've changed the default location for your project.

   Inside this file, you'll find the names of your source code files, followed by the command-line arguments used to compile them, each on separate lines.

1. Locate the line that contains the name of the source code file where the problem occurs. The line below it contains the corresponding cl.exe command arguments.

Copy and paste the entire command line into your report.

### A description of the problem

We need a detailed description of the problem you've found. That's so we can verify that we see the same effect on our machines. It's also sometimes useful for us to know what you were trying to accomplish, and what you expected to happen.

A good description provides the **exact error messages** given by the toolset, or the exact runtime behavior you see. We need this information to verify that we've properly reproduced the issue. Include **all** of the compiler output, not just the last error message. We need to see everything that led up to the issue you report. If you can duplicate the issue by using the command-line compiler, that compiler output is preferred. The IDE and other build systems may filter the error messages you see, or only capture the first line of an error message.

If the issue is that the compiler accepts invalid code and doesn't generate a diagnostic, include that in your report.

To report a runtime behavior problem, include an **exact copy** of what the program prints, and what you expect to see. Ideally, you'll embed it in the output statement itself, for example, `printf("This should be 5: %d\n", actual_result);`. If your program crashes or hangs, mention that as well.

Add any other details that might help us diagnose the problem you found, such as any work-arounds you've discovered. Try not to repeat information found elsewhere in your report.

### The repro

A *repro* is a complete, self-contained source code example. It reproducibly demonstrates the problem you've found, hence the name. We need a repro so that we can reproduce the error on our machines. The code should be sufficient by itself to create a basic executable that compiles and runs. Or, that *would* compile and run, if not for the problem you've found. A repro isn't a code snippet. It should have complete functions and classes, and contain all the necessary #include directives, even for the standard headers.

#### What makes a good repro

A good repro is:

- **Minimal.** Repros should be as small as possible yet still demonstrate exactly the problem you found. Repros don't need to be complex or realistic. They only need to show code that conforms to the Standard, or to the documented compiler implementation. For a missing diagnostic, your repro should show the code that's not conformant. Simple, to-the-point repros that contain only enough code to demonstrate the problem are best. If you can eliminate or simplify the code and remain conformant, and also leave the issue unchanged, then do so. You don't need to include counter-examples of code that works.

- **Self-Contained.** Repros should avoid unnecessary dependencies. If you can reproduce the problem without third-party libraries, then do so. If you can reproduce the problem without any library code besides simple output statements (for example, `puts("this shouldn't compile");`, `std::cout << value;`, and `printf("%d\n", value);`), then do so. It's ideal if the example can be condensed to a single source code file, without reference to any user headers. Reducing the amount of code we have to consider as a possible contributor to the problem is enormously helpful to us.

- **Against the latest compiler version.** Repros should use the most recent update to the latest version of the toolset whenever possible. Or, use the most recent prerelease version of the next update or next major release. Problems you may find in older versions of the toolset have often been fixed in newer versions. Fixes are backported to older versions only in exceptional circumstances.

- **Checked against other compilers** if relevant. Repros that involve portable C++ code should verify behavior against other compilers if possible. The C++ standard ultimately determines program correctness, and no compiler is perfect. However, when Clang and GCC accept your code without a diagnostic, and MSVC doesn't, you've probably found a bug in our compiler. (Other possibilities include differences in Unix and Windows behavior, or different levels of C++ standards implementation, and so on.) When all the compilers reject your code, then it's likely that your code is incorrect. Seeing different error messages may help you diagnose the issue yourself.

   You can find lists of online compilers to test your code against in [Online C++ compilers](https://isocpp.org/blog/2013/01/online-c-compilers) on the ISO C++ website, or this curated [List of Online C++ Compilers](https://arnemertz.github.io/online-compilers/) on GitHub. Some specific examples include [Wandbox](https://wandbox.org/) and [Compiler Explorer](https://godbolt.org/).

   > [!NOTE]
   > The online compiler websites are not affiliated with Microsoft. Many online compiler websites are run as personal projects. Some of these sites may be unavailable when you read this, but a search should find others you can use.

Problems in the compiler, linker, and in the libraries, tend to show themselves in particular ways. The kind of problem you find will determine what kind of repro you should include in your report. Without an appropriate repro, we have nothing to investigate. Here are a few of the kinds of issues that you may see. We include instructions on how to generate the kind of repro you should use to report each kind of problem.

#### Frontend (parser) crash

Frontend crashes occur during the parsing phase of the compiler. Typically, the compiler emits [Fatal Error C1001](../error-messages/compiler-errors-1/fatal-error-c1001.md), and references the source code file and line number on which the error occurred. It often mentions a file named msc1.cpp, but you can ignore this detail.

For this kind of crash, provide a [Preprocessed repro](#preprocessed-repros).

Here's example compiler output for this kind of crash:

```Output
SandBoxHost.cpp
d:\o\dev\search\foundation\common\tools\sandbox\managed\managed.h(929):
        fatal error C1001: An internal error has occurred in the compiler.
(compiler file 'msc1.cpp', line 1369)
To work around this problem, try simplifying or changing the program near the
        locations listed above.
Please choose the Technical Support command on the Visual C++
Help menu, or open the Technical Support help file for more information
d:\o\dev\search\foundation\common\tools\sandbox\managed\managed.h(929):
        note: This diagnostic occurred in the compiler generated function
        'void Microsoft::Ceres::Common::Tools::Sandbox::SandBoxedProcess::Dispose(bool)'
Internal Compiler Error in d:\o\dev\otools\bin\x64\cl.exe.  You will be prompted
        to send an error report to Microsoft later.
INTERNAL COMPILER ERROR in 'd:\o\dev\otools\bin\x64\cl.exe'
    Please choose the Technical Support command on the Visual C++
    Help menu, or open the Technical Support help file for more information
```

#### Backend (code generation) crash

Backend crashes occur during the code generation phase of the compiler. Typically, the compiler emits [Fatal Error C1001](../error-messages/compiler-errors-1/fatal-error-c1001.md), and it might not reference the source code file and line number associated with the problem. It often mentions the file compiler\\utc\\src\\p2\\main.c, but you can ignore this detail.

For this kind of crash, provide a [Link repro](#link-repros) if you're using Link-Time Code Generation (LTCG), enabled by the **/GL** command-line argument to cl.exe. If not, provide a [Preprocessed repro](#preprocessed-repros) instead.

Here's example compiler output for a backend crash in which LTCG isn't used. If your compiler output looks like the following, you should provide a [Preprocessed repro](#preprocessed-repros).

```Output
repro.cpp
\\officefile\public\tadg\vc14\comperror\repro.cpp(13) : fatal error C1001:
        An internal error has occurred in the compiler.
(compiler file 'f:\dd\vctools\compiler\utc\src\p2\main.c', line 230)
To work around this problem, try simplifying or changing the program near the
        locations listed above.
Please choose the Technical Support command on the Visual C++
Help menu, or open the Technical Support help file for more information
INTERNAL COMPILER ERROR in
        'C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\BIN\cl.exe'
    Please choose the Technical Support command on the Visual C++
    Help menu, or open the Technical Support help file for more information
```

If the line that begins with **INTERNAL COMPILER ERROR** mentions link.exe, rather than cl.exe, LTCG was enabled. Provide a [Link repro](#link-repros) in this case. When it's not clear whether LTCG was enabled from the compiler error message, examine the command-line arguments. You copied them from your build log, in a previous step for the **/GL** command-line argument.

#### Linker crash

Linker crashes occur during the linking phase, after the compiler has run. Typically, the linker will emit [Linker Tools Error LNK1000](../error-messages/tool-errors/linker-tools-error-lnk1000.md).

> [!NOTE]
> If the output mentions C1001 or involves Link-Time Code Generation, refer to [Backend (code generation) crash](#backend-code-generation-crash) instead.

For this kind of crash, provide a [Link repro](#link-repros).

Here's an example of compiler output for this kind of crash:

```Output
z:\foo.obj : error LNK1000: Internal error during IMAGE::Pass2

  Version 14.00.22816.0

  ExceptionCode            = C0000005
  ExceptionFlags           = 00000000
  ExceptionAddress         = 00007FF73C9ED0E6 (00007FF73C9E0000)
        "z:\tools\bin\x64\link.exe"
  NumberParameters         = 00000002
  ExceptionInformation[ 0] = 0000000000000000
  ExceptionInformation[ 1] = FFFFFFFFFFFFFFFF

CONTEXT:

  Rax    = 0000000000000400  R8     = 0000000000000000
  Rbx    = 000000655DF82580  R9     = 00007FF840D2E490
  Rcx    = 005C006B006F006F  R10    = 000000655F97E690
  Rdx    = 000000655F97E270  R11    = 0000000000000400
  Rsp    = 000000655F97E248  R12    = 0000000000000000
  Rbp    = 000000655F97EFB0  E13    = 0000000000000000
  Rsi    = 000000655DF82580  R14    = 000000655F97F390
  Rdi    = 0000000000000000  R15    = 0000000000000000
  Rip    = 00007FF73C9ED0E6  EFlags = 0000000000010206
  SegCs  = 0000000000000033  SegDs  = 000000000000002B
  SegSs  = 000000000000002B  SegEs  = 000000000000002B
  SegFs  = 0000000000000053  SegGs  = 000000000000002B
  Dr0    = 0000000000000000  Dr3    = 0000000000000000
  Dr1    = 0000000000000000  Dr6    = 0000000000000000
  Dr2    = 0000000000000000  Dr7    = 0000000000000000
```

If incremental linking is enabled, and the crash occurred only after a successful initial link, that is, only after the first full link on which a later incremental link is based, also provide a copy of the object (.obj) and library (.lib) files that correspond to source files modified after the initial link was completed.

#### Bad code generation

Bad code generation is rare. It occurs when the compiler mistakenly generates incorrect code that causes your application to crash at runtime. Instead, it should generate correct code, or detect a problem at compile time. If you believe the problem you've found results in bad code generation, treat your report the same as a [Backend (code generation) crash](#backend-code-generation-crash).

For this kind of crash, provide a [Link repro](#link-repros) if you're using the **/GL** command-line argument to cl.exe. Provide a [Preprocessed repro](#preprocessed-repros) if not.

## How to generate a repro

To help us track down the source of the problem, a [good repro](#what-makes-a-good-repro) is vital. Before you do any of the steps outlined below for specific kinds of repros, try to condense the code that demonstrates the problem as much as possible. Try to eliminate or minimize dependencies, required headers, and libraries. Limit the compiler options and preprocessor definitions used, if possible.

Below are instructions for generating the various kinds of repros you'll use to report different kinds of problems.

### Preprocessed repros

A *Preprocessed repro* is a single source file that demonstrates a problem. It's generated from the output of the C preprocessor. To create one, use the **/P** compiler option on the original repro source file. This option inlines the included headers to remove dependencies on additional source and header files. The option also resolves macros, #ifdef conditionals, and other preprocessor commands that could depend on your local environment.

> [!NOTE]
> Preprocessed repros are not as useful for problems that might be the result of bugs in our standard library implementation, because we will often want to substitute our latest, in-progress implementation to see whether we've already fixed the problem. In this case, don't preprocess the repro, and if you can't reduce the problem to a single source file, package your code into a .zip file or similar, or consider using an IDE project repro. For more information, see [Other repros](#other-repros).

#### To preprocess a source code file

1. Capture the command-line arguments used to build your repro, as described in [To report the contents of the command line](#to-report-the-contents-of-the-command-line).

1. Open the **Developer Command Prompt** that matches the Visual Studio version and configuration architecture used to build your project.

1. Change to the directory that contains your repro project.

1. In the developer command prompt console window, enter the command **cl /P** *arguments* *filename.cpp*. For *arguments*, use the list of arguments you captured above. *filename.cpp* is the name of your repro source file. This command replicates the command line you used for the repro, but stops the compilation after the preprocessor pass. Then it writes the preprocessed source code to *filename.i*.

If you're preprocessing a C++/CX source code file, or you're using the C++ Modules feature, some additional steps are required. For more information, see the sections below.

After you've generated the preprocessed file, it's a good idea to make sure that the problem still repros when you compile the preprocessed file.

#### To confirm the preprocessed file still repros the error

1. In the developer command prompt console window, enter the command **cl** *arguments* **/TP** *filename.i* to tell cl.exe to compile the preprocessed file as a C++ source file. The *arguments* are the same arguments captured above, but with any **/D** and **/I** arguments removed. That's because they've already been included in the preprocessed file. *filename.i* is the name of your preprocessed file.

1. Confirm that the problem is reproduced.

Finally, attach the preprocessed repro *filename*.i to your report.

### Preprocessed C++/CX WinRT/UWP code repros

If you're using C++/CX to build your executable, there are some extra steps required to create and validate a preprocessed repro.

#### To preprocess C++/CX source code

1. Create a preprocessed source file as described in [To preprocess a source code file](#to-preprocess-a-source-code-file).

1. Search the generated _filename_.i file for **#using** directives.

1. Make a list of all of the referenced files. Leave out any Windows\*.winmd files, platform.winmd files, and mscorlib.dll.

To prepare to validate that the preprocessed file still reproduces the problem,

1. Create a new directory for the preprocessed file and copy it to the new directory.

1. Copy the .winmd files from your **#using** list to the new directory.

1. Create an empty vccorlib.h file in the new directory.

1. Edit the preprocessed file to remove any **#using** directives for mscorlib.dll.

1. Edit the preprocessed file to change any absolute paths to just the bare filenames for the copied .winmd files.

Confirm that the preprocessed file still reproduces the problem, as above.

### Preprocessed C++ Modules repros

If you're using the Modules feature of the C++ compiler, there are some different steps required to create and validate a preprocessed repro.

#### To preprocess a source code file that uses a module

1. Capture the command-line arguments used to build your repro, as described in [To report the contents of the command line](#to-report-the-contents-of-the-command-line).

1. Open the **Developer Command Prompt** that matches the Visual Studio version and configuration architecture used to build your project.

1. Change to the directory that contains your repro project.

1. In the developer command prompt console window, enter the command **cl /P** *arguments* *filename.cpp*. The *arguments* are the arguments captured above, and *filename.cpp* is the name of the source file that consumes the module.

1. Change to the directory that contains the repro project that built the module interface (the .ifc output).

1. Capture the command-line arguments used to build your module interface.

1. In the developer command prompt console window, enter the command **cl /P** *arguments* *modulename.ixx*. The *arguments* are the arguments captured above, and *modulename.ixx* is the name of the file that creates the module interface.

After you've generated the preprocessed files, it's a good idea to make sure the problem still repros when you use the preprocessed file.

#### To confirm the preprocessed file still repros the error

1. In the developer console window, change back to the directory that contains your repro project.

1. Enter the command **cl** *arguments* **/TP** *filename*.i as above, to compile the preprocessed file as if it were a C++ source file.

1. Confirm that the problem is still reproduced by the preprocessed file.

Finally, attach the preprocessed repro files (*filename*.i and *modulename*.i) along with the .ifc output to your report.

### Link repros

A *link repro* is the linker-generated contents of a directory, specified either by the **link\_repro** environment variable, or as an argument to the [/LINKREPRO](../build/reference/linkrepro.md) linker option. It contains build artifacts that collectively demonstrate a problem that occurs at link time. Examples include a backend crash involving Link-Time Code Generation (LTCG), or a linker crash. These build artifacts are the ones needed as linker input so the problem can be reproduced. A link repro can be created easily by using this environment variable. It enables the linker's built-in repro generation capability.

#### To generate a link repro using the link_repro environment variable

1. Capture the command-line arguments used to build your repro, as described in [To report the contents of the command line](#to-report-the-contents-of-the-command-line).

1. Open the **Developer Command Prompt** that matches the Visual Studio version and configuration architecture used to build your project.

1. In the developer command prompt console window, change to the directory that contains your repro project.

1. Enter **mkdir linkrepro** to create a directory named *linkrepro* for the link repro. You can use a different name to capture another link repro.

1. Enter the command **set link\_repro=linkrepro** to set the **link\_repro** environment variable to the directory you created. If your build is run from a different directory, as is often the case for more complex projects, then set **link\_repro** to the full path to your link repro directory instead.

1. To build the repro project in Visual Studio, in the developer command prompt console window, enter the command **devenv**. It ensures that the value of the **link\_repro** environment variable is visible to Visual Studio. To build the project at the command line, use the command-line arguments captured above to duplicate the repro build.

1. Build your repro project, and confirm that the expected problem has occurred.

1. Close Visual Studio, if you used it to do the build.

1. In the developer command prompt console window, enter the command **set link\_repro=** to clear the **link\_repro** environment variable.

Finally, package the repro by compressing the entire linkrepro directory into a .zip file or similar, and attach it to your report.

The **/LINKREPRO** linker option has the same effect as the **link\_repro** environment variable. You can use the [/LINKREPROTARGET](../build/reference/linkreprotarget.md) option to specify the name to filter on for the generated link repro. To use **/LINKREPROTARGET**, you must also specify the **/OUT** linker option.

#### To generate a link repro using the /LINKREPRO option

1. Create a directory to hold the link repro. We'll refer to the full directory path you create as _directory-path_. Use double quotes around the path if it includes spaces.

1. Add the **/LINKREPRO:**_directory-path_ command to the linker command line. In Visual Studio, open the **Property Pages** dialog for your project. Select the **Configuration Properties** > **Linker** > **Command Line** property page. Then, enter the **/LINKREPRO:**_directory-path_ option in the **Additional Options** box. Choose **OK** to save your changes.

1. Build your repro project, and confirm that the expected problem has occurred.

Finally, package the repro by compressing the entire _directory-path_ link repro directory into a .zip file or similar, and attach it to your report.

### Other repros

If you can't reduce the problem to a single source file or preprocessed repro, and the problem doesn't require a link repro, we can investigate an IDE project. All the guidance on how to create a good repro still applies: The code ought to be minimal and self-contained. The problem should occur in our most recent tools, and if relevant, shouldn't be seen in other compilers.

Create your repro as a minimal IDE project, then package it by compressing the entire directory structure into a .zip file or similar and attach it to your report.

## Ways to send your report

You have a couple of good ways to get your report to us. You can use Visual Studio's built-in [problem reporting tool](/visualstudio/ide/how-to-report-a-problem-with-visual-studio) or the [Visual Studio Developer Community](https://aka.ms/feedback/report?space=62) page. There's also a **Product feedback** button at the bottom of this page. The choice depends on whether you want to use the built-in tools in the IDE to capture screenshots and organize your report. If you prefer not to, you can use the Developer Community website directly.

> [!NOTE]
> Regardless of how you submit your report, Microsoft respects your privacy. Microsoft is committed to compliance with all data privacy laws and regulations. For information about how we treat the data that you send us, see the [Microsoft Privacy Statement](https://privacy.microsoft.com/privacystatement).

### Use the Report a Problem tool

The **Report a Problem** tool in Visual Studio is a way for Visual Studio users to report problems with just a few clicks. It pops up a simple form to send detailed information about the problem you've found. You can then submit your report without ever leaving the IDE.

Reporting your problem through the **Report a Problem** tool is easy and convenient from the IDE. You can access it from the title bar by choosing the **Send Feedback** icon next to the **Quick Launch** search box. Or, you can find it on the menu bar in **Help** > **Send Feedback** > **Report a Problem**.

When you choose to report a problem, first search the Developer Community for similar problems. In case your problem has been reported before, upvote the report and add comments with additional specifics. If you don't see a similar problem, choose the **Report new problem** button at the bottom of the Visual Studio Feedback dialog and follow the steps to report your problem.

### Use the Visual Studio Developer Community pages

The Visual Studio Developer Community pages are another convenient way to report problems and find solutions for Visual Studio and the C++ compiler, tools, and libraries. There are specific Developer Community pages for [Visual Studio](https://aka.ms/feedback/report?space=8), [Visual Studio for Mac](https://aka.ms/feedback/report?space=41), [.NET](https://aka.ms/feedback/report?space=61), [C++](https://aka.ms/feedback/report?space=62), [Azure DevOps](https://aka.ms/feedback/report?space=21), and [Azure DevOps Server](https://aka.ms/feedback/report?space=22).

Beneath the community tabs, near the top of each page, is a search box. You can use it to find posts that report problems similar to yours. You may find a solution or other useful information related to your problem is already available. If someone has reported the same problem before, then upvote and comment on that report, rather than create a new problem report. To comment, vote, or report a new problem, you may be asked to sign in to your Visual Studio account. The first time you sign in, you'll have to agree to give the Developer Community app access to your profile.

For issues with the C++ compiler, linker, and other tools and libraries, first search the [C++ Developer Community](https://aka.ms/vsfeedback/browsecpp) page. If you search for your problem, and it hasn't been reported before, choose the **Report a problem** button next to the search box. You can include your repro code and command line, screenshots, links to related discussions, and any other information you think is relevant and useful.

> [!TIP]
> For other kinds of problems you might find in Visual Studio that are unrelated to the C++ toolset (For example, UI issues, broken IDE functionality, or general crashes), use the **Report a Problem** tool in the IDE. This is the best choice, due to its screenshot capabilities and its ability to record UI actions that lead to the problem you've found. These kinds of errors can also be looked up on the Visual Studio [Developer Community](https://aka.ms/feedback/report?space=8) site. For more information, see [How to report a problem with Visual Studio](/visualstudio/ide/how-to-report-a-problem-with-visual-studio).

### Reports and privacy

**All information in reports and any comments and replies are publicly visible by default**. Normally, it's a benefit, because it allows the entire community to see the issues, solutions, and workarounds other users have found. However, if you're concerned about making your data or identity public, for privacy or intellectual property reasons, you have options.

If you're concerned about revealing your identity, [create a new Microsoft account](https://signup.live.com/) that doesn't disclose any details about you. Use this account to create your report.

**Don't put anything you want to keep private in the title or content of the initial report, which is public.** Instead, say that you'll send details privately in a separate comment. To make sure that your report is directed to the right people, include **cppcompiler** in the topic list of your problem report. Once the problem report is created, it's now possible to specify who can see your replies and attachments.

#### To create a problem report for private information

1. In the report you created, choose **Add comment** to create your private description of the problem.

1. In the reply editor, use the dropdown control below the **Submit** and **Cancel** buttons to specify the audience for your reply. Only the people you specify can see these private replies and any images, links, or code you include in them. Choose **Viewable by moderators and the original poster** to limit visibility to Microsoft employees and yourself.

1. Add the description and any other information, images, and file attachments needed for your repro. Choose the **Submit** button to send this information privately.

   There's a 2GB limit on attached files, and a maximum of 10 files. For any larger uploads, request an upload URL in your private comment.

Any replies under this comment have the same restricted visibility you specified. It's true even if the dropdown control on replies doesn't show the restricted visibility status correctly.

To maintain your privacy and keep your sensitive information out of public view, be careful. Keep all interaction with Microsoft to replies under the restricted comment. Replies to other comments may cause you to accidentally disclose sensitive information.

## How to report a C++ documentation issue

We use GitHub issues to track problems reported in our documentation. You can now create GitHub issues directly from a content page, which enables you interact in a much richer way with writers and product teams. If you see an issue with a document, a bad code sample, a confusing explanation, a critical omission, or even just a typo, you can easily let us know. Scroll to the bottom of the page and select **Sign in to give documentation feedback**. You'll need to create a GitHub account if you don't have one already. When you have a GitHub account, you can see all of our documentation issues and their status. You also get notifications when changes are made for the issue you reported. For more information, see our [Feedback System blog entry](/teamblog/a-new-feedback-system-is-coming-to-docs).

You create a documentation issue on GitHub when you use the documentation feedback button. The issue is automatically filled in with some information about the page you created the issue on. That's how we know where the problem is located, so don't edit this information. Just append the details about what's wrong, and if you like, a suggested fix. [Our C++ docs are open source](https://github.com/MicrosoftDocs/cpp-docs/), so if you'd like to submit a fix yourself, you can. For more information about how you can contribute to our documentation, see our [Contributing guide](https://github.com/MicrosoftDocs/cpp-docs/blob/master/CONTRIBUTING.md) on GitHub.
