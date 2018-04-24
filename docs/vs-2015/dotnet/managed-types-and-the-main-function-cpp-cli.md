---
title: "Managed Types and the main Function (C++-CLI) | Microsoft Docs"
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
  - "main function, in managed applications"
  - "managed code, main() function"
ms.assetid: 9d0e9620-58c4-4dac-a0e1-ffeb95f80fa5
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Managed Types and the main Function (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Managed Types and the main Function (C++/CLI)](https://docs.microsoft.com/cpp/dotnet/managed-types-and-the-main-function-cpp-cli).  
  
  
When writing an application using **/clr**, the arguments of the **main()** function cannot be of a managed type.  
  
 An example of a proper signature is:  
  
```  
// managed_types_and_main.cpp  
// compile with: /clr  
int main(int, char*[], char*[]) {}  
```  
  
## See Also  
 [Managed Types (C++/CLI)](../dotnet/managed-types-cpp-cli.md)

