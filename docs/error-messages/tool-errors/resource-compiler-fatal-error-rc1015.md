---
title: "Resource Compiler Fatal Error RC1015 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC1015"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC1015"
ms.assetid: 23f187e1-5538-40b5-9042-edd2888f55c2
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
# Resource Compiler Fatal Error RC1015
cannot open include file 'filename'  
  
 The given include file does not exist, could not be opened, or was not found.  
  
 Make sure that the environment settings are valid and that the correct path for the file is specified. Ensure that sufficient file handles are available to the Resource Compiler. If the file is on a network drive, make sure that you have permissions to open the file.  
  
 RC1015 can occur even if the include file exists in a directory specified as an Additional Include Directory in the Configuration Properties -> Resources -> General property page; specify the complete path to the include file.  
  
 For more information, see Knowledge Base article Q326987 : RC1015 Error When Using Resource View If the Include Path is Too Long.