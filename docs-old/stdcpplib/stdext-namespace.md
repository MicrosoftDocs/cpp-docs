---
title: "stdext Namespace"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "stdext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_DEFINE_DEPRECATED_HASH_CLASSES symbol"
  - "stdext namespace"
ms.assetid: 3e94fc89-0584-424f-bc09-081b73379545
caps.latest.revision: 9
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
# stdext Namespace
Members of the [<hash_map>](../stdcpplib/-hash_map-.md) and [<hash_set>](../stdcpplib/-hash_set-.md) header files are not currently part of the ISO C++ standard. Therefore, these types and members have been moved from the `std` namespace to namespace `stdext`, to remain conformant with the C++ standard.  
  
 When compiling with [/Ze](../buildref/-za---ze--disable-language-extensions-.md), which is the default, the compiler will warn on the use of `std` for members of the <hash_map> and <hash_set> header files. To disable the warning, use the [warning](../c/warning.md) pragma.  
  
 To have the compiler generate an error for the use of `std` for members of the <hash_map> and <hash_set> header files with **/Ze**, add the following directive before #include'ing any Standard C++ Library header files.  
  
```  
#define _DEFINE_DEPRECATED_HASH_CLASSES 0  
```  
  
 When compiling with **/Za**, the compiler will generate an error.  
  
## See Also  
 [STL Overview](../stdcpplib/c---standard-library-overview.md)