---
title: "Initializer Lists | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["initializer lists"]
ms.assetid: b3e53442-9809-4105-9226-ae845bd20cae
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# Initializer Lists
Initializer lists in constructors are now called before the base class constructor.  
  
## Remarks  
 Prior to Visual C++ 2005, the base class constructor was called before the initializer list when compiling with Managed Extensions for C++. Now, when compiling with **/clr**, the initializer list is called first.  
  
## See Also  
 [General Language Changes (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)