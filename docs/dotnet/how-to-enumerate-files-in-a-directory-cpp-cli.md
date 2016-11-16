---
title: "How to: Enumerate Files in a Directory (C++-CLI) | Microsoft Docs"
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
  - "files [C++], listing files"
  - "directories [C++], listing files"
ms.assetid: ebfc2666-229f-4b94-a9a1-e8f1b5d946d6
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
# How to: Enumerate Files in a Directory (C++/CLI)
The following code example demonstrates how to retrieve a list of the files in a directory. Additionally, the subdirectories are enumerated. The following code example uses the <xref:System.IO.Directory.GetFiles%2A><xref:System.IO.Directory.GetFiles%2A> and <xref:System.IO.Directory.GetDirectories%2A> methods to display the contents of the C:\Windows directory.  
  
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
 [File and Stream I-O](http://msdn.microsoft.com/Library/4f4a33a9-66b7-4cd7-a285-4ad3e4276cd2)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)