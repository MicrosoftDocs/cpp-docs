---
title: "Error Handling and Notification | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "error handling, and notification"
ms.assetid: b621cf60-d869-451a-b05e-dc86d78addaa
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Error Handling and Notification
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Error Handling and Notification](https://docs.microsoft.com/cpp/build/reference/error-handling-and-notification).  
  
  
For more information on error handling and notification, see [Understanding the Helper Function](http://msdn.microsoft.com/en-us/6279c12c-d908-4967-b0b3-cabfc3e91d3d).  
  
 For more information on hook functions, see [Structure and Constant Definitions](../../build/reference/structure-and-constant-definitions.md).  
  
 If your program uses delay-loaded DLLs, it must handle errors robustly since failures that occur while the program is running will result in unhandled exceptions. Failure handling is comprised of two portions:  
  
 Recovery through a hook.  
 If your code needs to recover or provide an alternate library and/or routine on failure, a hook can be provided to the helper function that can supply or remedy the situation. The hook routine needs to return a suitable value, so that processing can continue (an HINSTANCE or FARPROC) or 0 to indicate that an exception should be thrown. It could also throw its own exception or **longjmp** out of the hook. There are notification hooks and failure hooks.  
  
 Reporting via an exception.  
 If all that is necessary for handling the error is to abort the procedure, no hook is necessary as long as the user code can handle the exception.  
  
 The following topics discuss error handling and notification:  
  
-   [Notification Hooks](../../build/reference/notification-hooks.md)  
  
-   [Failure Hooks](../../build/reference/failure-hooks.md)  
  
-   [Exceptions](../../build/reference/exceptions-c-cpp.md)  
  
## See Also  
 [Linker Support for Delay-Loaded DLLs](../../build/reference/linker-support-for-delay-loaded-dlls.md)

