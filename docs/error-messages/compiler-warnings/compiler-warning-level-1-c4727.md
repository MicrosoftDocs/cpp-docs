---
title: "Compiler Warning (level 1) C4727 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4727"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4727"
ms.assetid: 991b0087-3a50-40f5-9cdb-cdc367cd472c
caps.latest.revision: 3
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
# Compiler Warning (level 1) C4727
"PCH named pch_file with same timestamp found in obj_file_1 and obj_file_2.  Using first PCH.  
  
 C4727 occurs when compiling multiple compilands with **/Yc**, and where the compiler was able to mark all .obj files with the same .pch timestamp.  
  
 To resolve, compile one source file with **/Yc /c** (creates pch), and the others compile separately with **/Yu /c** (uses pch), then link them together.  
  
 So, if you did the following and generates C4727:  
  
 **cl /clr /GL a.cpp b.cpp c.cpp /Ycstdafx.h**  
  
 You would do the following instead:  
  
 **cl /clr /GL a.cpp /Ycstdafx.h /c**  
  
 **cl /clr /GL b.cpp c.cpp /Yustdafx.h /link a.obj**  
  
 For more information, see  
  
-   [/Yc (Create Precompiled Header File)](../../build/reference/yc-create-precompiled-header-file.md)  
  
-   [/Yu (Use Precompiled Header File)](../../build/reference/yu-use-precompiled-header-file.md)