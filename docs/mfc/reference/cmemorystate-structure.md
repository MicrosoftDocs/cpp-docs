---
description: "Learn more about: CMemoryState Structure"
title: "CMemoryState Structure"
ms.date: "11/04/2016"
f1_keywords: ["CMemoryState"]
helpviewer_keywords: ["CMemoryState structure [MFC]", "memory leaks [MFC], detecting", "detecting memory leaks [MFC]"]
ms.assetid: 229d9de7-a6f3-4cc6-805b-5a9d9b1bfe1d
---
# CMemoryState Structure

Provides a convenient way to detect memory leaks in your program.

## Syntax

```
struct CMemoryState
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMemoryState::CMemoryState](#cmemorystate)|Constructs a class-like structure that controls memory checkpoints.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMemoryState::Checkpoint](#checkpoint)|Obtains a snapshot (checkpoint) of the current memory state.|
|[CMemoryState::Difference](#difference)|Computes the difference between two objects of type `CMemoryState`.|
|[CMemoryState::DumpAllObjectsSince](#dumpallobjectssince)|Dumps a summary of all currently allocated objects since a previous checkpoint.|
|[CMemoryState::DumpStatistics](#dumpstatistics)|Prints memory allocation statistics for a `CMemoryState` object.|

## Remarks

`CMemoryState` is a structure and does not have a base class.

A "memory leak" occurs when memory for an object is allocated on the heap but not deallocated when it is no longer required. Such memory leaks can eventually lead to out-of-memory errors. There are several ways to allocate and deallocate memory in your program:

- Using the `malloc`/ `free` family of functions from the run-time library.

- Using the Windows API memory management functions, `LocalAlloc`/ `LocalFree` and `GlobalAlloc`/ `GlobalFree`.

- Using the C++ **`new`** and **`delete`** operators.

The `CMemoryState` diagnostics only help detect memory leaks caused when memory allocated using the **`new`** operator is not deallocated using **`delete`**. The other two groups of memory-management functions are for non-C++ programs, and mixing them with **`new`** and **`delete`** in the same program is not recommended. An additional macro, DEBUG_NEW, is provided to replace the **`new`** operator when you need file and line-number tracking of memory allocations. DEBUG_NEW is used whenever you would normally use the **`new`** operator.

As with other diagnostics, the `CMemoryState` diagnostics are only available in debug versions of your program. A debug version must have the _DEBUG constant defined.

If you suspect your program has a memory leak, you can use the `Checkpoint`, `Difference`, and `DumpStatistics` functions to discover the difference between the memory state (objects allocated) at two different points in program execution. This information can be useful in determining whether a function is cleaning up all the objects it allocates.

If simply knowing where the imbalance in allocation and deallocation occurs does not provide enough information, you can use the `DumpAllObjectsSince` function to dump all objects allocated since the previous call to `Checkpoint`. This dump shows the order of allocation, the source file and line where the object was allocated (if you are using DEBUG_NEW for allocation), and the derivation of the object, its address, and its size. `DumpAllObjectsSince` also calls each object's `Dump` function to provide information about its current state.

For more information about how to use `CMemoryState` and other diagnostics, see [Debugging MFC Applications](/visualstudio/debugger/mfc-debugging-techniques).

> [!NOTE]
> Declarations of objects of type `CMemoryState` and calls to member functions should be bracketed by `#if defined(_DEBUG)/#endif` directives. This causes memory diagnostics to be included only in debugging builds of your program.

## Inheritance Hierarchy

`CMemoryState`

## Requirements

**Header:** afx.h

## <a name="checkpoint"></a> CMemoryState::Checkpoint

Takes a snapshot summary of memory and stores it in this `CMemoryState` object.

```cpp
void Checkpoint();
```

### Remarks

The `CMemoryState` member functions [Difference](#difference) and [DumpAllObjectsSince](#dumpallobjectssince) use this snapshot data.

### Example

  See the example for the [CMemoryState](#cmemorystate) constructor.

## <a name="cmemorystate"></a> CMemoryState::CMemoryState

Constructs an empty `CMemoryState` object that must be filled in by the [Checkpoint](#checkpoint) or [Difference](#difference) member function.

```
CMemoryState();
```

### Example

[!code-cpp[NVC_MFC_Utilities#18](../../mfc/codesnippet/cpp/cmemorystate-structure_1.cpp)]

## <a name="difference"></a> CMemoryState::Difference

Compares two `CMemoryState` objects, then stores the difference into this `CMemoryState` object.

```
BOOL Difference(
    const CMemoryState& oldState,
    const CMemoryState& newState);
```

### Parameters

*oldState*<br/>
The initial memory state as defined by a `CMemoryState` checkpoint.

*newState*<br/>
The new memory state as defined by a `CMemoryState` checkpoint.

### Return Value

Nonzero if the two memory states are different; otherwise 0.

### Remarks

[Checkpoint](#checkpoint) must have been called for each of the two memory-state parameters.

### Example

  See the example for the [CMemoryState](#cmemorystate) constructor.

## <a name="dumpallobjectssince"></a> CMemoryState::DumpAllObjectsSince

Calls the `Dump` function for all objects of a type derived from class `CObject` that were allocated (and are still allocated) since the last [Checkpoint](#checkpoint) call for this `CMemoryState` object.

```cpp
void DumpAllObjectsSince() const;
```

### Remarks

Calling `DumpAllObjectsSince` with an uninitialized `CMemoryState` object will dump out all objects currently in memory.

### Example

  See the example for the [CMemoryState](#cmemorystate) constructor.

## <a name="dumpstatistics"></a> CMemoryState::DumpStatistics

Prints a concise memory statistics report from a `CMemoryState` object that is filled by the [Difference](#difference) member function.

```cpp
void DumpStatistics() const;
```

### Remarks

The report, which is printed on the [afxDump](diagnostic-services.md#afxdump) device, shows the following:

A sample report gives information on the number (or amount) of:

- free blocks

- normal blocks

- CRT blocks

- ignore blocks

- client blocks

- maximum memory used by the program at any one time (in bytes)

- total memory currently used by the program (in bytes)

Free blocks are the number of blocks whose deallocation was delayed if `afxMemDF` was set to `delayFreeMemDF`. For more information, see [afxMemDF](diagnostic-services.md#afxmemdf), in the "MFC Macros and Globals" section.

### Example

  The following code should be placed in *projname*App.cpp. Define the following global variables:

[!code-cpp[NVC_MFC_Utilities#40](../../mfc/codesnippet/cpp/cmemorystate-structure_2.cpp)]

In the `InitInstance` function, add the line:

[!code-cpp[NVC_MFC_Utilities#41](../../mfc/codesnippet/cpp/cmemorystate-structure_3.cpp)]

Add a handler for the `ExitInstance` function and use the following code:

[!code-cpp[NVC_MFC_Utilities#42](../../mfc/codesnippet/cpp/cmemorystate-structure_4.cpp)]

You can now run the program in Debug mode to see the output of the `DumpStatistics` function.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)
