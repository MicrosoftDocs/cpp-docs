---
title: "Using wmain Instead of main | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "wmain"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "main function, vs. wmain"
  - "wmain function"
ms.assetid: 7abb1257-b85c-413a-b913-d45b1582a71d
caps.latest.revision: 8
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
# Using wmain Instead of main
## Microsoft Specific  
 In the Unicode programming model, you can define a wide-character version of the **main** function. Use **wmain** instead of **main** if you want to write portable code that adheres to the Unicode specification.  
  
 You declare formal parameters to **wmain** using a similar format to **main**. You can then pass wide-character arguments and, optionally, a wide-character environment pointer to the program. The `argv` and `envp` parameters to **wmain** are of type `wchar_t*`.  
  
 If your program uses a **main** function, the multibyte-character environment is created by the operating system at program startup. A wide-character copy of the environment is created only when needed (for example, by a call to the [_wgetenv](../c-runtime-library/reference/getenv-wgetenv.md) or [_wputenv](../c-runtime-library/reference/putenv-wputenv.md) functions). On the first call to `_wputenv`, or on the first call to `_wgetenv` if an MBCS environment already exists, a corresponding wide-character string environment is created and is then pointed to by the `_wenviron` global variable, which is a wide-character version of the `_environ` global variable. At this point, two copies of the environment (MBCS and Unicode) exist simultaneously and are maintained by the operating system throughout the life of the program.  
  
 Similarly, if your program uses a **wmain** function, an MBCS (ASCII) environment is created on the first call to `_putenv` or `getenv`, and is pointed to by the `_environ` global variable.  
  
 For more information on the MBCS environment, see [Single-byte and Multibyte Character Sets](../c-runtime-library/single-byte-and-multibyte-character-sets.md) in the *Run-Time Library Reference.*  
  
## END Microsoft Specific  
  
## See Also  
 [main: Program Startup](../cpp/main-program-startup.md)