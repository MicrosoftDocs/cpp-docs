---
title: "Compiler Error C2396 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2396"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2396"
ms.assetid: 1b515ef6-7af4-400f-b4ed-564313ea15f6
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
# Compiler Error C2396
'your_type::operator'type'' : CLR or WinRT user-defined conversion functionnot valid. Must either convert from or convert to: 'T^', 'T^%', 'T^&', where T = 'your_type'  
  
 A conversion function in a Windows Runtime or managed type did not have at least one parameter whose type is the same as the type containing the conversion function.  
  
 The following sample generates C2396 and shows how to fix it:  
  
```  
// C2396.cpp  
// compile with: /clr /c  
  
ref struct Y {  
   static operator int(char c);   // C2396  
  
   // OK  
   static operator int(Y^ hY);  
   // or  
   static operator Y^(char c);  
};  
```