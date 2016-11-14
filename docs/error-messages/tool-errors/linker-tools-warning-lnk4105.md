---
title: "Linker Tools Warning LNK4105 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4105"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4105"
ms.assetid: 6c7bebf4-4ea6-4533-a6ed-e563d43abbd7
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
# Linker Tools Warning LNK4105
no argument specified with option 'option'; ignoring option  
  
 This warning occurs only when the [/LIBPATH](../../build/reference/libpath-additional-libpath.md) option is set. If no directory is specified with this option, then the linker ignores the option and generates this warning message.  
  
 If you do not need to override the existing environmental library settings, remove the /LIBPATH option from the linker command line. If you want to use an alternate search path for libraries, specify the alternate path following the /LIBPATH option.  
  
## Example  
  
```  
link /libpath:c:\filepath\lib bar.obj  
```  
  
 would direct the linker to search for the required libraries in `c:\filepath\lib` before searching in the default locations.