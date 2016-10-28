---
title: "Linker Tools Warning LNK4237"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4237"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4237"
ms.assetid: 87bfec39-5241-464f-9feb-517b49f352ea
caps.latest.revision: 8
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
# Linker Tools Warning LNK4237
/SUBSYSTEM:NATIVE specified when importing from 'dll'; Use /SUBSYSTEM:CONSOLE or /SUBSYSTEM:WINDOWS.  
  
 [/SUBSYSTEM:NATIVE](../buildref/-subsystem--specify-subsystem-.md) was specified when building a windows (Win32) application that directly uses one or more of the following:  
  
-   kernel32.dll  
  
-   gdi32.dll  
  
-   user32.dll  
  
-   one of the msvcrt* dlls.  
  
 Resolve this warning by not specifying **/SUBSYSTEM:NATIVE**.