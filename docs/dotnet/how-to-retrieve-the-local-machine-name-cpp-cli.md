---
title: "How to: Retrieve the Local Machine Name (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["computer name, retrieving", "machine name, retrieving", "computer name"]
ms.assetid: 6c7acb9a-3f9b-43b2-a756-bd4fb859e697
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# How to: Retrieve the Local Machine Name (C++/CLI)
The following code example demonstrates the retrieval of the local machine name (the name of the computer as it appears on a network). You can accomplish this by getting the <xref:System.Environment.MachineName%2A> string, which is defined in the <xref:System.Environment> namespace.  
  
## Example  
  
```  
// machine_name.cpp  
// compile with: /clr  
using namespace System;  
  
int main()   
{  
   Console::WriteLine("\nMachineName: {0}", Environment::MachineName);  
   return 0;  
}  
```  
  
## See Also  
 [Windows Operations (C++/CLI)](../dotnet/windows-operations-cpp-cli.md)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)