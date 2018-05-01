---
title: "Initializer Lists | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "initializer lists"
ms.assetid: b3e53442-9809-4105-9226-ae845bd20cae
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Initializer Lists
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Initializer Lists](https://docs.microsoft.com/cpp/dotnet/initializer-lists).  
  
  
Initializer lists in constructors are now called before the base class constructor.  
  
## Remarks  
 Prior to Visual C++ 2005, the base class constructor was called before the initializer list when compiling with Managed Extensions for C++. Now, when compiling with **/clr**, the initializer list is called first.  
  
## See Also  
 [General Language Changes (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)

