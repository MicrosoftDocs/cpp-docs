---
description: "Learn more about: single_link_registry Class"
title: "single_link_registry Class"
ms.date: "11/04/2016"
f1_keywords: ["single_link_registry", "AGENTS/concurrency::single_link_registry", "AGENTS/concurrency::single_link_registry::single_link_registry", "AGENTS/concurrency::single_link_registry::add", "AGENTS/concurrency::single_link_registry::begin", "AGENTS/concurrency::single_link_registry::contains", "AGENTS/concurrency::single_link_registry::count", "AGENTS/concurrency::single_link_registry::remove"]
helpviewer_keywords: ["single_link_registry class"]
ms.assetid: 09540a4e-c34e-4ff9-af49-21b8612b6ab3
---
# single_link_registry Class

The `single_link_registry` object is a `network_link_registry` that manages only a single source or target block.

## Syntax

```cpp
template<class _Block>
class single_link_registry : public network_link_registry<_Block>;
```

### Parameters

*_Block*<br/>
The block data type being stored in the `single_link_registry` object.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[single_link_registry](#ctor)|Constructs a `single_link_registry` object.|
|[~single_link_registry Destructor](#dtor)|Destroys the `single_link_registry` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[add](#add)|Adds a link to the `single_link_registry` object. (Overrides [network_link_registry::add](network-link-registry-class.md#add).)|
|[begin](#begin)|Returns an iterator to the first element in the `single_link_registry` object. (Overrides [network_link_registry::begin](network-link-registry-class.md#begin).)|
|[contains](#contains)|Searches the `single_link_registry` object for a specified block. (Overrides [network_link_registry::contains](network-link-registry-class.md#contains).)|
|[count](#count)|Counts the number of items in the `single_link_registry` object. (Overrides [network_link_registry::count](network-link-registry-class.md#count).)|
|[remove](#remove)|Removes a link from the `single_link_registry` object. (Overrides [network_link_registry::remove](network-link-registry-class.md#remove).)|

## Inheritance Hierarchy

[network_link_registry](network-link-registry-class.md)

`single_link_registry`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="add"></a> add

Adds a link to the `single_link_registry` object.

```cpp
virtual void add(_EType _Link);
```

### Parameters

*_Link*<br/>
A pointer to a block to be added.

### Remarks

The method throws an [invalid_link_target](invalid-link-target-class.md) exception if there is already a link in this registry.

## <a name="begin"></a> begin

Returns an iterator to the first element in the `single_link_registry` object.

```cpp
virtual iterator begin();
```

### Return Value

An iterator addressing the first element in the `single_link_registry` object.

### Remarks

The end state is indicated by a `NULL` link.

## <a name="contains"></a> contains

Searches the `single_link_registry` object for a specified block.

```cpp
virtual bool contains(_EType _Link);
```

### Parameters

*_Link*<br/>
A pointer to a block that is to be searched for in the `single_link_registry` object.

### Return Value

**`true`** if the link was found, **`false`** otherwise.

## <a name="count"></a> count

Counts the number of items in the `single_link_registry` object.

```cpp
virtual size_t count();
```

### Return Value

The number of items in the `single_link_registry` object.

## <a name="remove"></a> remove

Removes a link from the `single_link_registry` object.

```cpp
virtual bool remove(_EType _Link);
```

### Parameters

*_Link*<br/>
A pointer to a block to be removed, if found.

### Return Value

**`true`** if the link was found and removed, **`false`** otherwise.

## <a name="ctor"></a> single_link_registry

Constructs a `single_link_registry` object.

```cpp
single_link_registry();
```

## <a name="dtor"></a> ~single_link_registry

Destroys the `single_link_registry` object.

```cpp
virtual ~single_link_registry();
```

### Remarks

The method throws an [invalid_operation](invalid-operation-class.md) exception if it is called before the link is removed.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[multi_link_registry Class](multi-link-registry-class.md)
