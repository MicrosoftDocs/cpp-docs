---
title: "marshal_context::marshal_context"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["msclr::interop::marshal_context::marshal_context", "marshal_context::marshal_context", "msclr.interop.marshal_context.marshal_context", "marshal_context.marshal_context"]
helpviewer_keywords: ["marshal_context class [C++], operations"]
ms.assetid: 5f08c895-60b0-4f72-97ff-7ae37c68e853
---
# marshal_context::marshal_context

Constructs a `marshal_context` object to use for data conversion between managed and native data types.

## Syntax

```
marshal_context();
```

## Remarks

Some data conversions require a marshal context. See [Overview of Marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md) for more information about which translations require a context and which marshaling file has to be included in your application.

## Example

See the example for [marshal_context::marshal_as](../dotnet/marshal-context-marshal-as.md).

## Requirements

**Header file:** \<msclr\marshal.h>, \<msclr\marshal_windows.h>, \<msclr\marshal_cppstd.h>, or \<msclr\marshal_atl.h>

**Namespace:** msclr::interop

## See Also

[Overview of Marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md)<br/>
[marshal_as](../dotnet/marshal-as.md)<br/>
[marshal_context Class](../dotnet/marshal-context-class.md)