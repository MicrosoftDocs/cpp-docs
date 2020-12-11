---
description: "Learn more about: source_link_manager Class"
title: "source_link_manager Class"
ms.date: "11/04/2016"
f1_keywords: ["source_link_manager", "AGENTS/concurrency::source_link_manager", "AGENTS/concurrency::source_link_manager::source_link_manager", "AGENTS/concurrency::source_link_manager::add", "AGENTS/concurrency::source_link_manager::begin", "AGENTS/concurrency::source_link_manager::contains", "AGENTS/concurrency::source_link_manager::count", "AGENTS/concurrency::source_link_manager::reference", "AGENTS/concurrency::source_link_manager::register_target_block", "AGENTS/concurrency::source_link_manager::release", "AGENTS/concurrency::source_link_manager::remove", "AGENTS/concurrency::source_link_manager::set_bound"]
helpviewer_keywords: ["source_link_manager class"]
ms.assetid: 287487cf-e0fe-4c35-aa3c-24f081d1ddae
---
# source_link_manager Class

The `source_link_manager` object manages messaging block network links to `ISource` blocks.

## Syntax

```cpp
template<class _LinkRegistry>
class source_link_manager;
```

### Parameters

*_LinkRegistry*<br/>
The network link registry.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`const_pointer`|A type that provides a pointer to a **`const`** element in a `source_link_manager` object.|
|`const_reference`|A type that provides a reference to a **`const`** element stored in a `source_link_manager` object for reading and performing const operations.|
|`iterator`|A type that provides an iterator that can read or modify any element in the `source_link_manager` object.|
|`type`|The type of link registry being managed by the `source_link_manager` object.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[source_link_manager](#ctor)|Constructs a `source_link_manager` object.|
|[~source_link_manager Destructor](#dtor)|Destroys the `source_link_manager` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[add](#add)|Adds a source link to the `source_link_manager` object.|
|[begin](#begin)|Returns an iterator to the first element in the `source_link_manager` object.|
|[contains](#contains)|Searches the `network_link_registry` within this `source_link_manager` object for a specified block.|
|[count](#count)|Counts the number of linked blocks in the `source_link_manager` object.|
|[reference](#reference)|Acquires a reference on the `source_link_manager` object.|
|[register_target_block](#register_target_block)|Registers the target block that holds this `source_link_manager` object.|
|[release](#release)|Releases the reference on the `source_link_manager` object.|
|[remove](#remove)|Removes a link from the `source_link_manager` object.|
|[set_bound](#set_bound)|Sets the maximum number of source links that can be added to this `source_link_manager` object.|

## Remarks

Currently, the source blocks are reference counted. This is a wrapper on a `network_link_registry` object that allows concurrent access to the links and provides the ability to reference the links through callbacks. Message blocks ( `target_block`s or `propagator_block`s) should use this class for their source links.

## Inheritance Hierarchy

`source_link_manager`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="add"></a> add

Adds a source link to the `source_link_manager` object.

```cpp
void add(_EType _Link);
```

### Parameters

*_Link*<br/>
A pointer to a block to be added.

## <a name="begin"></a> begin

Returns an iterator to the first element in the `source_link_manager` object.

```cpp
iterator begin();
```

### Return Value

An iterator addressing the first element in the `source_link_manager` object.

### Remarks

The end state of the iterator is indicated by a `NULL` link.

## <a name="contains"></a> contains

Searches the `network_link_registry` within this `source_link_manager` object for a specified block.

```cpp
bool contains(_EType _Link);
```

### Parameters

*_Link*<br/>
A pointer to a block that is to be searched for in the `source_link_manager` object.

### Return Value

**`true`** if the specified block was found, **`false`** otherwise.

## <a name="count"></a> count

Counts the number of linked blocks in the `source_link_manager` object.

```cpp
size_t count();
```

### Return Value

The number of linked blocks in the `source_link_manager` object.

## <a name="reference"></a> reference

Acquires a reference on the `source_link_manager` object.

```cpp
void reference();
```

## <a name="register_target_block"></a> register_target_block

Registers the target block that holds this `source_link_manager` object.

```cpp
void register_target_block(_Inout_ ITarget<typename _Block::source_type>* _PTarget);
```

### Parameters

*_PTarget*<br/>
The target block holding this `source_link_manager` object.

## <a name="release"></a> release

Releases the reference on the `source_link_manager` object.

```cpp
void release();
```

## <a name="remove"></a> remove

Removes a link from the `source_link_manager` object.

```cpp
bool remove(_EType _Link);
```

### Parameters

*_Link*<br/>
A pointer to a block to be removed, if found.

### Return Value

**`true`** if the link was found and removed, **`false`** otherwise.

## <a name="set_bound"></a> set_bound

Sets the maximum number of source links that can be added to this `source_link_manager` object.

```cpp
void set_bound(size_t _MaxLinks);
```

### Parameters

*_MaxLinks*<br/>
The maximum number of links.

## <a name="ctor"></a> source_link_manager

Constructs a `source_link_manager` object.

```cpp
source_link_manager();
```

## <a name="dtor"></a> ~source_link_manager

Destroys the `source_link_manager` object.

```cpp
~source_link_manager();
```

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[single_link_registry Class](single-link-registry-class.md)<br/>
[multi_link_registry Class](multi-link-registry-class.md)
