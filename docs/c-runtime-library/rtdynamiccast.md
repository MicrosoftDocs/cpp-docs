---
title: "__RTDynamicCast"
ms.date: "11/04/2016"
apiname: ["__RTDynamicCast"]
apilocation: ["msvcr90.dll", "msvcr110.dll", "msvcr120.dll", "msvcrt.dll", "msvcr100.dll", "msvcr80.dll", "msvcr110_clr0400.dll"]
apitype: "DLLExport"
f1_keywords: ["__RTDynamicCast"]
helpviewer_keywords: ["__RTDynamicCast"]
ms.assetid: 56aa2d7a-aa47-46ef-830d-e37175611239
---
# __RTDynamicCast

Runtime implementation of the [dynamic_cast](../cpp/dynamic-cast-operator.md) operator.

## Syntax

```cpp
PVOID __RTDynamicCast (
   PVOID inptr,
   LONG VfDelta,
   PVOID SrcType,
   PVOID TargetType,
   BOOL isReference
   ) throw(...)
```

#### Parameters

*inptr*<br/>
Pointer to a polymorphic object.

*VfDelta*<br/>
Offset of virtual function pointer in object.

*SrcType*<br/>
Static type of object pointed to by the `inptr` parameter.

*TargetType*<br/>
Intended result of cast.

*isReference*<br/>
**true** if input is a reference; **false** if input is a pointer.

## Return Value

Pointer to the appropriate sub-object, if successful; otherwise, **NULL**.

## Exceptions

`bad_cast()` if the input to `dynamic_cast<>` is a reference and the cast fails.

## Remarks

Converts `inptr` to an object of type `TargetType`. The type of `inptr` must be a pointer if `TargetType` is a pointer, or an l-value if `TargetType` is a reference. `TargetType` must be a pointer or a reference to a previously defined class type, or a pointer to void.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|__RTDynamicCast|rtti.h|