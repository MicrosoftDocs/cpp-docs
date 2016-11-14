---
title: "Project Build Error PRJ0031 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0031"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0031"
ms.assetid: b42435c6-e570-4f8e-9ad5-12a7ea69ccb2
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
# Project Build Error PRJ0031
The 'Outputs' property for the custom build step for file 'file' contained 'macro' which evaluates out to 'macro_expansion'.  
  
 A custom build step on a file had bad output probably due to a macro evaluation problem. This error could also mean that the path is badly formed, containing characters or combinations of characters that are illegal in a file path.  
  
 To resolve this error, fix the macro or fix the path specification. The evaluated path is an absolute path from the project directory.