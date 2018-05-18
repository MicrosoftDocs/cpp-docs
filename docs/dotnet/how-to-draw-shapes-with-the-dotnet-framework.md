---
title: "How to: Draw Shapes with the .NET Framework | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["GDI+, drawing shapes", "drawing, shapes", "shapes", "shapes, drawing"]
ms.assetid: ffad5ae7-6ef4-4550-8940-be3f209a101d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# How to: Draw Shapes with the .NET Framework
The following code example uses the <xref:System.Drawing.Graphics> class to modify the <xref:System.Windows.Forms.Form.OnPaint%2A> event handler to retrieve a pointer to the <xref:System.Drawing.Graphics> object for the main form. This pointer is then used to set the background color of the form and draw a line and an arc using the <xref:System.Drawing.Graphics.DrawLine%2A?displayProperty=fullName> and <xref:System.Drawing.Graphics.DrawArc%2A> methods.  
  
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
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [System::Drawing namespace](https://msdn.microsoft.com/en-us/library/system.drawing.aspx)