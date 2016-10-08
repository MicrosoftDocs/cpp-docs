---
title: "&lt;memory&gt;"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ef8e38da-7c9d-4037-9ad1-20c99febf5dc
caps.latest.revision: 20
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# &lt;memory&gt;
Defines a class, an operator, and several templates that help allocate and free objects.  
  
## Syntax  
  
```  
#include <memory>  
  
```  
  
## Members  
  
### Functions  
  
|||  
|-|-|  
|[addressof](../VS_visualcpp/-memory--functions.md#addressof)|Gets the true address of an object.|  
|[align](../VS_visualcpp/-memory--functions.md#align)|Returns a pointer to a range of a given size, based on the provided alignment and starting address.|  
|[allocate_shared](../VS_visualcpp/-memory--functions.md#allocate_shared)|Creates a `shared_ptr` to objects that are allocated and constructed for a given type with a specified allocator.|  
|[checked_uninitialized_copy](../Topic/checked_uninitialized_copy.md)|Same as `uninitialized_copy` but enforces the use of a checked iterator as output iterator.|  
|[checked_uninitialized_fill_n](../Topic/checked_uninitialized_fill_n.md)|Same as `uninitialized_fill_n` but enforces the use of a checked iterator as output iterator.|  
|[const_pointer_cast](../VS_visualcpp/-memory--functions.md#const_pointer_cast)|Const cast to `shared_ptr`.|  
|[declare_no_pointers](../VS_visualcpp/-memory--functions.md#declare_no_pointers)|Informs a garbage collector that the characters starting at a specified address and falling within the indicated block size contain no traceable pointers.|  
|[declare_reachable](../VS_visualcpp/-memory--functions.md#declare_reachable)|Informs garbage collection that the indicated address is to allocated storage and is reachable.|  
|[default_delete](../VS_visualcpp/-memory--functions.md#default_delete)|Deletes objects allocated with `operator new`. Suitable for use with `unique_ptr`.|  
|[dynamic_pointer_cast](../VS_visualcpp/-memory--functions.md#dynamic_pointer_cast)|Dynamic cast to `shared_ptr`.|  
|[get_deleter](../VS_visualcpp/-memory--functions.md#get_deleter_function)|Get deleter from `shared_ptr`.|  
|[get_pointer_safety](../VS_visualcpp/-memory--functions.md#get_pointer_safety)|Returns the type of pointer safety assumed by any garbage collector.|  
|[get_temporary_buffer](../VS_visualcpp/-memory--functions.md#get_temporary_buffer)|Allocates temporary storage for a sequence of elements that does not exceed a specified number of elements.|  
|[make_shared](../VS_visualcpp/-memory--functions.md#make_shared)|Creates and returns a `shared_ptr` that points to the allocated object constructed from zero or more arguments using the default allocator.|  
|[make_unique](../VS_visualcpp/-memory--functions.md#make_unique)|Creates and returns a [unique_ptr](../VS_visualcpp/unique_ptr-Class.md) that points to the allocated object constructed from zero or more arguments.|  
|[owner_less](../VS_visualcpp/-memory--functions.md#owner_less)|Allows ownership-based mixed comparisons of shared and weak pointers.|  
|[pointer_safety](../VS_visualcpp/-memory--enums.md#pointer_safety_enumeration)|An enumeration of all the possible return values for `get_pointer_safety`.|  
|[return_temporary_buffer](../VS_visualcpp/-memory--functions.md#return_temporary_buffer)|Deallocates the temporary memory that was allocated using the `get_temporary_buffer` template function.|  
|[static_pointer_cast](../VS_visualcpp/-memory--functions.md#static_pointer_cast)|Static cast to `shared_ptr`.|  
|[swap](../VS_visualcpp/-memory--functions.md#swap__c_add_add_standard_library_)|Swap two `shared_ptr` or `weak_ptr` objects.|  
|[unchecked_uninitialized_copy](../Topic/unchecked_uninitialized_copy.md)|Same as `uninitialized_copy` but allows the use of an unchecked iterator as output iterator when _SECURE_SCL=1 is defined.|  
|[unchecked_uninitialized_fill_n](../Topic/unchecked_uninitialized_fill_n.md)|Same as `uninitialized_fill_n` but allows the use of an unchecked iterator as output iterator when _SECURE_SCL=1 is defined.|  
|[undeclare_no_pointers](../VS_visualcpp/-memory--functions.md#undeclare_no_pointers)|Informs a garbage collector that the characters in the memory block defined by a base address pointer and block size may now contain traceable pointers.|  
|[undeclare_reachable](../VS_visualcpp/-memory--functions.md#undeclare_reachable)|Informs a `garbage_collector` that a specified memory location is not reachable.|  
|[uninitialized_copy](../VS_visualcpp/-memory--functions.md#uninitialized_copy)|Copies objects from a specified input range into an uninitialized destination range.|  
|[uninitialized_copy_n](../VS_visualcpp/-memory--functions.md#uninitialized_copy_n)|Creates a copy of a specified number of elements from an input iterator. The copies are put in a forward iterator.|  
|[uninitialized_fill](../VS_visualcpp/-memory--functions.md#uninitialized_fill)|Copies objects of a specified value into an uninitialized destination range.|  
|[uninitialized_fill_n](../VS_visualcpp/-memory--functions.md#uninitialized_fill_n)|Copies objects of a specified value into specified number of elements an uninitialized destination range.|  
  
### Operators  
  
|||  
|-|-|  
|[operator!=](../VS_visualcpp/-memory--operators.md#operator_neq)|Tests for inequality between allocator objects of a specified class.|  
|[operator==](../VS_visualcpp/-memory--operators.md#operator_eq_eq)|Tests for equality between allocator objects of a specified class.|  
|[operator>=](../VS_visualcpp/-memory--operators.md#operator_gt__eq)|Tests for one allocator object being greater than or equal to a second allocator object, of a specified class.|  
|[operator<](../VS_visualcpp/-memory--operators.md#operator_lt_)|Tests for one object being less than a second object of a specified class.|  
|[operator<=](../VS_visualcpp/-memory--operators.md#operator_lt__eq)|Tests for one object being less than or equal to a second object of a specified class.|  
|[operator>](../VS_visualcpp/-memory--operators.md#operator_gt_)|Tests for one object being greater than a second object of a specified class.|  
|[operator<<](../VS_visualcpp/-memory--operators.md#operator_lt__lt_)|`shared_ptr` inserter.|  
  
### Classes  
  
|||  
|-|-|  
|[allocator](../VS_visualcpp/allocator-Class.md)|The template class describes an object that manages storage allocation and freeing for arrays of objects of type **Type**.|  
|[allocator_traits](../VS_visualcpp/allocator_traits-Class.md)|Describes an object that determines all the information that is needed by an allocator-enabled container.|  
|[auto_ptr](../VS_visualcpp/auto_ptr-Class.md)|The template class describes an object that stores a pointer to an allocated object of type **Type \*** that ensures the object to which it points gets deleted when its enclosing auto_ptr gets destroyed.|  
|[bad_weak_ptr](../VS_visualcpp/bad_weak_ptr-Class.md)|Reports bad weak_ptr exception.|  
|[enabled_shared_from_this](../VS_visualcpp/enable_shared_from_this-Class.md)|Helps generate a `shared_ptr`.|  
|[pointer_traits](../VS_visualcpp/pointer_traits-Struct.md)|Supplies information that is needed by an object of template class `allocator_traits` to describe an allocator with pointer type `Ptr`.|  
|[raw_storage_iterator](../VS_visualcpp/raw_storage_iterator-Class.md)|An adaptor class that is provided to enable algorithms to store their results into uninitialized memory.|  
|[shared_ptr](../VS_visualcpp/shared_ptr-Class.md)|Wraps a reference-counted smart pointer around a dynamically allocated object.|  
|[unique_ptr](../VS_visualcpp/unique_ptr-Class.md)|Stores a pointer to an owned object. The pointer is owned by no other `unique_ptr`. The `unique_ptr` is destroyed when the owner is destroyed.|  
|[weak_ptr](../VS_visualcpp/weak_ptr-Class.md)|Wraps a weakly linked pointer.|  
  
### Specializations  
  
|||  
|-|-|  
|[allocator<void\>](../VS_visualcpp/allocator-void--Class.md)|A specialization of the template class allocator to type void, defining the only the member types that make sense in this specialized context.|  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)