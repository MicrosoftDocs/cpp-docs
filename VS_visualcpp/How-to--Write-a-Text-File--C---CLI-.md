---
title: "How to: Write a Text File (C++-CLI)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: How to: Write a Text File (C++/CLI)
ms.assetid: 39ecdba6-84e0-485c-a202-84cf6d7b8d4a
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# How to: Write a Text File (C++-CLI)
The following code example demonstrates how to create a text file and write text to it using the <xref:System.IO.StreamWriter?qualifyHint=False> class, which is defined in the <xref:System.IO?qualifyHint=False> namespace. The <xref:System.IO.StreamWriter?qualifyHint=False> constructor takes the name of the file to be created. If the file exists, it is overwritten (unless you pass True as the second <xref:System.IO.StringWriter?qualifyHint=False> constructor argument).  
  
 The file is then filed using the <xref:System.IO.StreamWriter.Write?qualifyHint=False> and <xref:System.IO.TextWriter.WriteLine?qualifyHint=False> functions.  
  
## Example  
  
```  
// text_write.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::IO;  
  
int main()   
{  
   String^ fileName = "textfile.txt";  
  
   StreamWriter^ sw = gcnew StreamWriter(fileName);  
   sw->WriteLine("A text file is born!");  
   sw->Write("You can use WriteLine");  
   sw->WriteLine("...or just Write");  
   sw->WriteLine("and do {0} output too.", "formatted");  
   sw->WriteLine("You can also send non-text objects:");  
   sw->WriteLine(DateTime::Now);  
   sw->Close();  
   Console::WriteLine("a new file ('{0}') has been written", fileName);  
  
   return 0;  
}  
```  
  
## See Also  
 [File and Stream I-O](../Topic/File%20and%20Stream%20I-O.md)   
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)