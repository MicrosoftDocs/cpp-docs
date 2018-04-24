---
title: "operator new (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_location: 
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr110.dll"
  - "msvcr120.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "operator new"
  - "scalar new"
ms.assetid: 4ae51618-a4e6-4172-b324-b99d86d1bdca
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# operator new (CRT)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [operator new (CRT)](https://docs.microsoft.com/cpp/c-runtime-library/operator-new-crt).  
  
Allocates block of memory from heap  
  
## Syntax  
  
```  
  
      void *__cdecl operator new(  
   size_t count  
);  
void *__cdecl operator new(  
   size_t count,   
   void * object  
) throw();  
void *__cdecl operator new(  
   size_t count,   
   const std::nothrow_t&  
) throw();  
```  
  
#### Parameters  
 *count*  
 The size of the allocation.  
  
 *object*  
 A pointer to a block of memory in which the object will be created.  
  
## Return Value  
 A pointer to the lowest byte address of the newly allocated storage.  
  
## Remarks  
 This form of `operator new` is known as scalar new, in contrast to the vector new form ([operator new&#91;&#93;](../c-runtime-library/new-operator-crt.md)).  
  
 The first form of this operator is known as the nonplacement form. The second form of this operator is known as the placement form and the third form of this operator is the nonthrowing, placement form.  
  
 The first form of the operator is defined by the compiler and does not require new.h to be included in your program.  
  
 [operator delete](../c-runtime-library/operator-delete-crt.md) frees memory allocated with `operator new`.  
  
 You can configure whether operator new returns null or throws an exception on failure. See [The new and delete Operators](../cpp/new-and-delete-operators.md) for more information.  
  
 With the exception of throwing or no-throwing behavior, the CRT `operator new` behaves like [operator new](http://msdn.microsoft.com/library/2476d0f9-59df-485c-981e-ba9f7ee83507) in the Standard C++ Library.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|**new**|\<new.h>|  
  
 For additional compatibility information, see [Compatibility](../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../c-runtime-library/crt-library-features.md).  
  
## Example  
 The following shows how to use the scalar, nonplacement form of `operator new`.  
  
```  
// crt_new1.cpp  
#include <stdio.h>  
int main() {  
   int * i = new int(6);  
   printf("%d\n", *i);  
   delete i;  
}  
```  
  
 The following shows how to use the scalar, placement form of `operator new`.  
  
```  
// crt_new2.cpp  
#include <stdio.h>  
#include <new.h>  
int main() {  
   int * i = new int(12);  
   printf("*i = %d\n", *i);  
   // initialize existing memory (i) with, in this case, int(7)  
   int * j = new(i) int(7);   // placement new  
   printf("*j = %d\n", *j);  
   printf("*i = %d\n", *i);  
   delete i;   // or, could have deleted j  
}  
```  
  
 The following shows how to use the scalar, placement, no-throw form of `operator new`.  
  
```  
// crt_new3.cpp  
#include <stdio.h>  
#include <new.h>  
int main() {  
   // allocates memory, initialize (8) and if call fails, new returns null  
   int * k = new(std::nothrow) int(8);   // placement new  
   printf("%d\n", *k);  
   delete k;  
}  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Memory Allocation](../c-runtime-library/memory-allocation.md)





