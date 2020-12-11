---
description: "Learn more about: /CLRHEADER"
title: "/CLRHEADER"
ms.date: "05/16/2019"
f1_keywords: ["/CLRHEADER"]
helpviewer_keywords: ["-CLRHEADER dumpbin option", "/CLRHEADER dumpbin option", "CLRHEADER dumpbin option"]
ms.assetid: cf73424f-4541-47e2-b94e-69b95266ef2a
---
# /CLRHEADER

Display CLR-specific information.

## Syntax

> /CLRHEADER *file*

### Arguments

*file*<br/>
An image file built with [/clr](clr-common-language-runtime-compilation.md).

## Remarks

**/CLRHEADER** displays information about the .NET headers used in any managed program. The output shows the location and size, in bytes, of the .NET header and sections in the header.

Only the [/HEADERS](headers.md) DUMPBIN option is available for use on files produced with the [/GL](gl-whole-program-optimization.md) compiler option.

When **/CLRHEADER** is used on a file that was compiled with /clr, there will be a **clr Header:** section in the dumpbin output. The value of **flags** indicates which /clr option was used:

- 0  -- /clr (image may contain native code).

You can also programmatically check if an image was built for the common language runtime.  For more information, see [How to: Determine if an Image is Native or CLR](../../dotnet/how-to-determine-if-an-image-is-native-or-clr.md).

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017 and later. Code that must be "pure" or "safe" should be ported to C#.

## See also

- [DUMPBIN Options](dumpbin-options.md)
