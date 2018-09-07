---
title: "Compiler Error C2097 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2097"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2097"]
ms.assetid: 7e5b2fd4-f61c-4b8a-b265-93e987a04bd3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2097
illegal initialization  
  
### To fix by checking the following possible causes  
  
1.  Initialization of a variable using a nonconstant value.  
  
2.  Initialization of a short address with a long address.  
  
3.  Initialization of a local structure, union, or array with a nonconstant expression when compiling with **/Za**.  
  
4.  Initialization with an expression containing a comma operator.  
  
5.  Initialization with an expression that is neither constant nor symbolic.