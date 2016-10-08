---
title: "Fatal Error C1081"
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
ms.assetid: e58adf17-cbe1-4955-a5c7-80622bbba249
caps.latest.revision: 8
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
# Fatal Error C1081
'symbol': file name too long  
  
 The length of a file pathname exceeds `_MAX_PATH` (defined by STDLIB.h as 260 characters). Shorten the name of the file.  
  
 If you call CL.exe with a short filename, the compiler may need to generate a full pathname. For example, `cl -c myfile.cpp` may cause the compiler to generate:  
  
```  
D:\<very-long-directory-path>\myfile.cpp  
```