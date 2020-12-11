---
description: "Learn more about: EventTargetArray Class"
title: "EventTargetArray Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::EventTargetArray", "event/Microsoft::WRL::Details::EventTargetArray::AddTail", "event/Microsoft::WRL::Details::EventTargetArray::Begin", "event/Microsoft::WRL::Details::EventTargetArray::End", "event/Microsoft::WRL::Details::EventTargetArray::EventTargetArray", "event/Microsoft::WRL::Details::EventTargetArray::Length", "event/Microsoft::WRL::Details::EventTargetArray::~EventTargetArray"]
helpviewer_keywords: ["Microsoft::WRL::Details::EventTargetArray class", "Microsoft::WRL::Details::EventTargetArray::AddTail method", "Microsoft::WRL::Details::EventTargetArray::Begin method", "Microsoft::WRL::Details::EventTargetArray::End method", "Microsoft::WRL::Details::EventTargetArray::EventTargetArray, constructor", "Microsoft::WRL::Details::EventTargetArray::Length method", "Microsoft::WRL::Details::EventTargetArray::~EventTargetArray, destructor"]
ms.assetid: e3cadb7c-2160-4cbb-a2f8-c28733d1e96d
---
# EventTargetArray Class

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
class EventTargetArray :
    public Microsoft::WRL::RuntimeClass<
        Microsoft::WRL::RuntimeClassFlags<ClassicCom>,
        IUnknown
    >;
```

## Remarks

Represents an array of event handlers.

The event handlers that are associated with an [EventSource](eventsource-class.md) object are stored in a protected `EventTargetArray` data member.

## Members

### Public Constructors

Name                                                           | Description
-------------------------------------------------------------- | -----------------------------------------------------------
[EventTargetArray::EventTargetArray](#eventtargetarray)        | Initializes a new instance of the `EventTargetArray` class.
[EventTargetArray::~EventTargetArray](#tilde-eventtargetarray) | Deinitializes the current `EventTargetArray` class.

### Public Methods

Name                                  | Description
------------------------------------- | ---------------------------------------------------------------------------------------
[EventTargetArray::AddTail](#addtail) | Appends the specified event handler to the end of the internal array of event handlers.
[EventTargetArray::Begin](#begin)     | Gets the address of the first element in the internal array of event handlers.
[EventTargetArray::End](#end)         | Gets the address of the last element in the internal array of event handlers.
[EventTargetArray::Length](#length)   | Gets the current number of elements in the internal array of event handlers.

## Inheritance Hierarchy

`EventTargetArray`

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL::Details

## <a name="tilde-eventtargetarray"></a> EventTargetArray::~EventTargetArray

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
~EventTargetArray();
```

### Remarks

Deinitializes the current `EventTargetArray` class.

## <a name="addtail"></a> EventTargetArray::AddTail

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
void AddTail(
   _In_ IUnknown* element
);
```

### Parameters

*element*<br/>
Pointer to the event handler to append.

### Remarks

Appends the specified event handler to the end of the internal array of event handlers.

`AddTail()` is intended to be used internally by only the `EventSource` class.

## <a name="begin"></a> EventTargetArray::Begin

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
ComPtr<IUnknown>* Begin();
```

### Return Value

The address of the first element in the internal array of event handlers.

### Remarks

Gets the address of the first element in the internal array of event handlers.

## <a name="end"></a> EventTargetArray::End

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
ComPtr<IUnknown>* End();
```

### Return Value

The address of the last element in the internal array of event handlers.

### Remarks

Gets the address of the last element in the internal array of event handlers.

## <a name="eventtargetarray"></a> EventTargetArray::EventTargetArray

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
EventTargetArray(
   _Out_ HRESULT* hr,
   size_t items
);
```

### Parameters

*hr*<br/>
After this constructor operations, parameter *hr* indicates whether allocation of the array succeeded or failed. The following list shows the possible values for *hr*.

- S_OK<br/>
  The operation succeeded.

- E_OUTOFMEMORY<br/>
  Memory couldn't be allocated for the array.

- S_FALSE<br/>
  Parameter *items* is less than or equal to zero.

*items*<br/>
The number of array elements to allocate.

### Remarks

Initializes a new instance of the `EventTargetArray` class.

`EventTargetArray` is used to keep an array of event handlers in an `EventSource` object.

## <a name="length"></a> EventTargetArray::Length

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
size_t Length();
```

### Return Value

The current number of elements in the internal array of event handlers.

### Remarks

Gets the current number of elements in the internal array of event handlers.
