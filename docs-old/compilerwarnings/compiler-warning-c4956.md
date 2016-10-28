---
title: "Compiler Warning C4956"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C4956"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4956"
ms.assetid: 9154f2d1-d49f-4e07-90d2-0e9bc028011a
caps.latest.revision: 9
ms.author: "corob"
manager: "douge"
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
# Compiler Warning C4956
'type' : this type is not verifiable  
  
 This warning is generated when [/clr:safe](../buildref/-clr--common-language-runtime-compilation-.md) is specified and your code contains a type that is not verifiable.  
  
 For more information, see [Pure and Verifiable Code (C++/CLI)](../cli/pure-and-verifiable-code--c---cli-.md).  
  
 This warning is issued as an error and can be disabled with the [warning](../c/warning.md) pragma or the [/wd](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md) compiler option.  
  
 The following sample generates C4956:  
  
```  
// C4956.cpp  
// compile with: /clr:safe  
int* p;   // C4956  
```