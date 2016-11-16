---
title: "Compiler Warning (level 1) C4657 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4657"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4657"
ms.assetid: eb750050-cea6-4ead-b80c-d5dcd4971cfc
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Warning (level 1) C4657
expression involves a data type that is new since the last build  
  
 You added or changed a data type, making it new to your source code since the last successful build. Edit and Continue does not support changes to existing data types.  
  
 This warning will always be followed by [Fatal Error C1092](../../error-messages/compiler-errors-1/fatal-error-c1092.md). For further information, see the [Supported Code Changes](/visualstudio/debugger/supported-code-changes-cpp).  
  
### To remove this warning without ending the current debug session  
  
1.  Change the data type back to its state prior to the error.  
  
2.  From the **Debug** menu, choose **Apply Code Changes**.  
  
### To remove this error without changing your source code  
  
1.  From the **Debug** menu, choose **Stop Debugging**.  
  
2.  From the **Build** menu, choose **Build**.