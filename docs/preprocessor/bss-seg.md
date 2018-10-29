---
title: "bss_seg"
ms.date: "10/22/2018"
f1_keywords: ["vc-pragma.bss_seg", "bss_seg_CPP"]
helpviewer_keywords: ["pragmas, bss_seg", "bss_seg pragma"]
ms.assetid: 755f0154-de51-4778-97d3-c9b24e445079
---
# bss_seg

Specifies the segment where uninitialized variables are stored in the .obj file.

## Syntax

```
#pragma bss_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )
```

### Parameters

**push**<br/>
(Optional) Puts a record on the internal compiler stack. A *pu*sh* can have an *identifier* and *segment-name*.

**pop**<br/>
(Optional) Removes a record from the top of the internal compiler stack.

*identifier*<br/>
(Optional) When used with **push**, assigns a name to the record on the internal compiler stack. *identifier* enables multiple records to be popped with a single **pop** command. When used with **pop**, the directive pops records off the internal stack until *identifier* is removed; if *identifier* is not found on the internal stack, nothing is popped.

*"segment-name"*<br/>
(Optional) The name of a segment. When used with **pop**, the stack is popped and *segment-name* becomes the active segment name.

*"segment-class"*<br/>
(Optional) Included for compatibility with C++ prior to version 2.0. It is ignored.

## Remarks

.Obj files can be viewed with the [dumpbin](../build/reference/dumpbin-command-line.md) application. The default segment in the .obj file for uninitialized data is .bss. In some cases use of **bss_seg** can speed load times by grouping uninitialized data into one section.

**bss_seg** with no parameters resets the segment to .bss.

Data allocated using the **bss_seg** pragma does not retain any information about its location.

You can also specify sections for initialized data ([data_seg](../preprocessor/data-seg.md)), functions ([code_seg](../preprocessor/code-seg.md)), and const variables ([const_seg](../preprocessor/const-seg.md)).

See [/SECTION](../build/reference/section-specify-section-attributes.md) for a list of names you should not use when creating a section.

## Example

```cpp
// pragma_directive_bss_seg.cpp
int i;                     // stored in .bss
#pragma bss_seg(".my_data1")
int j;                     // stored in .my_data1

#pragma bss_seg(push, stack1, ".my_data2")
int l;                     // stored in .my_data2

#pragma bss_seg(pop, stack1)   // pop stack1 from stack
int m;                     // stored in .my_data1

int main() {
}
```

## See also

[Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
