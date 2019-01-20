---
title: "Recommended Tags for Documentation Comments (Visual C++)"
ms.date: "11/04/2016"
ms.assetid: 6548e798-5235-4a38-9482-bdc7b88f40a9
---
# Recommended Tags for Documentation Comments (Visual C++)

The Visual C++ compiler will process documentation comments in your code and creates an .xdc file for each compiland, and xdcmake.exe will process the .xdc files to an .xml file. Processing the .xml file to create documentation is a detail that needs to be implemented at your site.

Tags are processed on constructs such as types and type members.

Tags must immediately precede types or members.

> [!NOTE]
>  Documentation comments cannot be applied to a namespace or on out of line definition for properties and events; documentation comments must on the in-class declarations.

The compiler will process any tag that is valid XML. The following tags provide commonly used functionality in user documentation:

||||
|-|-|-|
|[\<c>](../ide/c-visual-cpp.md)|[\<code>](../ide/code-visual-cpp.md)|[\<example>](../ide/example-visual-cpp.md)|
|[\<exception>](../ide/exception-visual-cpp.md)1|[\<include>](../ide/include-visual-cpp.md)1|[\<list>](../ide/list-visual-cpp.md)|
|[\<para>](../ide/para-visual-cpp.md)|[\<param>](../ide/param-visual-cpp.md)1|[\<paramref>](../ide/paramref-visual-cpp.md)1|
|[\<permission>](../ide/permission-visual-cpp.md)1|[\<remarks>](../ide/remarks-visual-cpp.md)|[\<returns>](../ide/returns-visual-cpp.md)|
|[\<see>](../ide/see-visual-cpp.md)1|[\<seealso>](../ide/seealso-visual-cpp.md)1|[\<summary>](../ide/summary-visual-cpp.md)|
|[\<value>](../ide/value-visual-cpp.md)|||

1. Compiler verifies syntax.

In the current release, the Visual C++ compiler does not support `<paramref>`, a tag that is supported by other Visual Studio compilers. Visual C++ may support `<paramref>` in a future release.

## See also

- [XML Documentation](../ide/xml-documentation-visual-cpp.md)
