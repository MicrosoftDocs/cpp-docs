---
title: "&lt;returns&gt; (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-ide"]
ms.topic: "conceptual"
f1_keywords: ["returns", "<returns>"]
dev_langs: ["C++"]
helpviewer_keywords: ["returns C++ XML tag", "<returns> C++ XML tag"]
ms.assetid: 5e3b0ed9-838d-4953-a93e-76d2d0a19fb9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# &lt;returns&gt; (Visual C++)

The \<returns> tag should be used in the comment for a method declaration to describe the return value.

## Syntax

```
<returns>description</returns>
```

#### Parameters

*description*<br/>
A description of the return value.

## Remarks

Compile with [/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) to process documentation comments to a file.

## Example

```
// xml_returns_tag.cpp
// compile with: /LD /clr /doc
// post-build command: xdcmake xml_returns_tag.dll

/// Text for class MyClass.
public ref class MyClass {
public:
   /// <returns>Returns zero.</returns>
   int GetZero() { return 0; }
};
```

## See Also

[XML Documentation](../ide/xml-documentation-visual-cpp.md)