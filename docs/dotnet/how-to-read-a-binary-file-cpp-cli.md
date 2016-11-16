---
title: "How to: Read a Binary File (C++-CLI) | Microsoft Docs"
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
  - "files [C++], binary"
  - "binary files, reading in C++"
ms.assetid: 41ad9ad1-5cac-489c-874e-4bb3a649073a
caps.latest.revision: 13
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
# How to: Read a Binary File (C++/CLI)
The following code example shows how to read binary data from a file, by using two classes from the <xref:System.IO?displayProperty=fullName> namespace: <xref:System.IO.FileStream> and <xref:System.IO.BinaryReader>. <xref:System.IO.FileStream> represents the actual file. <xref:System.IO.BinaryReader> provides an interface to the stream that allows binary access.  
  
 The code example reads a file that's named data.bin and contains integers in binary format. For information about this kind of file, see [How to: Write a Binary File (C++/CLI)](../dotnet/how-to-write-a-binary-file-cpp-cli.md).  
  
## Example  
  
```  
// binary_read.cpp  
// compile with: /clr  
#using<system.dll>  
using namespace System;  
using namespace System::IO;  
  
int main()   
{  
   String^ fileName = "data.bin";  
   try  
   {  
      FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);  
      BinaryReader^ br = gcnew BinaryReader(fs);  
  
      Console::WriteLine("contents of {0}:", fileName);  
      while (br->BaseStream->Position < br->BaseStream->Length)  
         Console::WriteLine(br->ReadInt32().ToString());  
  
      fs->Close( );  
   }  
   catch (Exception^ e)  
   {  
      if (dynamic_cast<FileNotFoundException^>(e))  
         Console::WriteLine("File '{0}' not found", fileName);  
      else  
         Console::WriteLine("Exception: ({0})", e);  
      return -1;  
   }  
   return 0;  
}  
```  
  
## See Also  
 [File and Stream I-O](http://msdn.microsoft.com/Library/4f4a33a9-66b7-4cd7-a285-4ad3e4276cd2)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)