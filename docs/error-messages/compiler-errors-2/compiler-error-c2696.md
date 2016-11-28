---
title: "Compiler Error C2696 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2696"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2696"
ms.assetid: 6c6eb7df-1230-4346-9a73-abf14c20785d
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
# Compiler Error C2696
Cannot create a temporary object of a managed type 'type'  
  
References to `const` in an unmanaged program cause the compiler to call the constructor and create a temporary object on the stack. However, a managed class can never be created on the stack.  
  
C2696 is only reachable using the obsolete compiler option **/clr:oldSyntax**.  
