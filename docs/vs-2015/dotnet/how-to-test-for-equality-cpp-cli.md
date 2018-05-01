---
title: "How to: Test for Equality (C++-CLI) | Microsoft Docs"
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
  - "equality, testing for"
ms.assetid: 9115e298-9f75-452d-bdfb-6eeb0fa0b3c6
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Test for Equality (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Test for Equality (C++/CLI)](https://docs.microsoft.com/cpp/dotnet/how-to-test-for-equality-cpp-cli).  
  
  
In the following sample, a test for equality that uses Managed Extensions for C++ is based on what the handles refer to.  
  
## Example  
  
```  
// mcppv2_equality_test.cpp  
// compile with: /clr /LD  
using namespace System;  
  
bool Test1() {  
   String ^ str1 = "test";  
   String ^ str2 = "test";  
   return (str1 == str2);  
}  
```  
  
 The IL for this program shows that the return value is implemented by using a call to op_Equality.  
  
```  
IL_0012:  call       bool [mscorlib]System.String::op_Equality(string,  
                                                               string)  
```  
  
## See Also  
 [Managed Types (C++/CLI)](../dotnet/managed-types-cpp-cli.md)

