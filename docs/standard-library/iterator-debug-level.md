---
description: "Learn more about: _ITERATOR_DEBUG_LEVEL"
title: "_ITERATOR_DEBUG_LEVEL"
ms.date: "11/04/2016"
f1_keywords: ["_ITERATOR_DEBUG_LEVEL"]
helpviewer_keywords: ["_ITERATOR_DEBUG_LEVEL"]
ms.assetid: 718549cd-a9a9-4ab3-867b-aac00b321e67
---
# _ITERATOR_DEBUG_LEVEL

The _ITERATOR_DEBUG_LEVEL macro controls whether [checked iterators](../standard-library/checked-iterators.md) and [debug iterator support](../standard-library/debug-iterator-support.md) are enabled. This macro supersedes and combines the functionality of the older _SECURE_SCL and _HAS_ITERATOR_DEBUGGING macros.

## Macro Values

The following table summarizes the possible values for the _ITERATOR_DEBUG_LEVEL macro.

|Compilation mode|Macro value|Description|
|----------------------|----------------|-----------------|
|**Debug**|||
||0|Disables checked iterators and disables iterator debugging.|
||1|Enables checked iterators and disables iterator debugging.|
||2 (Default)|Enables iterator debugging; checked iterators are not relevant.|
|**Release**|||
||0 (Default)|Disables checked iterators.|
||1|Enables checked iterators; iterator debugging is not relevant.|

In release mode, the compiler generates an error if you specify _ITERATOR_DEBUG_LEVEL as 2.

## Remarks

The _ITERATOR_DEBUG_LEVEL macro controls whether [checked iterators](../standard-library/checked-iterators.md) are enabled, and in Debug mode, whether [debug iterator support](../standard-library/debug-iterator-support.md) is enabled. If _ITERATOR_DEBUG_LEVEL is defined as 1 or 2, checked iterators ensure that the bounds of your containers are not overwritten. If _ITERATOR_DEBUG_LEVEL is 0, iterators are not checked. When _ITERATOR_DEBUG_LEVEL is defined as 1, any unsafe iterator use causes a runtime error and the program is terminated. When _ITERATOR_DEBUG_LEVEL is defined as 2, unsafe iterator use causes an assert and a runtime error dialog that lets you break into the debugger.

Because the _ITERATOR_DEBUG_LEVEL macro supports similar functionality to the _SECURE_SCL and _HAS_ITERATOR_DEBUGGING macros, you may be uncertain which macro and macro value to use in a particular situation. To prevent confusion, we recommend that you use only the _ITERATOR_DEBUG_LEVEL macro. This table describes the equivalent _ITERATOR_DEBUG_LEVEL macro value to use for various values of _SECURE_SCL and _HAS_ITERATOR_DEBUGGING in existing code.

|**_ITERATOR_DEBUG_LEVEL** |**_SECURE_SCL** |**_HAS_ITERATOR_DEBUGGING**|
|---|---|---|
|0 (Release default)|0 (disabled)|0 (disabled)|
|1|1 (enabled)|0 (disabled)|
|2 (Debug default)|(not relevant)|1 (enabled in Debug mode)|

For information on how to disable warnings about checked iterators, see [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).

### Example

To specify a value for the _ITERATOR_DEBUG_LEVEL macro, use a [/D](../build/reference/d-preprocessor-definitions.md) compiler option to define it on the command line, or use `#define` before the C++ Standard Library headers are included in your source files. For example, on the command line, to compile *sample.cpp* in debug mode and to use debug iterator support, you can specify the _ITERATOR_DEBUG_LEVEL macro definition:

`cl /EHsc /Zi /MDd /D_ITERATOR_DEBUG_LEVEL=1 sample.cpp`

In a source file, specify the macro before any standard library headers that define iterators.

```cpp
// sample.cpp

#define _ITERATOR_DEBUG_LEVEL 1

#include <vector>

// ...
```

## See also

[Checked Iterators](../standard-library/checked-iterators.md)\
[Debug Iterator Support](../standard-library/debug-iterator-support.md)\
[Safe Libraries: C++ Standard Library](../standard-library/safe-libraries-cpp-standard-library.md)
