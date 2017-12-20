---
title: "How to: Use Regular Expressions to Search and Replace (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "search and replace"
  - "Replace method"
  - "regular expressions [C++], search and replace"
ms.assetid: 12fe3e18-fe10-4b25-a221-19dc5eab3821
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
  - "dotnet"
---
# How to: Use Regular Expressions to Search and Replace (C++/CLI)
The following code example demonstrates how the regular expression class <xref:System.Text.RegularExpressions.Regex> can be used to perform search and replace. This is done with the <xref:System.Text.RegularExpressions.Regex.Replace%2A> method. The version used takes two strings as input: the string to be modified, and the string to be inserted in place of the sections (if any) that match the pattern given to the <xref:System.Text.RegularExpressions.Regex> object.  
  
 This code replaces all the digits in a string with underscores (_) and then replaces those with an empty string, effectively removing them. The same effect can be accomplished in a single step, but two steps are used here for demonstration purposes.  
  
## Example  
  
```  
// regex_replace.cpp  
// compile with: /clr  
#using <System.dll>  
using namespace System::Text::RegularExpressions;  
using namespace System;  
  
int main()  
{  
   String^ before = "The q43uick bro254wn f0ox ju4mped";  
   Console::WriteLine("original  : {0}", before);  
  
   Regex^ digitRegex = gcnew Regex("(?<digit>[0-9])");  
   String^ after = digitRegex->Replace(before, "_");  
   Console::WriteLine("1st regex : {0}", after);  
  
   Regex^ underbarRegex = gcnew Regex("_");  
   String^ after2 = underbarRegex->Replace(after, "");  
   Console::WriteLine("2nd regex : {0}", after2);  
  
   return 0;  
}  
```  
  
## See Also  
 [.NET Framework Regular Expressions](/dotnet/standard/base-types/regular-expressions)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)