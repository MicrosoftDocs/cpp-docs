---
title: "Compiler Error C2667 | Microsoft Docs"
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
  - "C2667"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2667"
ms.assetid: 3c91d9d1-18fa-4e0d-a9ba-984d38980ca3
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2667
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2667](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2667).  
  
  
function' : none of number overloads have a best conversion  
  
 An overloaded function call is ambiguous and cannot be resolved.  
  
 The conversion required to match the actual parameters in the function call to one of the overloaded functions must be strictly better than the conversions required by all the other overloaded functions.  
  
 See Knowledge Base article Q240869 for more information on partial ordering of function templates.

