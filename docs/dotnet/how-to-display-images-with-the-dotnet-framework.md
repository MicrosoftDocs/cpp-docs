---
title: "How to: Display Images with the .NET Framework | Microsoft Docs"
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
  - "GDI+ [C++], displaying images"
  - "graphics [C++], displaying images"
ms.assetid: c0eddfa1-4bd6-4af5-a533-1fa84b360325
caps.latest.revision: 16
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
# How to: Display Images with the .NET Framework
The following code example modifies the OnPaint event handler to retrieve a pointer to the <xref:System.Drawing.Graphics> object for the main form. The <xref:System.Windows.Forms.Form.OnPaint%2A> function is intended for a Windows Forms application, most likely created with a Visual Studio application wizard.  
  
 The image is represented by the <xref:System.Drawing.Image> class. The image data is loaded from a .jpg file using the <xref:System.Drawing.Image.FromFile%2A?displayProperty=fullName> method. Before the image is drawn to the form, the form is resized to accommodate the image. The drawing of the image is performed with the <xref:System.Drawing.Graphics.DrawImage%2A?displayProperty=fullName> method.  
  
 The <xref:System.Drawing.Graphics> and <xref:System.Drawing.Image> classes are both in the <xref:System.Drawing?displayProperty=fullName> namespace.  
  
> [!NOTE]
>  GDI+ is included with Windows XP and is available as a redistributable for Windows NT 4.0 SP 6, Windows 2000, Windows 98, and Windows Me. To download the latest redistributable, see [http://go.microsoft.com/fwlink/?linkid=11232](http://go.microsoft.com/fwlink/?linkid=11232).   
  
## Example  
  
```  
#using <system.drawing.dll>  
  
using namespace System;  
using namespace System::Drawing;  
  
protected:  
virtual Void Form1::OnPaint(PaintEventArgs^ pe) override  
{  
    Graphics^ g = pe->Graphics;  
    Image^ image = Image::FromFile("SampleImage.jpg");  
    Form::ClientSize = image->Size;  
    g->DrawImage( image, 0, 0, image->Size.Width, image->Size.Height );  
}  
```  
  
## See Also  
 <xref:System.Drawing?displayProperty=fullName>   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)