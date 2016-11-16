---
title: "NMAKE Fatal Error U1045 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "U1045"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1045"
ms.assetid: dc70d162-14b9-4107-9237-7514044d72e3
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
# NMAKE Fatal Error U1045
spawn failed : message  
  
 A program or command called by NMAKE failed for the given reason. When NMAKE calls another program—for example, the compiler or linker—the call may fail, or an error may be returned by the called program. This message is used to report the error.  
  
 To fix this issue, first determine the cause of the error. You can use the commands reported by the NMAKE [/N](../../build/nmake-options.md) option to verify the environment settings and to repeat the actions performed by NMAKE on the command line.