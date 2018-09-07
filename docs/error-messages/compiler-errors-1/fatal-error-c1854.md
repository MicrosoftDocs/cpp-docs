---
title: "Fatal Error C1854 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["devlang-cpp"]
ms.topic: "error-reference"
f1_keywords: ["C1854"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1854"]
ms.assetid: 8c21a9cc-1737-475c-9e57-8725cd8937c1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1854
  
> cannot overwrite information formed during creation of the precompiled header in object file: '*filename*'  
  
You specified the [/Yu (Use Precompiled Header File)](../../build/reference/yu-use-precompiled-header-file.md) option after specifying the [/Yc (Create Precompiled Header File)](../../build/reference/yc-create-precompiled-header-file.md) option for the same file.  
  
To fix this issue, in general, set only one file in your project to be compiled by using the **/Yc** option, and set all other files to compile by using the **/Yu** option. For details on the use of the **/Yc** option, and how to set it in the Visual Studio IDE, see [/Yc (Create Precompiled Header File)](../../build/reference/yc-create-precompiled-header-file.md). For more information on using precompiled headers, see [Creating Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md).  
