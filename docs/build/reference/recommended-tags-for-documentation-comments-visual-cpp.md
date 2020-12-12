---
description: "Learn more about: Recommended Tags for Documentation Comments"
title: "Recommended Tags for Documentation Comments (C++ documentation comments)"
ms.date: "11/04/2016"
ms.assetid: 6548e798-5235-4a38-9482-bdc7b88f40a9
---
# Recommended Tags for Documentation Comments

The MSVC compiler will process documentation comments in your code and creates an .xdc file for each compiland, and xdcmake.exe will process the .xdc files to an .xml file. Processing the .xml file to create documentation is a detail that needs to be implemented at your site.

Tags are processed on constructs such as types and type members.

Tags must immediately precede types or members.

> [!NOTE]
> Documentation comments cannot be applied to a namespace or on out of line definition for properties and events; documentation comments must on the in-class declarations.

The compiler will process any tag that is valid XML. The following tags provide commonly used functionality in user documentation:

[`<c>`](c-visual-cpp.md)
[`<code>`](code-visual-cpp.md)
[`<example>`](example-visual-cpp.md)
[`<exception>`](exception-visual-cpp.md)<sup>1</sup>
[`<include>`](include-visual-cpp.md)<sup>1</sup>
[`<list>`](list-visual-cpp.md)
[`<para>`](para-visual-cpp.md)
[`<param>`](param-visual-cpp.md)<sup>1</sup>
[`<paramref>`](paramref-visual-cpp.md)<sup>1</sup>
[`<permission>`](permission-visual-cpp.md)<sup>1</sup>
[`<remarks>`](remarks-visual-cpp.md)
[`<returns>`](returns-visual-cpp.md)
[`<see>`](see-visual-cpp.md)<sup>1</sup>
[`<seealso>`](seealso-visual-cpp.md)<sup>1</sup>
[`<summary>`](summary-visual-cpp.md)
[`<value>`](value-visual-cpp.md)

1. Compiler verifies syntax.

In the current release, the MSVC compiler does not support `<paramref>`, a tag that is supported by other Visual Studio compilers. Visual C++ may support `<paramref>` in a future release.

## See also

[XML Documentation](xml-documentation-visual-cpp.md)
