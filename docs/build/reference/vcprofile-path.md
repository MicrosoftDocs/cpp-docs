---
title: "VCPROFILE_PATH | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VCPROFILE_PATH"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VCPROFILE_PATH environment variable"
ms.assetid: 25217aa4-7e86-4eba-854d-10b3c457e4df
caps.latest.revision: 4
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
# VCPROFILE_PATH
Specify the directory to create .pgc files.  
  
## Syntax  
  
```  
VCPROFILE_PATH=path  
```  
  
#### Parameters  
 `path`  
 The directory path in which .pgc files will be added.  
  
## Remarks  
 By default, .pgc files are created in the same directory as the binary being profiled.  However, if the absolute path of the binary does not exist, as may be the case when you run profile scenarios on a different machine from where the binary was built, you can set `VCPROFILE_PATH` to a path that exists.  
  
## Example  
  
```  
set VCPROFILE_PATH=c:\  
```  
  
## See Also  
 [Environment Variables for Profile-Guided Optimizations](../../build/reference/environment-variables-for-profile-guided-optimizations.md)