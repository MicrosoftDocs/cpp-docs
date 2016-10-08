---
title: "How to: Write a Binary File (C++-CLI)"
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
H1: How to: Write a Binary File (C++/CLI)
ms.assetid: 35d97ee6-fc7e-4c36-be18-8bbb3b44b3ae
caps.latest.revision: 10
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
# How to: Write a Binary File (C++-CLI)
The following code example demonstrates writing binary data to a file. Two classes from the <xref:System.IO?qualifyHint=False> namespace are used: <xref:System.IO.FileStream?qualifyHint=False> and <xref:System.IO.BinaryWriter?qualifyHint=False>. <xref:System.IO.FileStream?qualifyHint=False> represents the actual file, while <xref:System.IO.BinaryWriter?qualifyHint=False> provides an interface to the stream that allows binary access.  
  
 The following code example writes a file containing integers in binary format. This file can be read with the code in [How to: Read a Binary File (C++/CLI)](../VS_visualcpp/How-to--Read-a-Binary-File--C---CLI-.md).  
  
## Example  
  
```  
// binary_write.cpp  
// compile with: /clr  
#using<system.dll>  
using namespace System;  
using namespace System::IO;  
  
int main()  
{  
   array<Int32>^ data = {1, 2, 3, 10000};  
  
   FileStream^ fs = gcnew FileStream("data.bin", FileMode::Create);  
   BinaryWriter^ w = gcnew BinaryWriter(fs);  
  
   try   
   {  
      Console::WriteLine("writing data to file:");  
      for (int i=0; i<data->Length; i++)  
      {  
         Console::WriteLine(data[i]);  
         w->Write(data[i]);  
      }  
   }  
   catch (Exception^)   
   {  
     Console::WriteLine("data could not be written");  
     fs->Close();  
     return -1;  
   }  
  
   fs->Close();  
   return 0;  
}  
```  
  
## See Also  
 [File and Stream I-O](../Topic/File%20and%20Stream%20I-O.md)   
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)