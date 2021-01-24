---
description: "Learn more about: &lt;memory&gt;"
title: "&lt;memory&gt;"
ms.date: "08/04/2019"
f1_keywords: ["memory/std::<memory>", "<memory>", "std::<memory>"]
helpviewer_keywords: ["memory header"]
---
# &lt;memory&gt;

Defines a class, an operator, and several templates that help allocate and free objects.

## Requirements

**Header:** \<memory>

**Namespace:** std

## Members

### Functions

|Name|Description|
|-|-|
|[addressof](../standard-library/memory-functions.md#addressof)|Gets the true address of an object.|
|[align](../standard-library/memory-functions.md#align)|Returns a pointer to a range of a given size, based on the provided alignment and starting address.|
|[allocate_shared](../standard-library/memory-functions.md#allocate_shared)|Creates a `shared_ptr` to objects that are allocated and constructed for a given type with a specified allocator.|
|[atomic_compare_exchange_strong](../standard-library/memory-functions.md#atomic_compare_exchange_strong)||
|[atomic_compare_exchange_weak](../standard-library/memory-functions.md#atomic_compare_exchange_weak)||
|[atomic_compare_exchange_strong_explicit](../standard-library/memory-functions.md#atomic_compare_exchange_strong_explicit)||
|[atomic_compare_exchange_weak_explicit](../standard-library/memory-functions.md#atomic_compare_exchange_weak_explicit)||
|[atomic_exchange](../standard-library/memory-functions.md#atomic_exchange)||
|[atomic_exchange_explicit](../standard-library/memory-functions.md#atomic_exchange_explicit)||
|[atomic_is_lock_free](../standard-library/memory-functions.md#atomic_is_lock_free)||
|[atomic_load](../standard-library/memory-functions.md#atomic_load)||
|[atomic_load_explicit](../standard-library/memory-functions.md#atomic_load_explicit)||
|[atomic_store](../standard-library/memory-functions.md#atomic_store)||
|[atomic_store_explicit](../standard-library/memory-functions.md#atomic_store_explicit)||
|[const_pointer_cast](../standard-library/memory-functions.md#const_pointer_cast)|Const cast to `shared_ptr`.|
|[declare_no_pointers](../standard-library/memory-functions.md#declare_no_pointers)|Informs a garbage collector that the characters starting at a specified address and falling within the indicated block size contain no traceable pointers.|
|[declare_reachable](../standard-library/memory-functions.md#declare_reachable)|Informs garbage collection that the indicated address is to allocated storage and is reachable.|
|[default_delete](../standard-library/memory-functions.md#default_delete)|Deletes objects allocated with `operator new`. Suitable for use with `unique_ptr`.|
|[destroy_at](../standard-library/memory-functions.md#destroy_at)|Shorthand `destroy` method.|
|[destroy](../standard-library/memory-functions.md#destroy)|Shorthand `destroy` method.|
|[destroy_n](../standard-library/memory-functions.md#destroy_n)|Shorthand `destroy` method.|
|[dynamic_pointer_cast](../standard-library/memory-functions.md#dynamic_pointer_cast)|Dynamic cast to `shared_ptr`.|
|[get_deleter](../standard-library/memory-functions.md#get_deleter)|Get deleter from `shared_ptr`.|
|[get_pointer_safety](../standard-library/memory-functions.md#get_pointer_safety)|Returns the type of pointer safety assumed by any garbage collector.|
|[get_temporary_buffer](../standard-library/memory-functions.md#get_temporary_buffer)|Allocates temporary storage for a sequence of elements that does not exceed a specified number of elements.|
|[make_shared](../standard-library/memory-functions.md#make_shared)|Creates and returns a `shared_ptr` that points to the allocated object constructed from zero or more arguments using the default allocator.|
|[make_unique](../standard-library/memory-functions.md#make_unique)|Creates and returns a [unique_ptr](../standard-library/unique-ptr-class.md) that points to the allocated object constructed from zero or more arguments.|
|[pointer_safety](../standard-library/memory-enums.md#pointer_safety)|An enumeration of all the possible return values for `get_pointer_safety`.|
|[return_temporary_buffer](../standard-library/memory-functions.md#return_temporary_buffer)|Deallocates the temporary memory that was allocated using the `get_temporary_buffer` template function.|
|[static_pointer_cast](../standard-library/memory-functions.md#static_pointer_cast)|Static cast to `shared_ptr`.|
|[swap](../standard-library/memory-functions.md#swap)|Swap two `shared_ptr` or `weak_ptr` objects.|
|[undeclare_no_pointers](../standard-library/memory-functions.md#undeclare_no_pointers)|Informs a garbage collector that the characters in the memory block defined by a base address pointer and block size may now contain traceable pointers.|
|[undeclare_reachable](../standard-library/memory-functions.md#undeclare_reachable)|Informs a `garbage_collector` that a specified memory location is not reachable.|
|[uninitialized_copy](../standard-library/memory-functions.md#uninitialized_copy)|Copies objects from a specified input range into an uninitialized destination range.|
|[uninitialized_copy_n](../standard-library/memory-functions.md#uninitialized_copy_n)|Creates a copy of a specified number of elements from an input iterator. The copies are put in a forward iterator.|
|[uninitialized_default_construct](../standard-library/memory-functions.md#uninitialized_default_construct)|Shorthand `uninitialized_default_construct` method.|
|[uninitialized_default_construct_n](../standard-library/memory-functions.md#uninitialized_default_construct_n)|Shorthand `uninitialized_construct` method.|
|[uninitialized_fill](../standard-library/memory-functions.md#uninitialized_fill)|Copies objects of a specified value into an uninitialized destination range.|
|[uninitialized_fill_n](../standard-library/memory-functions.md#uninitialized_fill_n)|Copies objects of a specified value into specified number of elements an uninitialized destination range.|
|[uninitialized_move](../standard-library/memory-functions.md#uninitialized_move)|Shorthand `uninitialized_move` method.|
|[uninitialized_move_n](../standard-library/memory-functions.md#uninitialized_move_n)|Shorthand `uninitialized_move` method.|
|[uninitialized_value_construct](../standard-library/memory-functions.md#uninitialized_value_construct)|Shorthand `uninitialized_value_construct` method.|
|[uninitialized_value_construct_n](../standard-library/memory-functions.md#uninitialized_value_construct_n)|Shorthand `uninitialized_value_construct` method.|
|[uses_allocator_v](../standard-library/memory-functions.md#uses_allocator_v)||

### Operators

|Name|Description|
|-|-|
|[operator!=](../standard-library/memory-operators.md#op_neq)|Tests for inequality between allocator objects of a specified class.|
|[operator==](../standard-library/memory-operators.md#op_eq_eq)|Tests for equality between allocator objects of a specified class.|
|[operator>=](../standard-library/memory-operators.md#op_gt_eq)|Tests for one allocator object being greater than or equal to a second allocator object, of a specified class.|
|[operator<](../standard-library/memory-operators.md#op_lt)|Tests for one object being less than a second object of a specified class.|
|[operator\<=](../standard-library/memory-operators.md#op_gt_eq)|Tests for one object being less than or equal to a second object of a specified class.|
|[operator>](../standard-library/memory-operators.md#op_gt)|Tests for one object being greater than a second object of a specified class.|
|[operator<<](../standard-library/memory-operators.md#op_lt_lt)|`shared_ptr` inserter.|

### Classes

|Name|Description|
|-|-|
|[allocator](../standard-library/allocator-class.md)|The class template describes an object that manages storage allocation and freeing for arrays of objects of type **Type**.|
|[allocator_traits](../standard-library/allocator-traits-class.md)|Describes an object that determines all the information that is needed by an allocator-enabled container.|
|[auto_ptr](../standard-library/auto-ptr-class.md)|The class template describes an object that stores a pointer to an allocated object of type **Type** <strong>\*</strong> that ensures the object to which it points gets deleted when its enclosing auto_ptr gets destroyed.|
|[bad_weak_ptr](../standard-library/bad-weak-ptr-class.md)|Reports bad weak_ptr exception.|
|[enabled_shared_from_this](../standard-library/enable-shared-from-this-class.md)|Helps generate a `shared_ptr`.|
|[pointer_traits](../standard-library/pointer-traits-struct.md)|Supplies information that is needed by an object of type `allocator_traits` to describe an allocator with pointer type `Ptr`.|
|[raw_storage_iterator](../standard-library/raw-storage-iterator-class.md)|An adaptor class that is provided to enable algorithms to store their results into uninitialized memory.|
|[shared_ptr](../standard-library/shared-ptr-class.md)|Wraps a reference-counted smart pointer around a dynamically allocated object.|
|[unique_ptr](../standard-library/unique-ptr-class.md)|Stores a pointer to an owned object. The pointer is owned by no other `unique_ptr`. The `unique_ptr` is destroyed when the owner is destroyed.|
|[weak_ptr](../standard-library/weak-ptr-class.md)|Wraps a weakly linked pointer.|

### Structures

|Name|Description|
|-|-|
|[allocator_arg_t](../standard-library/allocator-class.md#allocator_arg_t)||
|[default_delete](../standard-library/default-delete-struct.md)||
|hash|Provides overloads specialized for `unique_ptr` and `shared_ptr`.|
|[owner_less](../standard-library/memory-functions.md#owner_less)|Allows ownership-based mixed comparisons of shared and weak pointers.|
|[uses_allocator](../standard-library/allocator-class.md#uses_allocator)||

### Specializations

|Name|Description|
|-|-|
|[allocator\<void>](../standard-library/allocator-void-class.md)|A specialization of the class template allocator to type **`void`**, defining only the member types that make sense in this specialized context.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
