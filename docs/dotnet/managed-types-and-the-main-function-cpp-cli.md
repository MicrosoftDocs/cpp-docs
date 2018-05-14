---
title: "Managed Types and the main Function (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["main function, in managed applications", "managed code, main() function"]
ms.assetid: 9d0e9620-58c4-4dac-a0e1-ffeb95f80fa5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# Managed Types and the main Function (C++/CLI)
When writing an application using **/clr**, the arguments of the **main()** function cannot be of a managed type.  
  
 An example of a proper signature is:  
  
```  
// managed_types_and_main.cpp  
// compile with: /clr  
int main(int, char*[], char*[]) {}  
```  
  
## See Also  
 [Managed Types (C++/CLI)](../dotnet/managed-types-cpp-cli.md)