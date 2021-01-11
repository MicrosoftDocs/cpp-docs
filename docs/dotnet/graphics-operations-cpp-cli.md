---
description: "Learn more about: Graphics Operations (C++/CLI)"
title: "Graphics Operations (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["GDI+ [C++]", ".NET Framework [C++], graphics", "images [C++], .NET Framework and", "GDI+ [C++], about graphics operations", "graphics [C++], .NET Framework and", "GDI+ [C++], displaying images", "graphics [C++], displaying images", "GDI+, drawing shapes", "drawing, shapes", "shapes", "shapes, drawing", "GDI+ [C++], rotating images", "graphics [C++], rotating images", "GDI+ [C++], converting image file formats", "graphics [C++], converting image file formats"]
ms.assetid: bba27228-b9b3-4c9c-b31c-a04b76702a95
---
# Graphics Operations (C++/CLI)

Demonstrates image manipulation using the Windows SDK.

The following topics demonstrate the use of the <xref:System.Drawing.Image?displayProperty=fullName> class to perform image manipulation.

## <a name="display"></a> Display Images with the .NET Framework

The following code example modifies the OnPaint event handler to retrieve a pointer to the <xref:System.Drawing.Graphics> object for the main form. The <xref:System.Windows.Forms.Form.OnPaint%2A> function is intended for a Windows Forms application, most likely created with a Visual Studio application wizard.

The image is represented by the <xref:System.Drawing.Image> class. The image data is loaded from a .jpg file using the <xref:System.Drawing.Image.FromFile%2A?displayProperty=fullName> method. Before the image is drawn to the form, the form is resized to accommodate the image. The drawing of the image is performed with the <xref:System.Drawing.Graphics.DrawImage%2A?displayProperty=fullName> method.

The <xref:System.Drawing.Graphics> and <xref:System.Drawing.Image> classes are both in the <xref:System.Drawing?displayProperty=fullName> namespace.

### Example

```cpp
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

## <a name="draw"></a> Draw Shapes with the .NET Framework

The following code example uses the <xref:System.Drawing.Graphics> class to modify the <xref:System.Windows.Forms.Form.OnPaint%2A> event handler to retrieve a pointer to the <xref:System.Drawing.Graphics> object for the main form. This pointer is then used to set the background color of the form and draw a line and an arc using the <xref:System.Drawing.Graphics.DrawLine%2A?displayProperty=fullName> and <xref:System.Drawing.Graphics.DrawArc%2A> methods.

### Example

```cpp
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

## <a name="rotate"></a> Rotate Images with the .NET Framework

The following code example demonstrates the use of the <xref:System.Drawing.Image?displayProperty=fullName> class to load an image from disk, rotate it 90 degrees, and save it as a new .jpg file.

### Example

```cpp
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

## <a name="convert"></a> Convert Image File Formats with the .NET Framework

The following code example demonstrates the <xref:System.Drawing.Image?displayProperty=fullName> class and the <xref:System.Drawing.Imaging.ImageFormat?displayProperty=fullName> enumeration used to convert and save image files. The following code loads an image from a .jpg file and then saves it in both .gif and .bmp file formats.

### Example

```cpp
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

## Related Sections

[Getting Started with Graphics Programming](/dotnet/framework/winforms/advanced/getting-started-with-graphics-programming)

[About GDI+ Managed Code](/dotnet/framework/winforms/advanced/about-gdi-managed-code)

## See also

[.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

<xref:System.Drawing>
