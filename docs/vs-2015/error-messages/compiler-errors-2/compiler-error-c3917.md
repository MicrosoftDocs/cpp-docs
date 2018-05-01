---
title: "Compiler Error C3917 | Microsoft Docs"
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
  - "C3917"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3917"
ms.assetid: a24cd0c9-262f-46e5-9488-1c01f945933d
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3917
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3917](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3917).  
  
  
property': obsolete construct declaration style  
  
 A property or event definition used syntax from a previous version.  
  
 If you want to use syntax from a previous version, use [/clr:oldSyntax](../../build/reference/clr-common-language-runtime-compilation.md).  
  
 For more information, see [property](../../windows/property-cpp-component-extensions.md).  
  
## Example  
  
```  
// C3917.cpp  
// compile with: /clr /c  
public ref class  C {  
private:  
   int m_length;  
public:  
   C() {  
      m_length = 0;  
   }  
  
   property int get_Length();   // C3917  
  
   // The correct property definition:  
   property int Length {  
      int get() {  
         return m_length;  
      }  
  
      void set( int i ) {  
         m_length = i;  
      }  
   }  
};  
```

