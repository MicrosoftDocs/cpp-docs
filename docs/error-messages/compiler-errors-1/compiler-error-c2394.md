---
title: "Compiler Error C2394 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2394"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2394"
ms.assetid: 653fa9a0-29b3-48aa-bc01-82f98f717a2b
caps.latest.revision: 12
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
# Compiler Error C2394
'your_type::operator'op'" : CLR or WinRToperator not valid. At least one parameter must be of the following types: 'T^', 'T^%', 'T^&', where T = 'your_type'  
  
 An operator in a Windows Runtime or managed type did not have at least one parameter whose type is the same as the type of the operator return value.  
  
 The following sample generates C2394:  
  
```  
// C2394.cpp  
// compile with: /clr /c  
ref struct Y {  
   static Y^ operator -(int i, char c);   // C2394  
  
   // OK  
   static Y^ operator -(Y^ hY, char c);  
   // or  
   static Y^ operator -(int i, Y^& rhY);  
};  
```