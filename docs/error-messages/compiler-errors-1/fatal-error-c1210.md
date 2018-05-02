---
title: "Fatal Error C1210 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1210"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1210"]
ms.assetid: e2208309-c284-425c-a7e8-48e96e66f35b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1210
/clr:pure and /clr:safe are not supported by the version of the runtime installed  
  
 The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015.  
  
 C1210 occurs when you have a compiler for the current release, but a common language runtime from a previous release.  
  
 Some functionality of the compiler may not work on a previous version of the run time.  
  
 To resolve C1210 install the common language runtime version that is intended for use with your compiler.