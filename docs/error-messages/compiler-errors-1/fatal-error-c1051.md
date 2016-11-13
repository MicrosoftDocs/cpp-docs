---
title: "Fatal Error C1051 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1051"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1051"
ms.assetid: 87dcbd3b-0952-499a-bd42-64f9e8de2605
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
# Fatal Error C1051
program database file, 'pdbfile', has an obsolete format, delete it and recompile  
  
 The compiler cannot update the program database file, which has an older version number. Delete the file and recompile your program with **/Zi** or **/ZI**. For more information, see [/Z7, /Zi, /ZI (Debug Information Format)](../../build/reference/z7-zi-zi-debug-information-format.md)