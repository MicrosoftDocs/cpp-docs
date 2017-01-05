---
title: "How to Report a Problem with the Visual C++ Toolset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: ec24a49c-411d-47ce-aa4b-8398b6d3e8f6
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# How to Report a Problem with the Visual C++ Toolset
If you encounter problems with the Visual C++ compiler, linker, or other tools, we want to know about them.  
  
 The best way to let us know about a problem is to send us a report that includes a description of the problem you've encountered, details about how you're building your program, and some code we can use to reproduce the problem on our own machines. This information lets us quickly verify that the problem exists and is not local to your environment, determine whether it affects other versions of the compiler, and to diagnose its cause.  
  
 In this document, you'll read about  
  
-   [How to prepare your report](#prepare), and what makes a good report.  
  
-   [Ways to send your report](#send), and what makes them different.  
  
-   [How to generate a repro](#generate), and different kinds of repros.  
  
 Your reports are important to us and to other developers like you. Thank you for helping us improve Visual C++!  
  
##  <a name="prepare"></a> How to prepare your report  
 Creating a high-quality report is important because its very difficult to reproduce the problem you encountered on our own machines without complete information. The better your report is, the more effectively we are able recreate and diagnose the problem.  
  
 At a minimum, your report should contain  
  
-   The full version information of the toolset you're using.  
  
-   The full cl.exe command line used to build your code.  
  
-   A detailed description of the problem you encountered.  
  
-   A 'repro'—source code that demonstrates the problem.  
  
 Read on to learn more about the specific information we need and where you can find it.  
  
### The toolset version  
 We need the full version information of the toolset you're using so that we can test your repro against the same toolset on our machines. If we can reproduce the problem, this information also gives us a starting point to investigate which other versions of the toolset exhibit the same problem.  
  
##### To report the full version of the compiler you're using  
  
1.  Press the Windows key on your keyboard and begin typing `Developer Command Prompt`.  
  
2.  Choose the **Developer Command Prompt** version that matches the version of Visual Studio you're using when it appears in the list of matches.  
  
3.  In the **Developer Command Prompt** console, enter the command `cl /Bv /CLR`.  
  
 The output should look similar to this:  
  
```  
C:\Compiler>cl /Bv /CLR  
Microsoft (R) C/C++ Optimizing Compiler Version 18.00.40209  
for Microsoft (R) .NET Framework version 4.00.30319.34014  
Copyright (C) Microsoft Corporation.  All rights reserved.  
  
Compiler Passes:  
 C:\WinCComp\binaries.x86chk\bin\i386\cl.exe:        Version 18.00.40209.0  
 C:\WinCComp\binaries.x86chk\bin\i386\c1.dll:        Version 18.00.40209.0  
 C:\WinCComp\binaries.x86chk\bin\i386\c1xx.dll:      Version 18.00.40209.0  
 C:\WinCComp\binaries.x86chk\bin\i386\c2.dll:        Version 18.00.40209.0  
 C:\WinCComp\binaries.x86chk\bin\i386\link.exe:      Version 12.00.40209.0  
 C:\WinCComp\binaries.x86chk\bin\i386\mspdb120.dll:  Version 12.00.40209.0  
 C:\WinCComp\binaries.x86chk\bin\i386\1033\clui.dll: Version 18.00.40209.0  
 Common Language Runtime:                            Version  4.00.30319.34014  
  
cl : Command line error D8003 : missing source filename   
```  
  
 Copy and paste the entire output into your report.  
  
### The command line  
 We need the full command line (cl.exe and its arguments) used to build your code so that we can build it in exactly the same way on our machines. This is important because the problem you've encountered might only exist when building with a certain argument or combination of arguments.  
  
 The best place to find this information is in the build log immediately after experiencing the problem. This ensures that the command line contains exactly the same arguments that might be contributing to the problem.  
  
##### To report the contents of the command line  
  
1.  Locate the **CL.command.1.tlog** file and open it. By default, this file is located at \\...\Visual Studio Version\Projects\SolutionName\ProjectName\Config\ProjectName.tlog\CL.command.1.tlog.  
  
     Inside this file, you'll find the names of source code files followed by the command line arguments used to compile them, each on separate lines.  
  
2.  Locate the line that contains the name of the source code file where the problem occurs; the line below it contains the corresponding cl.exe command and its arguments.  
  
 Copy and paste the entire command line into your report.  
  
### A description of the problem  
 We need a detailed description of the problem you've encountered so that we can verify that we see the same effect on our machines; its also sometimes useful for us to know what you were trying to accomplish, and what you expected to happen.  
  
 Please provide the precise error messages given by the toolset, a brief description of what you were trying to accomplish to help us understand your repro code, and any other details that might help us diagnose the problem you experienced, such as any work-arounds you might have found. Avoid repeating information found elsewhere in your report.  
  
### The repro  
 We need a repro—a self-contained source code example that demonstrates the problem you've encountered—so that we can reproduce the error on our machines. The kind of problem you encounter will determine what kind of repro you should include in your report. Without an appropriate repro, we have nothing to investigate.  
  
 Short, self-contained repros can be directly included in your report text, but larger source code repros should be attached to the report. Repros that can't be reduced to a single source code file should be packaged by compressing a directory containing all the files into a .zip file or similar and attached to the report. Any additional scenario-specific details should always be included in the report text, never in source code.  
  
 The best kind of repro you can provide us is a *minimal repro*. This is a single, self-contained source code file (without references to user headers) that contains just enough code to demonstrate the problem. If you can provide a repro in this form, just attach the source code file to your report; its all we need.  
  
 If you can't condense the problem to a minimal repro without dependencies, refer to the following sections to determine the kind of repro you should include in your report.  
  
#### Frontend (parser) crash  
 Frontend crashes occur during the parsing phase of the compiler. Typically, the compiler will emit [Fatal Error C1001](error-messages/compiler-errors-1/fatal-error-c1001.md) and reference the source code file and line number on which the error occurred; it will often mention a file msc1.cpp, but you can ignore this detail.  
  
 For this kind of crash, please provide a [Preprocessed Repro](#preprocessed_repro).  
  
 Here's example compiler output for this kind of crash:  
  
```  
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
  
####  <a name="backend_crash"></a> Backend (code generation) crash  
 Backend crashes occur during the code generation phase of the compiler. Typically, the compiler will emit [Fatal Error C1001](error-messages/compiler-errors-1/fatal-error-c1001.md), and might not reference the source code file and line number associated with the problem; it will often mention a file compiler\utc\src\p2\main.c, but you can ignore this detail.  
  
 For this kind of crash please provide a [Link Repro](#link_repro) if you are using Link-Time Code Generation (LTCG) or a [Preprocessed Repro](#preprocessed_repro) if not. LTGC is enabled by the `/GL` command-line argument to cl.exe.  
  
 Here's example compiler output for this kind of crash in which LTCG is **not** used. If your compiler output looks like this you should provide a [Preprocessed Repro](#preprocessed_repro).  
  
```  
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
  
 If the line that begins with **INTERNAL COMPILER ERROR** mentions link.exe, rather than cl.exe, LTCG was enabled and you should provide a [Link Repro](#link_repro). If its not clear whether LTCG was enabled from the compiler error message, you may need to examine the command line arguments that you copied from your build log in a previous step for the `/GL` command-line argument.  
  
#### Linker crash  
 Linker crashes occur during the linking phase, after the compiler has run. Typically, the linker will emit [Linker Tools Error LNK1000](error-messages/tool-errors/linker-tools-error-lnk1000.md).  
  
> [!NOTE]
>  If the output mentions C1001 or involves Link-Time Code Generation, refer to [Backend (code generation) crash](#backend_crash) instead for more information.  
  
 For this kind of crash, please provide a [Link Repro](#link_repro).  
  
 Here's example compiler output for this kind of crash.  
  
```  
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
  
 If incremental linking is enabled and the crash occurred only after initial linking—that is, only after the first full linking on which subsequent incremental linking is based—please also provide a copy of the object (.obj) and library (.lib) files that correspond to source files that were modified after the initial linking was completed.  
  
#### Bad code generation  
 Bad code generation is rare, but occurs when the compiler mistakenly generates incorrect code that will cause your application to crash at runtime rather than detecting this problem at compile-time. If you believe the problem you are experiencing results in bad code generation, treat your report the same as a [Backend (code generation) crash](#backend_crash).  
  
 For this kind of crash please provide a [Link Repro](#link_repro) if you are using Link-Time Code Generation (LTCG) or a [Preprocessed Repro](#preprocessed_repro) if not. LTGC is enabled by the `/GL` command-line argument to cl.exe.  
  
##  <a name="send"></a> Ways to send your report  
 There are several ways to get your report to us. You can file a bug on Microsoft Connect, email us, or use Visual Studio's built-in Report a Problem Tool. The best choice for your report depends on the kind of problem you've encountered, how you want to interact with the engineers who will investigate your report, and whether you'd like to track its progress or share your report with the community.  
  
> [!NOTE]
>  Regardless of how you submit your report, Microsoft respects your privacy. For information about how we treat the data that you send us, see the [Microsoft Visual Studio Product Family Privacy Statement](https://www.visualstudio.com/dn948229).  
  
### File a bug on Microsoft Connect  
 Microsoft Connect ([connect.microsoft.com](http://connect.microsoft.com)) is a way for our user community to connect directly to the teams that build Microsoft products. On Connect you can file new bugs and make feature requests, view other bugs and requests made by the community, and voice which ones are most important to you.  
  
 Reporting your problem through Connect is best when you want share your report with the Visual Studio community and track its progress publicly; by sharing your report, others can sometimes provide work-arounds or additional information that can help us diagnose the problem. You can still use Connect if you want to keep your report private (such as when you can't share the code in your report), just make sure to set the visibility of your report to Private before you submit the form.  
  
-   [Microsoft Connect: Report a problem with Visual Studio 2015 Update 3](https://connect.microsoft.com/VisualStudio/Feedback/LoadSubmitFeedbackForm?FormID=6493)  
  
-   [Microsoft Connect: Report a problem with Visual Studio 2015 Update 2](https://connect.microsoft.com/VisualStudio/Feedback/LoadSubmitFeedbackForm?FormID=6406)  
  
-   [Microsoft Connect: Report a problem with Visual Studio 2015 Update 1](https://connect.microsoft.com/VisualStudio/Feedback/LoadSubmitFeedbackForm?FormID=6326)  
  
-   [Microsoft Connect: Report a problem with Visual Studio 2015](https://connect.microsoft.com/VisualStudio/Feedback/LoadSubmitFeedbackForm?FormID=6240)  
  
 You can report a problem with other Visual Studio and .Net Framework products by locating the product in the drop-down on the [Visual Studio and .NET Framework feedback](https://connect.microsoft.com/VisualStudio/feedback/LoadSubmitFeedbackForm) Connect page.  
  
### Send an Email  
 Email is another way to send your report directly to the Visual C++ team; you can reach us at [compilercrash@microsoft.com](mailto:compilercrash@microsoft.com).  
  
 Reporting your problem through email lacks the rich community of Microsoft Connect, but can sometimes be better for large repros. It can also be the best or only option if your work environment is not connected to the internet or you are otherwise prevented from using Microsoft Connect.  
  
 If you choose to send your report by email, you can use the following template as the body of your email message. Don't forget to attach source code or other files if you aren't including that information in the email body.  
  
```  
To: compilercrash@microsoft.com  
Subject: Visual C++ Error Report  
-----  
  
Compiler version:  
  
CL.EXE command line:  
  
Problem description:  
  
Source code and repro steps:  
  
```  
  
### Use the Report a Problem tool  
 The Report a Problem tool in Visual Studio is a way for Visual Studio users to report a variety of problems with just a few clicks. It provides a simple form that you can use to specify detailed information about the problem you've encountered and then submit your report without ever leaving the IDE.  
  
 Reporting your problem through the Report a Problem tool is unusual for the kinds of toolset problems discussed in this document; nevertheless, its an option you can choose if it suites your preferences.  
  
> [!TIP]
>  For other kinds of problems you might encounter in Visual Studio that are not related to the toolset (For example, UI issues, broken IDE functionality, or general crashes), the Report a Problem tool can be an especially good choice due to its screenshot capabilities and its ability to record UI actions that lead to the problem you've encountered. Microsoft connect can also be a good choice for reporting these other kinds of errors, but lacks the additional capabilities of the Report a Problem tool. You should never report these other kinds of errors by sending email to compilercrash@microsoft.com.  
  
##  <a name="generate"></a> Generating Repros  
 A repro is a complete, self-contained code example, that demonstrates the problem you're reporting. A repro is **not** a code snippet—it must be a complete example that builds and runs (or would, except for the errors produced by the problem you're reporting). It should contain all the necessary #include directives, even for the standard headers.  
  
 Furthermore, a good repro is  
  
-   **Minimal.** Repros should be as small as possible while still demonstrating exactly the problem you encountered. Repros do not need to be complex or realistic—simple, to-the-point repros are better. They do not need to include counter-examples of code that works, but may if it is illustrative; only example code that causes the issue is necessary.  
  
-   **Self-Contained.** Repros should avoid unnecessary dependencies. If you can reproduce the problem without third-party libraries, please do so. If you can reproduce the problem without any library code (`std::out`, `printf()` are ok), please do so. Reducing the amount of code we have to consider as a possible contributor to the problem is enormously helpful to us.  
  
-   **Against the latest compiler version.** Repros should use the latest version of the toolset whenever possible. Problems you might still encounter in older versions of the toolset have very often been fixed in newer versions.  
  
-   **Checked against other compilers**, if relevant. Repros that involve portable C++ code should verify behavior against other compilers if possible.  
  
     This step helps to determine whether your code is correct, as when MSVC disagrees with Clang and GCC, or incorrect, as when MSVC, Clang, and GCC agree that your code produces the error.  
  
 Below are instructions for generating the various kinds of repros you'll use to report different kinds of problems.  
  
###  <a name="preprocessed_repro"></a> Preprocessed repos  
 A preprocessed repro is a single source file that demonstrates a problem and has been generated from the output of the C preprocessor by processing the original source file. This process inlines included headers to remove dependencies on additional source and header files, and also resolves macros, #ifdefs, and other preprocessor commands that could depend your local environment.  
  
> [!NOTE]
>  Note that preprocessed repros are least convenient for problems that might be the result of bugs in our standard library implementation because we will often want to substitute our latest, in-progress implementation to see whether we've already fixed the problem. In this case, don't preprocess the repro, and if you can't reduce the problem to a single source file, package your code into a .zip file or similar, or consider using an IDE project repro (see [Other Repros](#other_repros) below).  
  
##### To preprocess a source code file  
  
1.  Press the Windows key on your keyboard and begin typing `Developer Command Prompt`.  
  
2.  Choose the **Developer Command Prompt** version that matches the version of Visual Studio you're using when it appears in the list of matches.  
  
3.  In the **Developer Command Prompt** console window, enter the command `cl /P argumentsfilename.cpp`.  
  
 After you have the preprocessed file (now filename.i), its a good idea to make sure that the problem still repros using the preprocessed file. You can use the `/TP` command line argument to tell cl.exe to skip the preprocessor step and attempt to compile as usual.  
  
##### To confirm that the error still repros with the preprocessed file  
  
1.  Press the Windows key on your keyboard and begin typing `Developer Command Prompt`.  
  
2.  Choose the **Developer Command Prompt** version that matches the version of Visual Studio you're using when it appears in the list of matches.  
  
3.  In the **Developer Command Prompt** console window, enter the command `cl arguments /TP filename.i`.  
  
4.  Confirm that the problem is reproduced.  
  
 Finally, attach this repro to your report.  
  
###  <a name="link_repro"></a> Link repros  
 A link repro is a single directory containing build artifacts that collectively demonstrate a problem that occurs at link time, such as a backend crash involving Link-Time Code Generation (LTCG), or a linker crash; the included build artifacts are those needed as linker input so that the problem can be reproduced. Link repros can be created easily by using facilities provided by the linker.  
  
##### To generate a link repro:  
  
1.  Open a command prompt and enter the command `mkdir directory` to create a directory for the link repro.  
  
2.  Set the link_repro environment variable to the directory you just created; enter the command `set link_repro=directory`.  
  
3.  If you want to perform the build from inside Visual Studio, launch it from the command prompt by entering the command `devenv`. This ensures that the value of the link_repro environment variable is visible to Visual Studio.  
  
4.  Build your application, and confirm that the expected problem has occurred.  
  
5.  Close Visual Studio now if you launched it in step 3.  
  
6.  Clear the link_repro environment variable; enter the command `set link_repro=`  
  
 Finally, package the repro by compressing the entire directory into a .zip file or similar and attach it to your report.  
  
###  <a name="other_repros"></a> Other repros  
 If you can't reduce the problem to a single source file or preprocessed repro, and the problem does not require a link repro, we can investigate and IDE project. Code inside the project should still be minimal, and all the guidance from this document still applies.  
  
 Create your repro as a minimal IDE project, then package it by compressing the entire directory structure into a .zip file or similar and attach it to your report.