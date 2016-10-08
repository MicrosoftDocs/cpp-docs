---
title: "How to: Draw Shapes with the .NET Framework"
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
ms.assetid: ffad5ae7-6ef4-4550-8940-be3f209a101d
caps.latest.revision: 15
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
# How to: Draw Shapes with the .NET Framework
The following code example uses the <xref:System.Drawing.Graphics?qualifyHint=False> class to modify the <xref:System.Windows.Forms.Form.OnPaint?qualifyHint=False> event handler to retrieve a pointer to the <xref:System.Drawing.Graphics?qualifyHint=False> object for the main form. This pointer is then used to set the background color of the form and draw a line and an arc using the <xref:System.Drawing.Graphics.DrawLine?qualifyHint=True> and <xref:System.Drawing.Graphics.DrawArc?qualifyHint=False> methods.  
  
> [!NOTE]
>  GDI+ is included with Windows XP and is available as a redistributable for Windows NT 4.0 SP 6, Windows 2000, Windows 98, and Windows Me. To download the latest redistributable, see [http://go.microsoft.com/fwlink/?linkid=11232](http://go.microsoft.com/fwlink/?linkid=11232). For more information, see [GDI+](_gdiplus_GDI_start_cpp).  
  
## Example  
  
```  
#using <system.drawing.dll>  
using namespace System;  
using namespace System::Drawing;  
// ...  
protected:   
virtual Void Form1::OnPaint(PaintEventArgs^ pe ) override  
{  
   Graphics^ g = pe->Graphics;  
   g->Clear(Color::AntiqueWhite);  
  
   Rectangle rect = Form::ClientRectangle;  
   Rectangle smallRect;  
   smallRect.X = rect.X + rect.Width / 4;  
   smallRect.Y = rect.Y + rect.Height / 4;  
   smallRect.Width = rect.Width / 2;  
   smallRect.Height = rect.Height / 2;  
  
   Pen^ redPen = gcnew Pen(Color::Red);  
   redPen->Width = 4;  
   g->DrawLine(redPen, 0, 0, rect.Width, rect.Height);  
  
   Pen^ bluePen = gcnew Pen(Color::Blue);  
   bluePen->Width = 10;  
   g->DrawArc( bluePen, smallRect, 90, 270 );  
}  
```  
  
## See Also  
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)   
 [System::Drawing namespace](https://msdn.microsoft.com/en-us/library/system.drawing.aspx)