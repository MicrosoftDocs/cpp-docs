---
title: "How to: Enumerate Files in a Directory (C++-CLI)"
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
H1: How to: Enumerate Files in a Directory (C++/CLI)
ms.assetid: ebfc2666-229f-4b94-a9a1-e8f1b5d946d6
caps.latest.revision: 12
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
# How to: Enumerate Files in a Directory (C++-CLI)
The following code example demonstrates how to retrieve a list of the files in a directory. Additionally, the subdirectories are enumerated. The following code example uses the <xref:System.IO.Directory.GetFiles?qualifyHint=False><xref:System.IO.Directory.GetFiles?qualifyHint=False> and <xref:System.IO.Directory.GetDirectories?qualifyHint=False> methods to display the contents of the C:\Windows directory.  
  
## Example  
  
```  
// enum_files.cpp  
// compile with: /clr  
using namespace System;  
using namespace System::IO;  
  
int main()  
{  
   String^ folder = "C:\\";  
   array<String^>^ dir = Directory::GetDirectories( folder );  
   Console::WriteLine("--== Directories inside '{0}' ==--", folder);  
   for (int i=0; i<dir->Length; i++)  
      Console::WriteLine(dir[i]);  
  
   array<String^>^ file = Directory::GetFiles( folder );  
   Console::WriteLine("--== Files inside '{0}' ==--", folder);  
   for (int i=0; i<file->Length; i++)  
      Console::WriteLine(file[i]);  
  
   return 0;  
}  
```  
  
## See Also  
 [File and Stream I-O](../Topic/File%20and%20Stream%20I-O.md)   
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)