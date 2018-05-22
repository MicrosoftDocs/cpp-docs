---
title: "Compiler Error C3183 | Microsoft Docs"
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
  - "C3183"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3183"
ms.assetid: dbd0f020-c739-43c9-947e-9ce21537331b
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3183
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3183](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3183).  
  
  
cannot define unnamed class, struct or union inside of managed or WinRT type 'type'  
  
 A type that is embedded in a managed or WinRT type must be named.  
  
 The following sample generates C3183:  
  
```  
// C3183a.cpp  
// compile with: /clr /c  
ref class Test  
{  
   ref class  
   {  // C3183, delete class or name it  
      int a;  
      int b;  
   };  
};  
```  
  
 The following sample generates C3183:  
  
```  
// C3183b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc class Test  
{  
   __gc class  
   {  // C3183, delete class or name it  
      int a;  
      int b;  
   };  
};  
  
int main()  
{  
}  
```

