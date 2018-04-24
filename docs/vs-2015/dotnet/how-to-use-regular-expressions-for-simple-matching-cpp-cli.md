---
title: "How to: Use Regular Expressions for Simple Matching (C++-CLI) | Microsoft Docs"
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
  - "substrings, simple matches"
  - "searching, exact substring matches"
  - "strings [C++], exact substring matching"
  - "regular expressions [C++], simple matching"
  - "IsMatch method"
ms.assetid: 4661f6f3-0f6d-48f2-abe4-cb4770bf9bd5
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Use Regular Expressions for Simple Matching (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Use Regular Expressions for Simple Matching (C++/CLI)](https://docs.microsoft.com/cpp/dotnet/how-to-use-regular-expressions-for-simple-matching-cpp-cli).  
  
  
The following code example uses regular expressions to look for exact substring matches. The search is performed by the static <xref:System.Text.RegularExpressions.Regex.IsMatch%2A> method, which takes two strings as input. The first is the string to be searched, and the second is the pattern to be searched for.  
  
## Example  
  
```  
// regex_simple.cpp  
// compile with: /clr  
#using <System.dll>  
  
using namespace System;  
using namespace System::Text::RegularExpressions;  
  
int main()  
{  
   array<String^>^ sentence =   
   {  
      "cow over the moon",  
      "Betsy the Cow",  
      "cowering in the corner",  
      "no match here"  
   };  
  
   String^ matchStr = "cow";  
   for (int i=0; i<sentence->Length; i++)  
   {  
      Console::Write( "{0,24}", sentence[i] );  
      if ( Regex::IsMatch( sentence[i], matchStr,  
                     RegexOptions::IgnoreCase ) )  
         Console::WriteLine("  (match for '{0}' found)", matchStr);  
      else  
         Console::WriteLine("");  
   }  
   return 0;  
}  
```  
  
## See Also  
 [.NET Framework Regular Expressions](../Topic/.NET%20Framework%20Regular%20Expressions.md)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

