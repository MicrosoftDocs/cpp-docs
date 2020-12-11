---
description: "Learn more about: Template ref classes (C++/CX)"
title: "Template ref classes (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: a24d5f45-8dbb-4540-958f-c76c90d8ed93
---
# Template ref classes (C++/CX)

C++ templates are not published to metadata and therefore cannot have public or protected accessibility in your program. You can, of course, use standard C++ templates internally in your program. In addition, you can define a private ref class as a template and you can declare an explicitly specialized template ref class as a private member in a public ref class.

## Authoring ref class templates

The following example shows how to declare a private ref class as a template, and also how to declare a standard C++ template and how declare them both as members in a public ref class. Note that the standard C++ template can be specialized by a Windows Runtime type, in this case a Platform::String^.

[!code-cpp[cx_templates#01](../cppcx/codesnippet/CPP/templatedemo/class1.h#01)]

## See also

[Type System (C++/CX)](../cppcx/type-system-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
