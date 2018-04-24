---
title: "How to: Parse Strings Using the Split Method (C++-CLI) | Microsoft Docs"
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
  - "parsing strings [C++]"
  - "examples [C++], strings"
  - "regular expressions [C++], parsing strings"
  - "Split method, parsing strings"
  - "strings [C++], parsing"
ms.assetid: d52d2539-5ebb-4716-86b3-07314dd7e4bd
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Parse Strings Using the Split Method (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Parse Strings Using the Split Method (C++/CLI)](https://docs.microsoft.com/cpp/dotnet/how-to-parse-strings-using-the-split-method-cpp-cli).  
  
  
The following code example demonstrates using the <xref:System.String.Split%2A?displayProperty=fullName> method to extract each word from a string. A string containing multiple types of word delineators is constructed and then parsed by calling <xref:System.String.Split%2A> with a list of the delineators. Then, each word in the sentence is displayed separately.  
  
## Example  
  
```  
// regex_split.cpp  
// compile with: /clr  
using namespace System;  
  
int main()  
{  
   String^ delimStr = " ,.:\t";  
   Console::WriteLine( "delimiter : '{0}'", delimStr );  
   array<Char>^ delimiter = delimStr->ToCharArray( );  
   array<String^>^ words;  
   String^ line = "one\ttwo three:four,five six seven";  
  
   Console::WriteLine( "text : '{0}'", line );  
   words = line->Split( delimiter );  
   Console::WriteLine( "Number of Words : {0}", words->Length );  
   for (int word=0; word<words->Length; word++)  
      Console::WriteLine( "{0}", words[word] );  
  
   return 0;  
}  
```  
  
## See Also  
 [.NET Framework Regular Expressions](../Topic/.NET%20Framework%20Regular%20Expressions.md)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

