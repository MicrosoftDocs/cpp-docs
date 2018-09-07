---
title: "C Runtime Error R6017 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["R6017"]
dev_langs: ["C++"]
helpviewer_keywords: ["R6017"]
ms.assetid: df3ec5f5-6771-4648-ba06-0e26c6a1cc6a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# C Runtime Error R6017
unexpected multithread lock error  
  
> [!NOTE]
>  If you encounter this error message while running an app, the app was shut down because it has an internal problem. There are several possible reasons for this error, but often it's caused by a defect in the app's code.  
>   
>  You can try these steps to fix this error:  
>   
>  -   Use the **Apps and Features** or **Programs and Features** page in the **Control Panel** to repair or reinstall the program.  
> -   Check **Windows Update** in the **Control Panel** for software updates.  
> -   Check for an updated version of the app. Contact the app vendor if the problem persists.  
  
 **Information for Programmers**  
  
 The process received an unexpected error while trying to access a C runtime multithread lock on a system resource. This error usually occurs if the process inadvertently alters the runtime heap data. However, it can also be caused by an internal error in the runtime library or operating-system code.  
  
 To fix this issue, check for heap corruption bugs in your code. For more information and examples, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details). Next, check that you are using the latest redistributables for your app deployment. For information, see [Deployment in Visual C++](../../ide/deployment-in-visual-cpp.md).