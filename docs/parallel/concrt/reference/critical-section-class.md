---
description: "Learn more about: critical_section Class"
title: "critical_section Class"
ms.date: "11/04/2016"
f1_keywords: ["critical_section", "CONCRT/concurrency::critical_section", "CONCRT/concurrency::critical_section::critical_section::scoped_lock Class", "CONCRT/concurrency::critical_section::critical_section", "CONCRT/concurrency::critical_section::lock", "CONCRT/concurrency::critical_section::native_handle", "CONCRT/concurrency::critical_section::try_lock", "CONCRT/concurrency::critical_section::try_lock_for", "CONCRT/concurrency::critical_section::unlock"]
helpviewer_keywords: ["critical_section class"]
ms.assetid: fa3c89d6-be5d-4d1b-bddb-8232814e6cf6
---
# critical_section Class

A non-reentrant mutex which is explicitly aware of the Concurrency Runtime.

## Syntax

```cpp
class critical_section;
```

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`native_handle_type`|A reference to a `critical_section` object.|

### Public Classes

|Name|Description|
|----------|-----------------|
|[critical_section::scoped_lock Class](#critical_section__scoped_lock_class)|An exception safe RAII wrapper for a `critical_section` object.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[critical_section](#ctor)|Constructs a new critical section.|
|[~critical_section Destructor](#dtor)|Destroys a critical section.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[lock](#lock)|Acquires this critical section.|
|[native_handle](#native_handle)|Returns a platform specific native handle, if one exists.|
|[try_lock](#try_lock)|Tries to acquire the lock without blocking.|
|[try_lock_for](#try_lock_for)|Tries to acquire the lock without blocking for a specific number of milliseconds.|
|[unlock](#unlock)|Unlocks the critical section.|

## Remarks

For more information, see [Synchronization Data Structures](../../../parallel/concrt/synchronization-data-structures.md).

## Inheritance Hierarchy

`critical_section`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> critical_section

Constructs a new critical section.

```cpp
critical_section();
```

## <a name="dtor"></a> ~critical_section

Destroys a critical section.

```cpp
~critical_section();
```

### Remarks

It is expected that the lock is no longer held when the destructor runs. Allowing the critical section to destruct with the lock still held results in undefined behavior.

## <a name="lock"></a> lock

Acquires this critical section.

```cpp
void lock();
```

### Remarks

It is often safer to utilize the [scoped_lock](#critical_section__scoped_lock_class) construct to acquire and release a `critical_section` object in an exception safe way.

If the lock is already held by the calling context, an [improper_lock](improper-lock-class.md) exception will be thrown.

## <a name="native_handle"></a> native_handle

Returns a platform specific native handle, if one exists.

```cpp
native_handle_type native_handle();
```

### Return Value

A reference to the critical section.

### Remarks

A `critical_section` object is not associated with a platform specific native handle for the Windows operating system. The method simply returns a reference to the object itself.

## <a name="critical_section__scoped_lock_class"></a> critical_section::scoped_lock Class

An exception safe RAII wrapper for a `critical_section` object.

```cpp
class scoped_lock;
```

## <a name="critical_section__scoped_lock_ctor"></a> scoped_lock::scoped_lock

Constructs a `scoped_lock` object and acquires the `critical_section` object passed in the `_Critical_section` parameter. If the critical section is held by another thread, this call will block.

```cpp
explicit _CRTIMP scoped_lock(critical_section& _Critical_section);
```

### Parameters

*_Critical_section*<br/>
The critical section to lock.

## <a name="critical_section__scoped_lock_dtor"></a> scoped_lock::~scoped_lock

Destroys a `scoped_lock` object and releases the critical section supplied in its constructor.

```cpp
~scoped_lock();
```

## <a name="try_lock"></a> try_lock

Tries to acquire the lock without blocking.

```cpp
bool try_lock();
```

### Return Value

If the lock was acquired, the value **`true`**; otherwise, the value **`false`**.

## <a name="try_lock_for"></a> try_lock_for

Tries to acquire the lock without blocking for a specific number of milliseconds.

```cpp
bool try_lock_for(unsigned int _Timeout);
```

### Parameters

*_Timeout*<br/>
The number of milliseconds to wait before timing out.

### Return Value

If the lock was acquired, the value **`true`**; otherwise, the value **`false`**.

## <a name="unlock"></a> unlock

Unlocks the critical section.

```cpp
void unlock();
```

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[reader_writer_lock Class](reader-writer-lock-class.md)
