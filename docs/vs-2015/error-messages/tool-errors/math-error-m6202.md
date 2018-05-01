---
title: "Math Error M6202 | Microsoft Docs"
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
  - "M6202"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "M6202"
ms.assetid: 4d17045f-c6dc-4705-9512-e9af12c35fb4
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Math Error M6202
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Math Error M6202](https://docs.microsoft.com/cpp/error-messages/tool-errors/math-error-m6202).  
  
  
function' : _SING error  
  
 An argument to the given function was a singularity value for this function. The function is not defined for that argument.  
  
 This error calls the `_matherr` function with the function name, its arguments, and the error type. You can rewrite the `_matherr` function to customize the handling of certain run-time floating-point math errors.

