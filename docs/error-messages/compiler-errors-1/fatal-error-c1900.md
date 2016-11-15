---
title: "Fatal Error C1900 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1900"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1900"
ms.assetid: 3aaa583b-4c1a-45de-aa34-527d806f2cb5
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
# Fatal Error C1900
Il mismatch between 'tool1' version 'number1' and 'tool2' version 'number2'  
  
 Tools run in various passes of the compiler do not match. ***number1*** and ***number2*** refer to the dates on the files. For example, in pass 1, the compiler front end runs (c1.dll) and in pass 2, the compiler back end runs (c2.dll). The dates on the files must match.  
  
 To fix this issue, make sure that all updates have been applied to Visual Studio. If the problem persists, use **Programs and Features** in the Windows Control Panel to repair or reinstall Visual Studio.