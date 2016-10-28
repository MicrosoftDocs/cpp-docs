---
title: "How to: Retrieve the Local Machine Name (C++-CLI)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "computer name, retrieving"
  - "machine name, retrieving"
  - "computer name"
ms.assetid: 6c7acb9a-3f9b-43b2-a756-bd4fb859e697
caps.latest.revision: 9
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# How to: Retrieve the Local Machine Name (C++/CLI)
The following code example demonstrates the retrieval of the local machine name (the name of the computer as it appears on a network). You can accomplish this by getting the \<xref:System.Environment.MachineName*> string, which is defined in the \<xref:System.Environment> namespace.  
  
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
 [Windows Operations (C++/CLI)](../cli/windows-operations--c---cli-.md)   
 [.NET Programming with C++/CLI (Visual C++)](../cli/.net-programming-with-c---cli--visual-c---.md)