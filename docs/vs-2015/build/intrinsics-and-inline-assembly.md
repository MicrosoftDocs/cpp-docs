---
title: "Intrinsics and Inline Assembly | Microsoft Docs"
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
ms.assetid: 8affd4bb-279d-46f3-851f-8be0a9c5ed3f
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Intrinsics and Inline Assembly
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Intrinsics and Inline Assembly](https://docs.microsoft.com/cpp/build/intrinsics-and-inline-assembly).  
  
  
One of the constraints for the [!INCLUDE[vcprx64](../includes/vcprx64-md.md)] compiler is to have no inline assembler support. This means that functions that cannot be written in C or C++ will either have to be written as subroutines or as intrinsic functions supported by the compiler. Certain functions are performance sensitive while others are not. Performance-sensitive functions should be implemented as intrinsic functions.  
  
 The intrinsics supported by the compiler are described in [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md).  
  
## See Also  
 [x64 Software Conventions](../build/x64-software-conventions.md)

