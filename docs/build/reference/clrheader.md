---
title: "-CLRHEADER | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/CLRHEADER"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-CLRHEADER dumpbin option"
  - "/CLRHEADER dumpbin option"
  - "CLRHEADER dumpbin option"
ms.assetid: cf73424f-4541-47e2-b94e-69b95266ef2a
caps.latest.revision: 9
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
# /CLRHEADER
```  
/CLRHEADER file  
```  
  
## Remarks  
 where:  
  
 `file`  
 An image file built with [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
## Remarks  
 CLRHEADER displays information about the .NET headers used in any managed program. The output shows the location and size, in bytes, of the .NET header and sections in the header.  
  
 Only the [/HEADERS](../../build/reference/headers.md) DUMPBIN option is available for use on files produced with the [/GL](../../build/reference/gl-whole-program-optimization.md) compiler option.  
  
 When /CLRHEADER is used on a file that was compiled with /clr, there will be a **clr Header:** section in the dumpbin output.  The value of **flags** indicates which /clr option was used:  
  
-   0  -- /clr (image may contain native code).  
  
-   1 -- /clr:safe (image is MSIL only, able to run on any CLR platform, and possibly verifiable).  
  
-   3 -- /clr:pure (image is MSIL only, but only able to run on x86 platforms).  
  
 You can also programmatically check if an image was built for the common language runtime.  For more information, see [How to: Determine if an Image is Native or CLR](../../dotnet/how-to-determine-if-an-image-is-native-or-clr.md).  
  
## See Also  
 [DUMPBIN Options](../../build/reference/dumpbin-options.md)