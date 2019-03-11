---
title: "__outbytestring"
ms.date: "11/04/2016"
f1_keywords: ["__outbytestring"]
helpviewer_keywords: ["rep outsb instruction", "__outbytestring intrinsic", "outsb instruction"]
ms.assetid: c9150661-9c18-427f-bae8-710bba6ed78c
---
# __outbytestring

**Microsoft Specific**

Generates the `rep outsb` instruction,which sends the first `Count` bytes of data pointed to by `Buffer` to the port specified by `Port`.

## Syntax

```
void __outbytestring(
   unsigned short Port,
   unsigned char* Buffer,
   unsigned long Count
);
```

#### Parameters

*Port*<br/>
[in] The port to send the data to.

*Buffer*<br/>
[in] The data to be sent out the specified port.

*Count*<br/>
[in] The number of bytes of data to be sent.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__outbytestring`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

**END Microsoft Specific**

## See also

[Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
