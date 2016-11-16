---
title: "Compiler Warning (level 4) C4460 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4460"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4460"
ms.assetid: c97ac1c9-598d-479e-bfff-c993690c4f3d
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Warning (level 4) C4460
WinRT or CLR operator 'operator', has parameter passed by reference. WinRT or CLR operator 'operator' has different semantics from C++ operator 'operator', did you intend to pass by value?  
  
 You passed a value by reference to a user-defined Windows Runtime or CLR operator. If the value is changed inside the function, note that the value returned after the function call will be assigned the return value of the function. In standard C++, the changed value is reflected after the function call.  
  
## Example  
 The following sample generates C4460 and shows how to fix it.  
  
```  
// C4460.cpp  
// compile with: /W4 /clr   
#include <stdio.h>  
  
public value struct V {  
   static V operator ++(V& me) {   // C4460  
   // try the following line instead  
   // static V operator ++(V me) {  
  
      printf_s(__FUNCSIG__ " called\n");  
      V tmp = me;  
      me.m_i++;  
      return tmp;  
   }  
   int m_i;  
};  
  
int main() {  
   V v;  
   v.m_i = 0;  
  
   printf_s("%d\n", v.m_i);   // Should print 0  
   v++;   // Translates to "v = V::operator ++(v)"  
   printf_s("%d\n", v.m_i);   // will print 0, hence the warning  
}  
```