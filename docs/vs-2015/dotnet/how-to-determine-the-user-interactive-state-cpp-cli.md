---
title: "How to: Determine the User Interactive State (C++-CLI) | Microsoft Docs"
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
  - "Visual C++, user interactive state"
  - "user interactive state"
ms.assetid: 9f52323e-38b8-4a41-9b1d-052012ad839b
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Determine the User Interactive State (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Determine the User Interactive State (C++/CLI)](https://docs.microsoft.com/cpp/dotnet/how-to-determine-the-user-interactive-state-cpp-cli).  
  
  
The following code example demonstrates how to determine whether code is being run in a user-interactive context. If <xref:System.Environment.UserInteractive%2A> is false, then the code is running as a service process or from inside a Web application, in which case you should not attempt to interact with the user.  
  
## Example  
  
```  
// user_interactive.cpp  
// compile with: /clr  
using namespace System;  
  
int main()   
{  
   if ( Environment::UserInteractive )  
      Console::WriteLine("User interactive");  
   else  
      Console::WriteLine("Noninteractive");  
   return 0;  
}  
```  
  
## See Also  
 [Windows Operations (C++/CLI)](../dotnet/windows-operations-cpp-cli.md)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

