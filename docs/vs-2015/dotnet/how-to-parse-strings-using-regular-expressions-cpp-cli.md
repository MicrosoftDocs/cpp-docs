---
title: "How to: Parse Strings Using Regular Expressions (C++-CLI) | Microsoft Docs"
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
  - "strings [C++], parsing"
ms.assetid: 5b0c7ca3-9bba-4389-a45c-6d373cff91b0
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Parse Strings Using Regular Expressions (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Parse Strings Using Regular Expressions (C++/CLI)](https://docs.microsoft.com/cpp/dotnet/how-to-parse-strings-using-regular-expressions-cpp-cli).  
  
  
The following code example demonstrates simple string parsing using the <xref:System.Text.RegularExpressions.Regex> class in the <xref:System.Text.RegularExpressions?displayProperty=fullName> namespace. A string containing multiple types of word delineators is constructed. The string is then parsed using the <xref:System.Text.RegularExpressions.Regex> class in conjunction with the <xref:System.Text.RegularExpressions.Match> class. Then, each word in the sentence is displayed separately.  
  
## Example  
  
```  
// regex_parse.cpp  
// compile with: /clr  
#using <system.dll>  
  
using namespace System;  
using namespace System::Text::RegularExpressions;  
  
int main( )  
{  
   int words = 0;  
   String^ pattern = "[a-zA-Z]*";  
   Console::WriteLine( "pattern : '{0}'", pattern );  
   Regex^ regex = gcnew Regex( pattern );  
  
   String^ line = "one\ttwo three:four,five six  seven";     
   Console::WriteLine( "text : '{0}'", line );  
   for( Match^ match = regex->Match( line );   
        match->Success; match = match->NextMatch( ) )   
   {  
      if( match->Value->Length > 0 )  
      {  
         words++;  
         Console::WriteLine( "{0}", match->Value );  
      }  
   }  
   Console::WriteLine( "Number of Words : {0}", words );  
  
   return 0;  
}  
```  
  
## See Also  
 [.NET Framework Regular Expressions](http://msdn.microsoft.com/library/521b3f6d-f869-42e1-93e5-158c54a6895d)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

