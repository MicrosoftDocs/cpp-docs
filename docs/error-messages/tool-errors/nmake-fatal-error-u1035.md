---
title: "NMAKE Fatal Error U1035 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "U1035"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1035"
ms.assetid: 68f0cc59-007e-4109-ac30-7ac4ac447e6d
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
# NMAKE Fatal Error U1035
syntax error : expected ':' or '=' separator  
  
 Either a colon (**:**) or an equal sign (**=**) was expected.  
  
### To fix by checking the following possible causes  
  
1.  A colon did not follow a target.  
  
2.  A colon and no space (such as a:) followed a single-letter target. NMAKE interpreted it as a drive specification.  
  
3.  A colon did not follow an inference rule.  
  
4.  A macro definition was not followed by an equal sign.  
  
5.  A character followed a backslash (**\\**) that was used to continue a command to a new line.  
  
6.  A string appeared that did not follow any NMAKE syntax rule.  
  
7.  The makefile was formatted by a word processor.