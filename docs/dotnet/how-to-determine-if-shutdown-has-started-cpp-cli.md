---
title: "How to: Determine if Shutdown Has Started (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: [".NET Framework, shutdown", "shutdown", "termination", "applications [C++], shutdown"]
ms.assetid: a8d39731-dea8-4f0a-96b7-2a5de09b21d7
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Determine if Shutdown Has Started (C++/CLI)
The following code example demonstrates how to determine whether the application or the .NET Framework is currently terminating. This is useful for accessing static elements in the .NET Framework because, during shutdown, these constructs are finalized by the system and cannot be reliably used. By checking the <xref:System.Environment.HasShutdownStarted%2A> property first, you can avoid potential failures by not accessing these elements.  
  
## Example  
  
```  
// check_shutdown.cpp  
// compile with: /clr  
using namespace System;  
int main()   
{  
   if (Environment::HasShutdownStarted)  
      Console::WriteLine("Shutting down.");  
   else  
      Console::WriteLine("Not shutting down.");  
   return 0;  
}  
```  
  
## See Also  
 [Windows Operations (C++/CLI)](../dotnet/windows-operations-cpp-cli.md)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)