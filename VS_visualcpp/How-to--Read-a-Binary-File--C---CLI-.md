---
title: "How to: Read a Binary File (C++-CLI)"
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
H1: How to: Read a Binary File (C++/CLI)
ms.assetid: 41ad9ad1-5cac-489c-874e-4bb3a649073a
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
# How to: Read a Binary File (C++-CLI)
The following code example shows how to read binary data from a file, by using two classes from the <xref:System.IO?qualifyHint=True> namespace: <xref:System.IO.FileStream?qualifyHint=False> and <xref:System.IO.BinaryReader?qualifyHint=False>. <xref:System.IO.FileStream?qualifyHint=False> represents the actual file. <xref:System.IO.BinaryReader?qualifyHint=False> provides an interface to the stream that allows binary access.  
  
 The code example reads a file that's named data.bin and contains integers in binary format. For information about this kind of file, see [How to: Write a Binary File (C++/CLI)](../VS_visualcpp/How-to--Write-a-Binary-File--C---CLI-.md).  
  
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
 [File and Stream I-O](../Topic/File%20and%20Stream%20I-O.md)   
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)