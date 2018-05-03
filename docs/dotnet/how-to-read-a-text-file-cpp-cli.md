---
title: "How to: Read a Text File (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["reading text files", "text files, reading"]
ms.assetid: 80551c01-d769-4b6d-8db7-fd53bde21b62
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# How to: Read a Text File (C++/CLI)
The following code example demonstrates how to open and read a text file one line at a time, by using the <xref:System.IO.StreamReader> class that's defined in the <xref:System.IO?displayProperty=fullName> namespace. An instance of this class is used to open a text file and then the <xref:System.IO.StreamReader.ReadLine%2A?displayProperty=fullName> method is used to retrieve each line.  
  
 This code example reads a file that's named textfile.txt and contains text. For information about this kind of file, see [How to: Write a Text File (C++/CLI)](../dotnet/how-to-write-a-text-file-cpp-cli.md).  
  
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
 [File and Stream I-O](http://msdn.microsoft.com/Library/4f4a33a9-66b7-4cd7-a285-4ad3e4276cd2)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)