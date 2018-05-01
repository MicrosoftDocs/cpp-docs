---
title: "-Zc:trigraphs (Trigraphs Substitution) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/Zc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-Zc compiler options (C++)"
  - "/Zc compiler options (C++)"
  - "Conformance compiler options"
  - "Zc compiler options (C++)"
ms.assetid: e3d6058f-400d-4966-a3aa-800cfdf69cbf
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Zc:trigraphs (Trigraphs Substitution)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-Zc:trigraphs (Trigraphs Substitution)](https://docs.microsoft.com/cpp/build/reference/zc-trigraphs-trigraphs-substitution).  
  
  
When **/Zc:trigraphs** is specified, the compiler replaces a trigraph character sequence by using a corresponding punctuation character. To turn off trigraph substitution, specify **/Zc:trigraphs-**. By default, **/Zc:trigraphs** is off.  
  
## Syntax  
  
```  
/Zc:trigraphs[-]  
```  
  
## Remarks  
 A trigraph consists of two consecutive question marks ("??") followed by a unique third character. For example, the compiler replaces the "??=" trigraph by using the '#' character. Use trigraphs in C source files that use a character set that does not contain convenient graphic representations for some punctuation characters.  
  
 For a list of C/C++ trigraphs, and an example that shows how to use trigraphs, see [Trigraphs](../../c-language/trigraphs.md).  
  
## See Also  
 [/Zc (Conformance)](../../build/reference/zc-conformance.md)   
 [Trigraphs](../../c-language/trigraphs.md)

