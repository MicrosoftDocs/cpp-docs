---
title: "__ud2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["__ud2"]
dev_langs: ["C++"]
helpviewer_keywords: ["UD2 instruction", "__ud2 intrinsic"]
ms.assetid: 0831cd5a-8b65-402e-bb57-11e1d5d7ffd2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# __ud2
**Microsoft Specific**  
  
 Generates an undefined instruction.  
  
## Syntax  
  
```  
void __ud2();  
```  
  
## Remarks  
 The processor raises an invalid opcode exception if you execute an undefined instruction.  
  
 The `__ud2` function is equivalent to the `UD2` machine instruction, and is available only in kernel mode. For more information, search for the document, "Intel Architecture Software Developer's Manual, Volume 2: Instruction Set Reference," at the [Intel Corporation](https://software.intel.com/en-us/articles/intel-sdm) site.  
  
## Requirements  
  
|Intrinsic|Architecture|  
|---------------|------------------|  
|`__ud2`|x86, x64|  
  
 **Header file** \<intrin.h>  
  
**END Microsoft Specific**  
  
## Example  
 The following example executes an undefined instruction, which raises an exception. The exception handler then changes the return code from zero to one.  
  
```  
// __ud2_intrinsic.cpp  
#include <stdio.h>  
#include <intrin.h>  
#include <excpt.h>  
// compile with /EHa  
  
int main() {  
  
// Initialize the return code to 0.  
 int ret = 0;  
  
// Attempt to execute an undefined instruction.  
  printf("Before __ud2(). Return code = %d.\n", ret);  
  __try {   
  __ud2();   
  }  
  
// Catch any exceptions and set the return code to 1.  
  __except(EXCEPTION_EXECUTE_HANDLER){  
  printf("  In the exception handler.\n");  
  ret = 1;  
  }  
  
// Report the value of the return code.   
  printf("After __ud2().  Return code = %d.\n", ret);  
  return ret;  
}  
```  
  
```Output  
Before __ud2(). Return code = 0.  
  In the exception handler.  
After __ud2().  Return code = 1.  
```  
  
## See Also  
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)