---
title: "-LINENUMBERS | Microsoft Docs"
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
  - "/linenumbers"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LINENUMBERS dumpbin option"
  - "line numbers"
  - "-LINENUMBERS dumpbin option"
  - "/LINENUMBERS dumpbin option"
ms.assetid: 1681d582-2c2f-484e-9920-109959549055
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /LINENUMBERS
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-LINENUMBERS](https://docs.microsoft.com/cpp/build/reference/linenumbers).  
  
  
LINENUMBERS  
```  
  
## Remarks  
 This option displays COFF line numbers. Line numbers exist in an object file if it was compiled with Program Database (/Zi), C7 Compatible (/Z7), or Line Numbers Only (/Zd). An executable file or DLL contains COFF line numbers if it was linked with Generate Debug Info (/DEBUG).  
  
 Only the [/HEADERS](../../build/reference/headers.md) DUMPBIN option is available for use on files produced with the [/GL](../../build/reference/gl-whole-program-optimization.md) compiler option.  
  
## See Also  
 [DUMPBIN Options](../../build/reference/dumpbin-options.md)

