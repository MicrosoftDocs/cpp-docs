---
title: "Compiler Error C3142 | Microsoft Docs"
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
  - "C3142"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3142"
ms.assetid: 795137ad-d00a-4a9c-9665-0cd8bfb5da8b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3142
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3142](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3142).  
  
  
property_name' : you cannot take the address of a property  
  
 The address of a property is not available to the developer.  
  
 The following sample generates C3142:  
  
```  
// C3142_2.cpp  
// compile with: /clr  
using namespace System;  
ref class CSize {  
private:  
   property int Size {  
      int get();  
   }  
};  
  
int main() {  
    &CSize::Size; // C3142  
}  
```  
  
 The following sample generates C3142:  
  
```  
// C3142.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__gc class CSize  
{  
   __property int get_Size();  
};  
  
int main()  
{  
   &CSize::Size;   // C3142  
}  
```

