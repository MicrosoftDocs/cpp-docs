---
title: "Compiler Warning (level 1) C4286 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4286"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4286"]
ms.assetid: 93eadd6c-6f36-413b-ba91-c9aa2314685a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4286
'type1' : is caught by base class ('type2') on line number  
  
 The specified exception type is handled by a previous handler. The type for the second catch is derived from the type of the first. Exceptions for a base class catch exceptions for a derived class.  
  
## Example  
  
```  
//C4286.cpp  
// compile with: /W1  
#include <eh.h>  
class C {};  
class D : public  C {};  
int main()  
{  
    try  
    {  
        throw "ooops!";  
    }  
    catch( C ) {}  
    catch( D ) {}  // warning C4286, D is derived from C  
}  
```