---
title: "How to: Parse Strings Using the Split Method (C++-CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 12
author: "mikeblome"
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
# How to: Parse Strings Using the Split Method (C++/CLI)
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
 [.NET Framework Regular Expressions](http://msdn.microsoft.com/Library/521b3f6d-f869-42e1-93e5-158c54a6895d)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)