---
description: "Learn more about: network_link_registry Class"
title: "network_link_registry Class"
ms.date: "11/04/2016"
f1_keywords: ["network_link_registry", "AGENTS/concurrency::network_link_registry", "AGENTS/concurrency::network_link_registry::add", "AGENTS/concurrency::network_link_registry::begin", "AGENTS/concurrency::network_link_registry::contains", "AGENTS/concurrency::network_link_registry::count", "AGENTS/concurrency::network_link_registry::remove"]
helpviewer_keywords: ["network_link_registry class"]
ms.assetid: 3e7b4097-09f1-4252-964e-b15b8f7f7fc6
---
# network_link_registry Class

The `network_link_registry` abstract base class manages the links between source and target blocks.

## Syntax

```cpp
template<class _Block>
class network_link_registry;
```

### Parameters

*_Block*<br/>
The block data type being stored in the `network_link_registry`.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`const_pointer`|A type that provides a pointer to a **`const`** element in a `network_link_registry` object.|
|`const_reference`|A type that provides a reference to a **`const`** element stored in a `network_link_registry` object for reading and performing const operations.|
|`iterator`|A type that provides an iterator that can read or modify any element in a `network_link_registry` object.|
|`type`|A type that represents the block type stored in the `network_link_registry` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[add](#add)|When overridden in a derived class, adds a link to the `network_link_registry` object.|
|[begin](#begin)|When overridden in a derived class, returns an iterator to the first element in the `network_link_registry` object.|
|[contains](#contains)|When overridden in a derived class, searches the `network_link_registry` object for a specified block.|
|[count](#count)|When overridden in a derived class, returns the number of items in the `network_link_registry` object.|
|[remove](#remove)|When overridden in a derived class, removes a specified block from the `network_link_registry` object.|

## Remarks

The `network link registry` is not safe for concurrent access.

## Inheritance Hierarchy

`network_link_registry`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="add"></a> add

When overridden in a derived class, adds a link to the `network_link_registry` object.

```cpp
virtual void add(_EType _Link) = 0;
```

### Parameters

*_Link*<br/>
A pointer to a block to be added.

## <a name="begin"></a> begin

When overridden in a derived class, returns an iterator to the first element in the `network_link_registry` object.

```cpp
virtual iterator begin() = 0;
```

### Return Value

An iterator addressing the first element in the `network_link_registry` object.

### Remarks

The end state of the iterator is indicated by a `NULL` link.

## <a name="contains"></a> contains

When overridden in a derived class, searches the `network_link_registry` object for a specified block.

```cpp
virtual bool contains(_EType _Link) = 0;
```

### Parameters

*_Link*<br/>
A pointer to a block that is being searched for in the `network_link_registry` object.

### Return Value

**`true`** if the block was found, **`false`** otherwise.

## <a name="count"></a> count

When overridden in a derived class, returns the number of items in the `network_link_registry` object.

```cpp
virtual size_t count() = 0;
```

### Return Value

The number of items in the `network_link_registry` object.

## <a name="remove"></a> remove

When overridden in a derived class, removes a specified block from the `network_link_registry` object.

```cpp
virtual bool remove(_EType _Link) = 0;
```

### Parameters

*_Link*<br/>
A pointer to a block to be removed, if found.

### Return Value

**`true`** if the link was found and removed, **`false`** otherwise.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[single_link_registry Class](single-link-registry-class.md)<br/>
[multi_link_registry Class](multi-link-registry-class.md)
