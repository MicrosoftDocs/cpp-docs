---
title: "-LINENUMBERS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/linenumbers"]
dev_langs: ["C++"]
helpviewer_keywords: ["LINENUMBERS dumpbin option", "line numbers", "-LINENUMBERS dumpbin option", "/LINENUMBERS dumpbin option"]
ms.assetid: 1681d582-2c2f-484e-9920-109959549055
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /LINENUMBERS
```  
/LINENUMBERS  
```  
  
## Remarks  
 This option displays COFF line numbers. Line numbers exist in an object file if it was compiled with Program Database (/Zi), C7 Compatible (/Z7), or Line Numbers Only (/Zd). An executable file or DLL contains COFF line numbers if it was linked with Generate Debug Info (/DEBUG).  
  
 Only the [/HEADERS](../../build/reference/headers.md) DUMPBIN option is available for use on files produced with the [/GL](../../build/reference/gl-whole-program-optimization.md) compiler option.  
  
## See Also  
 [DUMPBIN Options](../../build/reference/dumpbin-options.md)