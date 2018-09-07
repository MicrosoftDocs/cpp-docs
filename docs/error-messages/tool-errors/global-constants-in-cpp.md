---
title: "Global Constants in C++ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["global constants", "constants, global"]
ms.assetid: df5a9bd4-d0a8-4c1c-956e-b481d0bded7d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Global Constants in C++
C++ global constants have static linkage. This is different than C. If you try to use a global constant in C++ in multiple files you get an unresolved external error. The compiler optimizes global constants out, leaving no space reserved for the variable.  
  
 One way to resolve this error is to include the const initializations in a header file and include that header in your CPP files when necessary, just as if it was function prototype. Another possibility is to make the variable non-constant and use a constant reference when assessing it.  
  
 The following sample generates C2019:  
  
```  
// global_constants.cpp  
// LNK2019 expected  
void test(void);  
const int lnktest1 = 0;  
  
int main() {  
   test();  
}  
```  
  
 And then,  
  
```  
// global_constants_2.cpp  
// compile with: global_constants.cpp  
extern int lnktest1;  
  
void test() {  
  int i = lnktest1;   // LNK2019  
}  
```  
  
## See Also  
 [Linker Tools Error LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)