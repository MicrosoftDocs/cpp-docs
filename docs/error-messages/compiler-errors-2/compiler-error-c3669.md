---
title: "Compiler Error C3669 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3669"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3669"
ms.assetid: be9c7ae4-e96f-47ab-922a-39a3537d5ca6
caps.latest.revision: 10
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
# Compiler Error C3669
'member' : override specifier 'override' not allowed on static member functions or constructors  
  
 An override was specified incorrectly. For more information, see [Explicit Overrides](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3669.  
  
```  
// C3669.cpp  
// compile with: /clr  
public ref struct R {  
   R() override {}   // C3669  
};  
```