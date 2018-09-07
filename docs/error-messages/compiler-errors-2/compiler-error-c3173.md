---
title: "Compiler Error C3173 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3173"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3173"]
ms.assetid: edf79e10-e8cf-4f76-8d33-ab9d05e974e9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3173
version mismatch in idl merge  
  
 This error occurs when an object file contains embedded idl that was generated with a previous version of the compiler. The compiler encodes a version number to ensure that the same compiler used to generate the idl content that is embedded in the .obj files is also the same compiler used to merge the embedded idl.  
  
 Update your Visual C++ installation so that all tools are from the latest released version.