---
title: "Fatal Error C1092 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1092"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1092"
ms.assetid: bcaa87f0-fbfc-4a33-844b-3b9f5d67f279
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
# Fatal Error C1092
Edit and Continue does not support changes to data types; build required  
  
 You changed or added a data type since the last successful build.  
  
-   Edit and Continue does not support changes to existing data types, including class, struct, or enum definitions. You must stop debugging and build the application.  
  
-   Edit and Continue does not support the addition of new data types if a program database file, such as vc*x*0.pdb (where *x* is the major version of Visual C++ in use) is read-only. To add data types, the compiler must open the .pdb file in write mode.  
  
### To remove this error without ending the current debug session  
  
1.  Change the data type back to its state prior to the error.  
  
2.  From the **Debug** menu, choose **Apply Code Changes**.  
  
### To remove this error without changing your source code  
  
1.  From the **Debug** menu, choose **Stop Debugging**.  
  
2.  From the **Build** menu, choose **Build**.  
  
 For further information, see the [Supported Code Changes](/visualstudio/debugger/supported-code-changes-cpp).