---
title: "Compiler Warning (level 1) C4819 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4819"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4819"
ms.assetid: c0316e85-249c-414d-9df0-622d077c6bc2
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
# Compiler Warning (level 1) C4819
The file contains a character that cannot be represented in the current code page (number). Save the file in Unicode format to prevent data loss.  
  
 C4819 occurs when an ANSI source file is compiled on a system with a codepage that cannot represent all characters in the file.  
  
 To resolve C4819, save the file in Unicode format. In Visual Studio, choose **File**, **Advanced Save Options**. In the **Advanced Save Options** dialog box, select an encoding that can represent all the characters in the file—for example, UTF-8—and then choose **OK**.