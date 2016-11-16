---
title: "Compiler Error C3920 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3920"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3920"
ms.assetid: 66e91f28-ed82-4ce2-bf22-c0c74905b1ed
caps.latest.revision: 8
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
# Compiler Error C3920
'operator'' : cannot define a postfix increment/decrement WinRT or CLR operator  Calling the postfix WinRT or CLR operator will call the corresponding prefix WinRT or CLR operator (op_Increment/op_Decrement), but with postfix semantics  
  
 The Windows Runtime and CLR do not support the postfix operator and user-defined postfix operators are not allowed.  You can define a prefix operator and the prefix operator will be used for both pre- and post-increment operations.  
  
 The following sample generates C3920 and shows how to fix it:  
  
```  
// C3920.cpp  
// compile with: /clr /LD  
public value struct V {  
   static V operator ++(V me, int)  
   // try the following line instead  
   // static V operator ++(V me)  
   {   // C3920  
      me.m_i++;  
      return me;  
   }  
  
   int m_i;  
};  
  
```