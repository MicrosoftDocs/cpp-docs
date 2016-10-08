---
title: "How to: Read a Text File (C++-CLI)"
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
H1: How to: Read a Text File (C++/CLI)
ms.assetid: 80551c01-d769-4b6d-8db7-fd53bde21b62
caps.latest.revision: 13
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
# How to: Read a Text File (C++-CLI)
The following code example demonstrates how to open and read a text file one line at a time, by using the <xref:System.IO.StreamReader?qualifyHint=False> class that's defined in the <xref:System.IO?qualifyHint=True> namespace. An instance of this class is used to open a text file and then the <xref:System.IO.StreamReader.ReadLine?qualifyHint=True> method is used to retrieve each line.  
  
 This code example reads a file that's named textfile.txt and contains text. For information about this kind of file, see [How to: Write a Text File (C++/CLI)](../VS_visualcpp/How-to--Write-a-Text-File--C---CLI-.md).  
  
## Example  
  
```  
// text_read.cpp  
// compile with: /clr  
#using<system.dll>  
using namespace System;  
using namespace System::IO;  
  
int main()  
{  
   String^ fileName = "textfile.txt";  
   try   
   {  
      Console::WriteLine("trying to open file {0}...", fileName);  
      StreamReader^ din = File::OpenText(fileName);  
  
      String^ str;  
      int count = 0;  
      while ((str = din->ReadLine()) != nullptr)   
      {  
         count++;  
         Console::WriteLine("line {0}: {1}", count, str );  
      }  
   }  
   catch (Exception^ e)  
   {  
      if (dynamic_cast<FileNotFoundException^>(e))  
         Console::WriteLine("file '{0}' not found", fileName);  
      else  
         Console::WriteLine("problem reading file '{0}'", fileName);  
   }  
  
   return 0;  
}  
```  
  
## See Also  
 [File and Stream I-O](../Topic/File%20and%20Stream%20I-O.md)   
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)