---
title: "Linker Tools Error LNK1301 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1301"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1301"
ms.assetid: 760da428-7182-4b25-b20a-de90d4b9a9cd
caps.latest.revision: 6
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
# Linker Tools Error LNK1301
LTCG clr modules found, incompatible with /LTCG:parameter  
  
 A module compiled with /clr and /GL was passed to the linker along with one of the profile guided optimizations (PGO) parameters of /LTCG.  
  
 Profile guided optimizations are not supported for /clr modules.  
  
 For more information, see:  
  
-   [/GL (Whole Program Optimization)](../../build/reference/gl-whole-program-optimization.md)  
  
-   [/LTCG (Link-time Code Generation)](../../build/reference/ltcg-link-time-code-generation.md)  
  
-   [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md)  
  
-   [Profile-Guided Optimizations](../../build/reference/profile-guided-optimizations.md)  
  
### To correct this error  
  
1.  Do not compile with /clr or do not link with one of the PGO parameters to /LTCG.  
  
## Example  
 The following sample generates LNK1301:  
  
```  
// LNK1301.cpp  
// compile with: /clr /GL /link /LTCG:PGI LNK1301.obj  
// LNK1301 expected  
class MyClass {  
public:  
   int i;  
};  
```