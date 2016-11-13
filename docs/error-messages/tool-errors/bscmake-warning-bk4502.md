---
title: "BSCMAKE Warning BK4502 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "BK4502"
  - "BK1513"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1513"
  - "BK4502"
ms.assetid: ee412ec8-df03-4cdb-91ee-5d609ded8691
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
# BSCMAKE Warning BK4502
truncated .SBR file 'filename' not in filename  
  
 A zero-length .sbr file that was not originally part of the .bsc file was specified during an update.  
  
### To fix by checking the following possible causes  
  
1.  Wrong filename specified.  
  
2.  File deleted. (Error [BK1513](../../error-messages/tool-errors/bscmake-error-bk1513.md) results.)  
  
3.  File corrupted, requiring BSCMAKE to do a full build.