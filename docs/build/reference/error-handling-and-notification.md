---
title: "Error Handling and Notification | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["error handling, and notification"]
ms.assetid: b621cf60-d869-451a-b05e-dc86d78addaa
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Error Handling and Notification
For more information on error handling and notification, see [Understanding the Helper Function](understanding-the-helper-function.md).  
  
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