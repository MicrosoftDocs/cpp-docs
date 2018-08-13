---
title: "Cleaning up Resources | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["termination handlers [C++], cleaning up resources", "exception handling [C++], cleaning up resources", "C++ exception handling, termination handlers", "resources [C++], cleaning up", "exception handling [C++], cleanup code", "try-catch keyword [C++], termination handlers"]
ms.assetid: 65753efe-6a27-4750-b90c-50635775c1b6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Cleaning up Resources
During termination-handler execution, you may not know which resources are actually allocated before the termination handler was called. It is possible that the **__try** statement block was interrupted before all resources were allocated, so that not all resources were opened.  
  
 Therefore, to be safe, you should check to see which resources are actually open before proceeding with termination-handling cleanup. A recommended procedure is to:  
  
1.  Initialize handles to NULL.  
  
2.  In the **__try** statement block, allocate resources. Handles are set to positive values as the resource is allocated.  
  
3.  In the **__finally** statement block, release each resource whose corresponding handle or flag variable is nonzero or not NULL.  
  
## Example  
 For example, the following code uses a termination handler to close three files and a memory block that were allocated in the **__try** statement block. Before cleaning up a resource, the code first checks to see if the resource was allocated.  
  
```cpp 
// exceptions_Cleaning_up_Resources.cpp  
#include <stdlib.h>  
#include <malloc.h>  
#include <stdio.h>  
#include <windows.h>  
  
void fileOps() {  
   FILE  *fp1 = NULL,  
         *fp2 = NULL,  
         *fp3 = NULL;  
   LPVOID lpvoid = NULL;  
   errno_t err;  
  
   __try {  
      lpvoid = malloc( BUFSIZ );  
  
      err = fopen_s(&fp1, "ADDRESS.DAT", "w+" );  
      err = fopen_s(&fp2, "NAMES.DAT", "w+" );  
      err = fopen_s(&fp3, "CARS.DAT", "w+" );  
   }  
   __finally {  
      if ( fp1 )  
         fclose( fp1 );  
      if ( fp2 )  
         fclose( fp2 );  
      if ( fp3 )  
         fclose( fp3 );  
      if ( lpvoid )  
         free( lpvoid );  
   }  
}  
  
int main() {  
   fileOps();  
}  
```  
  
## See also  
 [Writing a Termination Handler](../cpp/writing-a-termination-handler.md)   
 [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)