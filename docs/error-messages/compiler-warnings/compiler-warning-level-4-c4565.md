---
title: "Compiler Warning (level 4) C4565 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4565"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4565"
ms.assetid: a71f1341-a4a1-4060-ad1e-9322531883ed
caps.latest.revision: 6
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
# Compiler Warning (level 4) C4565
'function' : redefinition; the symbol was previously declared with __declspec(modifier)  
  
 A symbol was redefined or redeclared and the second definition or declaration, unlike the first definition or declaration, did not have a `__declspec` modifier (***modifier***). This warning is informational. To fix this warning, delete one of the definitions.  
  
 The following sample generates C4565:  
  
```  
// C4565.cpp  
// compile with: /W4 /LD  
__declspec(noalias) void f();  
void f();   // C4565  
```