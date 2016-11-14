---
title: "Directives to the Preprocessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
ms.assetid: adc6251e-cf6b-4508-bdbb-55f446c838d3
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
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
# Directives to the Preprocessor
A "directive" instructs the C preprocessor to perform a specific action on the text of the program before compilation. [Preprocessor directives](../preprocessor/preprocessor-directives.md) are fully described in the *Preprocessor Reference*. This example uses the preprocessor directive `#define`:  
  
```  
#define MAX 100  
```  
  
 This statement tells the compiler to replace each occurrence of `MAX` by `100` before compilation. The C compiler preprocessor directives are:  
  
|#define|#endif|#ifdef|#line|  
|--------------|-------------|-------------|------------|  
|`#elif`|`#error`|**#ifndef**|**#pragma**|  
|`#else`|`#if`|`#include`|`#undef`|  
  
## See Also  
 [Source Files and Source Programs](../c-language/source-files-and-source-programs.md)