---
title: "Compiler Error C3460 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3460"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3460"
ms.assetid: adbf8775-10ca-4654-acdf-58dd765351cd
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C3460
'type': only a user-defined type can be forwarded  
  
 For more information, see [Type Forwarding (C++/CLI)](../../windows/type-forwarding-cpp-cli.md).  
  
## Example  
 The following sample creates a component.  
  
```  
// C3460.cpp  
// compile with: /LD /clr  
public ref class R {};  
```  
  
## Example  
 The following sample generates C3460.  
  
```  
// C3460_b.cpp  
// compile with: /clr /c  
#using "C3460.dll"  
[assembly:TypeForwardedTo(int::typeid)];   // C3460  
[assembly:TypeForwardedTo(R::typeid)];  
```