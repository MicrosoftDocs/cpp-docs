---
title: "EventGroup class"
description: "The C++ Build Insights SDK EventGroup class reference."
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "EventGroup", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# EventGroup class

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

The `EventGroup` class template is the base class for all group capture classes.

## Syntax

```cpp
template <typename TActivity>
class EventGroup;
{
public:
    size_t Size() const;

    const TActivity& operator[](size_t index) const;
    const TActivity& Front() const;
    const TActivity& Back() const;

    std::deque<TActivity>::const_iterator begin() const;
    std::deque<TActivity>::const_iterator end() const;
};
```

### Parameters

*TActivity*
The activity type contained in the group.

## Members

### Functions

[Back](#back)
[begin](#begin)
[end](#end)
[Front](#front)
[operator[]](#subscript-operator)
[Size](#size)

## <a name="back"></a> Back

```cpp
const TActivity& Back() const;
```

### Return Value

A reference to the last activity event in the group.

## <a name="begin"></a> begin

```cpp
std::deque<TActivity>::const_iterator begin() const;
```

### Return Value

An iterator pointing at the beginning of the activity event group.

## <a name="end"></a> end

```cpp
std::deque<TActivity>::const_iterator end() const;
```

### Return Value

An iterator pointing one position past the end of the activity event group.

## <a name="front"></a> Front

```cpp
const TActivity& Front() const;
```

### Return Value

A reference to the first activity event in the group.

## <a name="subscript-operator"></a> operator[]

```cpp
const TActivity& operator[](size_t index) const;
```

### Parameters

*index*\
The index of the element to access in the activity event group.

### Return Value

The event from the event stack stored at the position indicated by *index*.

## <a name="size"></a> Size

```cpp
size_t Size() const;
```

### Return Value

The size of the event group.

::: moniker-end
