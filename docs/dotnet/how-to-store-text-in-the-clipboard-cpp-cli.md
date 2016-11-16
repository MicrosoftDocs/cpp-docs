---
title: "How to: Store Text in the Clipboard (C++-CLI) | Microsoft Docs"
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
  - "text, storing in Clipboard"
  - "Clipboard, storing text"
ms.assetid: 9996023f-b700-47ad-8ad9-1ba201eaa5a6
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
# How to: Store Text in the Clipboard (C++/CLI)
The following code example uses the <xref:System.Windows.Forms.Clipboard> object defined in the <xref:System.Windows.Forms> namespace to store a string. This object provides two member functions: <xref:System.Windows.Forms.Clipboard.SetDataObject%2A> and <xref:System.Windows.Forms.Clipboard.GetDataObject%2A>. Data is stored in the Clipboard by sending any object derived from <xref:System.Object> to <xref:System.Windows.Forms.Clipboard.SetDataObject%2A>.  
  
## Example  
  
```  
// store_clipboard.cpp  
// compile with: /clr  
#using <System.dll>  
#using <System.Drawing.dll>  
#using <System.Windows.Forms.dll>  
  
using namespace System;  
using namespace System::Windows::Forms;  
  
[STAThread] int main()  
{  
   String^ str = "This text is copied into the Clipboard.";  
  
   // Use 'true' as the second argument if  
   // the data is to remain in the clipboard  
   // after the program terminates.  
   Clipboard::SetDataObject(str, true);  
  
   Console::WriteLine("Added text to the Clipboard.");  
  
   return 0;  
}  
```  
  
## See Also  
 [How to: Retrieve Text from the Clipboard (C++/CLI)](../dotnet/how-to-retrieve-text-from-the-clipboard-cpp-cli.md)   
 [Windows Operations (C++/CLI)](../dotnet/windows-operations-cpp-cli.md)   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)