---
title: "BSCMAKE Error BK1513 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "BK1513"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BK1513"
ms.assetid: 9ba87c09-8d82-4c80-b0cf-a8de63dcf9da
caps.latest.revision: 8
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
# BSCMAKE Error BK1513
nonincremental update requires all .SBR files  
  
 BSCMAKE cannot build a new browse information (.bsc) file because one or more .sbr files are truncated. To find the names of the truncated .sbr files, read the [BK4502](../../error-messages/tool-errors/bscmake-warning-bk4502.md) warnings that accompany this error.  
  
 BSCMAKE can update a .bsc file with a truncated .sbr file but cannot build a new one. BSCMAKE may build a new .bsc file for the following reasons:  
  
-   Missing .bsc file.  
  
-   Wrong filename specified for .bsc file.  
  
-   Corrupted .bsc file.  
  
 To resolve this issue, delete the truncated .sbr files and rebuild, or clean the solution and rebuild. (In the IDE, choose **Build**, **Clean Solution**, and then choose **Build**, **Rebuild Solution**.)