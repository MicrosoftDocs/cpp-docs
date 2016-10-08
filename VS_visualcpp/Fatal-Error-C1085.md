---
title: "Fatal Error C1085"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: f2766365-d09b-4299-8a98-12e5aca98568
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Fatal Error C1085
Cannot write filetype file: 'file': message  
  
### To fix by checking the following possible causes  
  
1.  Drive is read-only.  
  
2.  Drive is full.  
  
3.  Sharing violation.  
  
4.  If the message says "bad file number", the file may have been closing in the foreground while compiling in the background.