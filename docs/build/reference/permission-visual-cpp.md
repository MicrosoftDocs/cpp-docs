---
description: "Learn more about: &lt;permission&gt;"
title: "&lt;permission> (C++ documentation comments)"
ms.date: "11/04/2016"
f1_keywords: ["permission", "<permission>"]
helpviewer_keywords: ["<permission> C++ XML tag", "permission C++ XML tag"]
ms.assetid: 537ee2bc-95bd-48e4-9ce6-3420c3da87f4
---
# &lt;permission&gt;

The \<permission> tag lets you document the access of a member. <xref:System.Security.PermissionSet> lets you specify access to a member.

## Syntax

```
<permission cref="member">description</permission>
```

#### Parameters

*member*<br/>
A reference to a member or field that is available to be called from the current compilation environment. The compiler checks that the given code element exists and translates `member` to the canonical element name in the output XML.  Enclose the name in single or double quotation marks.

The compiler issues a warning if it does not find `member`.

For information on how to create a cref reference to a generic type, see [\<see>](see-visual-cpp.md).

*description*<br/>
A description of the access to the member.

## Remarks

Compile with [/doc](doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

The MSVC compiler will attempt to resolve cref references in one pass through the documentation comments.  Therefore, if using the C++ lookup rules, a symbol is not found by the compiler the reference will be marked as unresolved. See [\<seealso>](seealso-visual-cpp.md) for more information.

## Example

```cpp
// xml_permission_tag.cpp
// compile with: /clr /doc /LD
// post-build command: xdcmake xml_permission_tag.dll
using namespace System;
/// Text for class TestClass.
public ref class TestClass {
   /// <permission cref="System::Security::PermissionSet">Everyone can access this method.</permission>
   void Test() {}
};
```

## See also

[XML Documentation](xml-documentation-visual-cpp.md)
