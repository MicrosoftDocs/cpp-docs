---
title: "Fatal Error C1209 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C1209"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1209"]
ms.assetid: aa9ee10f-abe3-4683-9792-adca4cbbabb5
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Fatal Error C1209
Friend assemblies not supported by the version of the runtime installed  
  
 C1208 occurs when you have a compiler for the current release, but a common language runtime from a previous release.  
  
 Some functionality of the compiler may not work on a previous version of the run time.  
  
 To resolve C1209, install the common language runtime that shipped with the compiler you are using.  
  
 For more information, see [Friend Assemblies (C++)](../../dotnet/friend-assemblies-cpp.md).