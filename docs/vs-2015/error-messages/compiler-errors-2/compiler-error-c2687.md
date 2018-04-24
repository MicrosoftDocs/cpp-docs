---
title: "Compiler Error C2687 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2687"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2687"
ms.assetid: 1d24b24a-cd0f-41cc-975c-b08dcfb7f402
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2687
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2687](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2687).  
  
  
type' : exception-declaration cannot be 'void' or denote an incomplete type or pointer or reference to an incomplete type  
  
 For a type to be part of an exception declaration, it must be defined and not void.  
  
 The following sample generates C2687:  
  
```  
// C2687.cpp  
class C;  
  
int main() {  
   try {}  
   catch (C) {}   // C2687 error  
}  
```  
  
 Possible resolution:  
  
```  
// C2687b.cpp  
// compile with: /EHsc  
class C {};  
  
int main() {  
   try {}  
   catch (C) {}  
}  
```

