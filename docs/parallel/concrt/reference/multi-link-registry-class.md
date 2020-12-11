---
description: "Learn more about: multi_link_registry Class"
title: "multi_link_registry Class"
ms.date: "11/04/2016"
f1_keywords: ["multi_link_registry", "AGENTS/concurrency::multi_link_registry", "AGENTS/concurrency::multi_link_registry::multi_link_registry", "AGENTS/concurrency::multi_link_registry::add", "AGENTS/concurrency::multi_link_registry::begin", "AGENTS/concurrency::multi_link_registry::contains", "AGENTS/concurrency::multi_link_registry::count", "AGENTS/concurrency::multi_link_registry::remove", "AGENTS/concurrency::multi_link_registry::set_bound"]
helpviewer_keywords: ["multi_link_registry class"]
ms.assetid: b2aa73a8-e8a6-4255-b117-d07530c328b2
---
# multi_link_registry Class

The `multi_link_registry` object is a `network_link_registry` that manages multiple source blocks or multiple target blocks.

## Syntax

```cpp
template<class _Block>
class multi_link_registry : public network_link_registry<_Block>;
```

### Parameters

*_Block*<br/>
The block data type being stored in the `multi_link_registry` object.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[multi_link_registry](#ctor)|Constructs a `multi_link_registry` object.|
|[~multi_link_registry Destructor](#dtor)|Destroys the `multi_link_registry` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[add](#add)|Adds a link to the `multi_link_registry` object. (Overrides [network_link_registry::add](network-link-registry-class.md#add).)|
|[begin](#begin)|Returns an iterator to the first element in the `multi_link_registry` object. (Overrides [network_link_registry::begin](network-link-registry-class.md#begin).)|
|[contains](#contains)|Searches the `multi_link_registry` object for a specified block. (Overrides [network_link_registry::contains](network-link-registry-class.md#contains).)|
|[count](#count)|Counts the number of items in the `multi_link_registry` object. (Overrides [network_link_registry::count](network-link-registry-class.md#count).)|
|[remove](#remove)|Removes a link from the `multi_link_registry` object. (Overrides [network_link_registry::remove](network-link-registry-class.md#remove).)|
|[set_bound](#set_bound)|Sets an upper bound on the number of links that the `multi_link_registry` object can hold.|

## Inheritance Hierarchy

[network_link_registry](network-link-registry-class.md)

`multi_link_registry`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="add"></a> add

Adds a link to the `multi_link_registry` object.

```cpp
virtual void add(_EType _Link);
```

### Parameters

*_Link*<br/>
A pointer to a block to be added.

### Remarks

The method throws an [invalid_link_target](invalid-link-target-class.md) exception if the link is already present in the registry, or if a bound has already been set with the `set_bound` function and a link has since been removed.

## <a name="begin"></a> begin

Returns an iterator to the first element in the `multi_link_registry` object.

```cpp
virtual iterator begin();
```

### Return Value

An iterator addressing the first element in the `multi_link_registry` object.

### Remarks

The end state is indicated by a `NULL` link.

## <a name="contains"></a> contains

Searches the `multi_link_registry` object for a specified block.

```cpp
virtual bool contains(_EType _Link);
```

### Parameters

*_Link*<br/>
A pointer to a block that is to be searched for in the `multi_link_registry` object.

### Return Value

**`true`** if the specified block was found, **`false`** otherwise.

## <a name="count"></a> count

Counts the number of items in the `multi_link_registry` object.

```cpp
virtual size_t count();
```

### Return Value

The number of items in the `multi_link_registry` object.

## <a name="ctor"></a> multi_link_registry

Constructs a `multi_link_registry` object.

```cpp
multi_link_registry();
```

## <a name="dtor"></a> ~multi_link_registry

Destroys the `multi_link_registry` object.

```cpp
virtual ~multi_link_registry();
```

### Remarks

The method throws an [invalid_operation](invalid-operation-class.md) exception if called before all links are removed.

## <a name="remove"></a> remove

Removes a link from the `multi_link_registry` object.

```cpp
virtual bool remove(_EType _Link);
```

### Parameters

*_Link*<br/>
A pointer to a block to be removed, if found.

### Return Value

**`true`** if the link was found and removed, **`false`** otherwise.

## <a name="set_bound"></a> set_bound

Sets an upper bound on the number of links that the `multi_link_registry` object can hold.

```cpp
void set_bound(size_t _MaxLinks);
```

### Parameters

*_MaxLinks*<br/>
The maximum number of links that the `multi_link_registry` object can hold.

### Remarks

After a bound is set, unlinking an entry will cause the `multi_link_registry` object to enter an immutable state where further calls to `add` will throw an `invalid_link_target` exception.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[single_link_registry Class](single-link-registry-class.md)
