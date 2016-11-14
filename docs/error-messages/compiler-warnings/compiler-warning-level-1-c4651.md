---
title: "Compiler Warning (level 1) C4651 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4651"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4651"
ms.assetid: f1ea82aa-4dc1-4972-b55a-57fdb962f0dd
caps.latest.revision: 7
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
# Compiler Warning (level 1) C4651
'definition' specified for precompiled header but not for current compile  
  
 The definition was specified when the precompiled header was generated, but not in this compilation.  
  
 The definition will be in effect inside the precompiled header, but not in the rest of the code.  
  
 If a precompiled header was built with /DSYMBOL, the compiler will generate this warning if the /Yu compile doesn't have /DSYMBOL.  Adding /DSYMBOL to the /Yu command line resolves this warning.