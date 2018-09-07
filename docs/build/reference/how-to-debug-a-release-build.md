---
title: "How to: Debug a Release Build | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["debugging [C++], release builds", "release builds, debugging"]
ms.assetid: d333e4d1-4e6c-4384-84a9-cb549702da25
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# How to: Debug a Release Build
You can debug a release build of an application.  
  
### To debug a release build  
  
1.  Open the **Property Pages** dialog box for the project. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** node. Set **Debug Information Format** to [C7 compatible (/Z7)](../../build/reference/z7-zi-zi-debug-information-format.md) or **Program Database (/Zi)**.  
  
3.  Expand **Linker** and click the **General** node. Set **Enable Incremental Linking** to [No (/INCREMENTAL:NO)](../../build/reference/incremental-link-incrementally.md).  
  
4.  Select the **Debugging** node. Set **Generate Debug Info** to [Yes (/DEBUG)](../../build/reference/debug-generate-debug-info.md).  
  
5.  Select the **Optimization** node. Set **References** to [/OPT:REF](../../build/reference/opt-optimizations.md) and **Enable COMDAT Folding** to [/OPT:ICF](../../build/reference/opt-optimizations.md).  
  
6.  You can now debug your release build application. To find a problem, step through the code (or use Just-In-Time debugging) until you find where the failure occurs, and then determine the incorrect parameters or code.  
  
     If an application works in a debug build, but fails in a release build, one of the compiler optimizations may be exposing a defect in the source code. To isolate the problem, disable selected optimizations for each source code file until you locate the file and the optimization that is causing the problem. (To expedite the process, you can divide the files into two groups, disable optimization on one group, and when you find a problem in a group, continue dividing until you isolate the problem file.)  
  
     You can use [/RTC](../../build/reference/rtc-run-time-error-checks.md) to try to expose such bugs in your debug builds.  
  
     For more information, see [Optimizing Your Code](../../build/reference/optimizing-your-code.md).  
  
## See Also  
 [Fixing Release Build Problems](../../build/reference/fixing-release-build-problems.md)