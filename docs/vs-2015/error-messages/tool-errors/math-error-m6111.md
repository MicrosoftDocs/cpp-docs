---
title: "Math Error M6111 | Microsoft Docs"
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
  - "M6111"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "M6111"
ms.assetid: c0fc13f8-33c8-4e3f-a440-126cc623441b
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Math Error M6111
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Math Error M6111](https://docs.microsoft.com/cpp/error-messages/tool-errors/math-error-m6111).  
  
  
stack underflow  
  
 A floating-point operation resulted in a stack underflow on the 8087/287/387 coprocessor or the emulator.  
  
 This error is often caused by a call to a `long double` function that does not return a value. For example, the following generates this error when compiled and run:  
  
```  
long double ld() {};  
main ()  
{  
  ld();  
}  
```  
  
 Program terminates with exit code 139.

