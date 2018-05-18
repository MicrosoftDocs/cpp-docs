---
title: "How to: Convert Image File Formats with the .NET Framework | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["GDI+ [C++], converting image file formats", "graphics [C++], converting image file formats"]
ms.assetid: 5d5384b0-b9b7-4262-b9ad-c4cb95f75ee4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# How to: Convert Image File Formats with the .NET Framework
The following code example demonstrates the <xref:System.Drawing.Image?displayProperty=fullName> class and the <xref:System.Drawing.Imaging.ImageFormat?displayProperty=fullName> enumeration used to convert and save image files. The following code loads an image from a .jpg file and then saves it in both .gif and .bmp file formats.  
  
## Example  
  
```  
#using <system.drawing.dll>  
  
using namespace System;  
using namespace System::Drawing;  
using namespace System::Drawing::Imaging;  
  
int main()  
{  
   Image^ image = Image::FromFile("SampleImage.jpg");  
   image->Save("SampleImage.png", ImageFormat::Png);  
   image->Save("SampleImage.bmp", ImageFormat::Bmp);  
  
   return 0;  
}  
```  
  
## See Also  
 <xref:System.Drawing>   
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)