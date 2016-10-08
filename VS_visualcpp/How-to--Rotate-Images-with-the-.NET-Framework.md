---
title: "How to: Rotate Images with the .NET Framework"
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
ms.assetid: e32104d5-87d0-47a9-a22f-9bc835b7e8d7
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
# How to: Rotate Images with the .NET Framework
The following code example demonstrates the use of the <xref:System.Drawing.Image?qualifyHint=True> class to load an image from disk, rotate it 90 degrees, and save it as a new .jpg file.  
  
> [!NOTE]
>  GDI+ is included with Windows XP and is available as a redistributable for Windows NT 4.0 SP 6, Windows 2000, Windows 98, and Windows Millennium Edition. To download the latest redistributable, see [http://go.microsoft.com/fwlink/?linkid=11232](http://go.microsoft.com/fwlink/?linkid=11232). For more information, see [GDI+](_gdiplus_GDI_start_cpp).  
  
## Example  
  
```  
#using <system.drawing.dll>  
  
using namespace System;  
using namespace System::Drawing;  
  
int main()  
{  
   Image^ image = Image::FromFile("SampleImage.jpg");  
   image->RotateFlip( RotateFlipType::Rotate90FlipNone );  
   image->Save("SampleImage_rotated.jpg");  
   return 0;  
}  
```  
  
## See Also  
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)