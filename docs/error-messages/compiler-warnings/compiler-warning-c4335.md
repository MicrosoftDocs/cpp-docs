---
title: "Compiler Warning C4335 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4335"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4335"
ms.assetid: e66467ad-a10b-4438-8c7c-e8e8d11d39bb
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
# Compiler Warning C4335
Mac file format detected: please convert the source file to either DOS or UNIX format  
  
 The line termination character of the first line of a source file is Macintosh style (‘\r’) as opposed to UNIX (‘\n’) or DOS (‘\r\n’).  
  
 This warning is always issued as an errror.  See [warning](../../preprocessor/warning.md) pragma for information about how to disable this warning.  Also, this warning is only issued once per compiland. Therefore, if there are multiple `#include` directives that specify files in Macintosh format, C4335 will only be issued once.  
  
 One way to generate files in Macintosh format is by using the **Advanced Save Options** (on the **File** menu) in Visual Studio.  
  
## Example  
 The following sample generates C4335.  
  
```  
// C4335 expected  
#include "c4335.h"   // assume both include files are in Macintosh format  
#include "c4335_2.h"  
```