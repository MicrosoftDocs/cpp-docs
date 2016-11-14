---
title: "Project Build Error PRJ0027 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0027"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0027"
ms.assetid: 85d73a78-4b9e-4553-9f5d-2d76c48a790a
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
# Project Build Error PRJ0027
Unicode log message 'contents' contains content that could not be translated to the user's ANSI code page.  
  
 You will typically only see this warning in conjunction with errors in creating batch and/or response files.  
  
 The resolution for this error is to update the contents of the build log to use ANSI or to install the code page on your computer and set it as the system default.