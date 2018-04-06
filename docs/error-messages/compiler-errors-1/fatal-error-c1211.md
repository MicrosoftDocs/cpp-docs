---
title: "Fatal Error C1211 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C1211"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1211"]
ms.assetid: df0ca70d-ec6e-4400-926a-b877e2599978
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Fatal Error C1211
The TypeForwardedTo Custom Attribute is not supported by the version of the runtime installed  
  
 C1211 occurs when you have a compiler for the current release, but a common language runtime from a previous release.  
  
 Some functionality of the compiler may not work on a previous version of the run time.  
  
 To resolve C1211 install the common language runtime that shipped with the compiler you are using.  
  
 For more information, see [Type Forwarding (C++/CLI)](../../windows/type-forwarding-cpp-cli.md).