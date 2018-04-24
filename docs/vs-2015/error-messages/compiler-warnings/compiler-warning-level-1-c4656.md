---
title: "Compiler Warning (level 1) C4656 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4656"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4656"
ms.assetid: b5aaef74-2320-4345-a6ae-b813881a491c
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4656
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4656](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4656).  
  
  
symbol' : data type is new or has changed since the last build, or is defined differently elsewhere  
  
 You added or changed a data type, making it new to your source code since the last successful build. Edit and Continue does not support changes to existing data types.  
  
 This warning will always be followed by [Fatal Error C1092](../../error-messages/compiler-errors-1/fatal-error-c1092.md). For further information, see the [Supported Code Changes](../Topic/Supported%20Code%20Changes%20\(C++\).md).  
  
### To remove this warning without ending the current debug session  
  
1.  Change the data type back to its state prior to the error.  
  
2.  From the **Debug** menu, choose **Apply Code Changes**.  
  
### To remove this error without changing your source code  
  
1.  From the **Debug** menu, choose **Stop Debugging**.  
  
2.  From the **Build** menu, choose **Build**.

