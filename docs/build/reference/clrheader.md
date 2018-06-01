---
title: "-CLRHEADER | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/CLRHEADER"]
dev_langs: ["C++"]
helpviewer_keywords: ["-CLRHEADER dumpbin option", "/CLRHEADER dumpbin option", "CLRHEADER dumpbin option"]
ms.assetid: cf73424f-4541-47e2-b94e-69b95266ef2a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /CLRHEADER

Display CLR-specific information.

## Syntax

> /CLRHEADER *file*

### Arguments

|||
|-|-|
*file*| An image file built with [/clr](../../build/reference/clr-common-language-runtime-compilation.md).

## Remarks

**/CLRHEADER** displays information about the .NET headers used in any managed program. The output shows the location and size, in bytes, of the .NET header and sections in the header.

Only the [/HEADERS](../../build/reference/headers.md) DUMPBIN option is available for use on files produced with the [/GL](../../build/reference/gl-whole-program-optimization.md) compiler option.

When **/CLRHEADER** is used on a file that was compiled with /clr, there will be a **clr Header:** section in the dumpbin output. The value of **flags** indicates which /clr option was used:

- 0  -- /clr (image may contain native code).

You can also programmatically check if an image was built for the common language runtime.  For more information, see [How to: Determine if an Image is Native or CLR](../../dotnet/how-to-determine-if-an-image-is-native-or-clr.md).

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017. Code that must be "pure" or "safe" should be ported to C#.

## See also

- [DUMPBIN Options](../../build/reference/dumpbin-options.md)
