---
description: "Learn more about: Recommended tags for documentation comments"
title: "Recommended tags for documentation comments (C++ documentation comments)"
ms.date: 12/03/2021
ms.assetid: 6548e798-5235-4a38-9482-bdc7b88f40a9
---
# Recommended tags for documentation comments

The MSVC compiler processes documentation comments in your code to create an XDC file for each compiled source file. Then, xdcmake.exe processes the XDC files to create an XML documentation file. Processing the XML file to create documentation is a detail that needs to be implemented at your site.

Tags are processed on constructs such as types and type members.

Tags must immediately precede types or members.

> [!NOTE]
> Documentation comments can't be applied to a namespace or on out of line definitions for properties and events; documentation comments must be on the in-class declarations.

The compiler will process any tag that is valid XML. The following tags provide commonly used functionality in user documentation:

[`<c>`](c-visual-cpp.md)\
[`<code>`](code-visual-cpp.md)\
[`<example>`](example-visual-cpp.md)\
[`<exception>`](exception-visual-cpp.md)<sup>1</sup>\
[`<include>`](include-visual-cpp.md)<sup>1</sup>\
[`<list>`](list-visual-cpp.md)\
[`<para>`](para-visual-cpp.md)\
[`<param>`](param-visual-cpp.md)<sup>1</sup>\
[`<paramref>`](paramref-visual-cpp.md)<sup>1</sup>\
[`<permission>`](permission-visual-cpp.md)<sup>1</sup>\
[`<remarks>`](remarks-visual-cpp.md)\
[`<returns>`](returns-visual-cpp.md)\
[`<see>`](see-visual-cpp.md)<sup>1</sup>\
[`<seealso>`](seealso-visual-cpp.md)<sup>1</sup>\
[`<summary>`](summary-visual-cpp.md)\
[`<value>`](value-visual-cpp.md)

1. Compiler verifies syntax.

In the current release, the MSVC compiler doesn't support `<paramref>`, a tag that's supported by other Visual Studio compilers. Visual C++ may support `<paramref>` in a future release.

## See also

[XML documentation](xml-documentation-visual-cpp.md)
