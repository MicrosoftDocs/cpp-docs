---
title: "Resource Compiler Error RC2001 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "RC2001"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RC2001"
ms.assetid: 92bfb4c0-1879-4606-bb9f-ef7368707b4a
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
# Resource Compiler Error RC2001
newline in constant  
  
 A string constant was continued on a second line without either a backslash (**\\**) or closing and opening double quotation marks (**"**).  
  
 To break a string constant that is on two lines in the source file, do one of the following:  
  
-   End the first line with the line-continuation character, a backslash.  
  
-   Close the string on the first line with a double quotation mark and open the string on the next line with another quotation mark.  
  
 It is not sufficient to end the first line with \n, the escape sequence for embedding a newline character in a string constant.