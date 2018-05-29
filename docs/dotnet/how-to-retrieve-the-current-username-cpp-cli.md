---
title: "How to: Retrieve the Current Username (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["current user names", "user names, retrieving", "UserName string"]
ms.assetid: 91679571-d029-41f5-b657-1460c81c608a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# How to: Retrieve the Current Username (C++/CLI)
The following code example demonstrates the retrieval of the current user name (the name of the user logged into Windows). The name is stored in the <xref:System.Environment.UserName%2A> string, which is defined in the <xref:System.Environment> namespace.  
  
## Example  
  
```  
// username.cpp  
// compile with: /clr  
using namespace System;  
  
int main()   
{  
   Console::WriteLine("\nCurrent user: {0}", Environment::UserName);  
   return 0;  
}  
```  
  
## See Also  
 [Windows Operations (C++/CLI)](../dotnet/windows-operations-cpp-cli.md)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)