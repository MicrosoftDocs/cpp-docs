---
title: "Compiler Error C3917 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3917"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3917"]
ms.assetid: a24cd0c9-262f-46e5-9488-1c01f945933d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3917
'*property*': obsolete construct declaration style  
  
A property or event definition used syntax from a version before Visual Studio 2005.  
  
For more information, see [property](../../windows/property-cpp-component-extensions.md).  
  
## Example  
  
```cpp  
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