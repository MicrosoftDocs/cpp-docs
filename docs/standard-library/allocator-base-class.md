---
title: "allocator_base Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "allocators.allocator_base"
  - "stdext.allocators.allocator_base"
  - "allocator_base"
  - "allocators/stdext::allocator_base"
  - "stdext::allocator_base"
  - "stdext::allocators::allocator_base"
  - "allocators/stdext::allocators::allocator_base"
  - "allocators::allocator_base"
  - "stdext.allocator_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocator_base class"
ms.assetid: f920b45f-2a88-4bb0-8ead-b6126b426ed4
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# allocator_base Class
Defines the base class and common functions needed to create a user-defined allocator from a synchronization filter.  
  
## Syntax  
  
```
template <class Type, class Sync>  
class allocator_base
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Type`|The type of elements allocated by the allocator.|  
|`Sync`|The synchronization policy for the allocator, which is [sync_none Class](../standard-library/sync-none-class.md), [sync_per_container Class](../standard-library/sync-per-container-class.md), [sync_per_thread Class](../standard-library/sync-per-thread-class.md), or [sync_shared Class](../standard-library/sync-shared-class.md).|  
  
### Constructors  
  
|||  
|-|-|  
|[allocator_base](#allocator_base__allocator_base)|Constructs an object of type `allocator_base`.|  
  
### TypeDefs  
  
|||  
|-|-|  
|[const_pointer](#allocator_base__const_pointer)|A type that provides a constant pointer to the type of object managed by the allocator.|  
|[const_reference](#allocator_base__const_reference)|A type that provides a constant reference to type of object managed by the allocator.|  
|[difference_type](#allocator_base__difference_type)|A signed integral type that can represent the difference between values of pointers to the type of object managed by the allocator.|  
|[pointer](#allocator_base__pointer)|A type that provides a pointer to the type of object managed by the allocator.|  
|[reference](#allocator_base__reference)|A type that provides a reference to the type of object managed by the allocator.|  
|[size_type](#allocator_base__size_type)|An unsigned integral type that can represent the length of any sequence that an object of template class `allocator_base` can allocate.|  
|[value_type](#allocator_base__value_type)|A type that is managed by the allocator.|  
  
### Member Functions  
  
|||  
|-|-|  
|[_Charalloc](#allocator_base___charalloc)|Allocates storage for an array of type `char`.|  
|[_Chardealloc](#allocator_base___chardealloc)|Frees storage for the array containing elements of type `char`.|  
|[address](#allocator_base__address)|Finds the address of an object whose value is specified.|  
|[allocate](#allocator_base__allocate)|Allocates a block of memory large enough to store at least some specified number of elements.|  
|[construct](#allocator_base__construct)|Constructs a specific type of object at a specified address that is initialized with a specified value.|  
|[deallocate](#allocator_base__deallocate)|Frees a specified number of objects from storage beginning at a specified position.|  
|[destroy](#allocator_base__destroy)|Calls an objects destructor without deallocating the memory where the object was stored.|  
|[max_size](#allocator_base__max_size)|Returns the number of elements of type `Type` that could be allocated by an object of class allocator before the free memory is used up.|  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
##  <a name="allocator_base___charalloc"></a>  allocator_base::_Charalloc  
 Allocates storage for an array of type `char`.  
  
```
char *_Charalloc(size_type count);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`count`|The number of elements in the array to be allocated.|  
  
### Return Value  
 A pointer to the allocated object.  
  
### Remarks  
 This member function is used by containers when compiled with a compiler that cannot compile rebind. It implements `_Charalloc` for the user-defined allocator by returning the result of a call to the `allocate` function of the synchronization filter.  
  
##  <a name="allocator_base___chardealloc"></a>  allocator_base::_Chardealloc  
 Frees storage for the array containing elements of type `char`.  
  
```
void _Chardealloc(void* ptr, size_type count);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`ptr`|A pointer to the first object to be deallocated from storage.|  
|`count`|The number of objects to be deallocated from storage.|  
  
### Remarks  
 This member function is used by containers when compiled with a compiler that cannot compile rebind. It implements `_Chardealloc` for the user-defined allocator by calling the `deallocate` function of the synchronization filter. The pointer ptr must have been earlier returned by a call to `_Charalloc` for an allocator object that compares equal to `*this`, allocating an array object of the same size and type. `_Chardealloc` never throws an exception.  
  
##  <a name="allocator_base__address"></a>  allocator_base::address  
 Finds the address of an object whose value is specified.  
  
```
pointer address(reference val);

const_pointer address(const_reference val);
```  
  
### Parameters  
 `val`  
 The const or nonconst value of the object whose address is being searched for.  
  
### Return Value  
 A const or nonconst pointer to the object found of, respectively, const or nonconst value.  
  
### Remarks  
 This member function is implemented for the user-defined allocator by returning `&val`.  
  
##  <a name="allocator_base__allocate"></a>  allocator_base::allocate  
 Allocates a block of memory large enough to store at least some specified number of elements.  
  
```
template <class Other>  
pointer allocate(size_type _Nx, const Other* _Hint = 0);

pointer allocate(size_type _Nx);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`_Nx`|The number of elements in the array to be allocated.|  
|`_Hint`|This parameter is ignored.|  
  
### Return Value  
 A pointer to the allocated object.  
  
### Remarks  
 The member function implements memory allocation for the user-defined allocator by returning the result of a call to the `allocate` function of the synchronization filter of type Type `*` if `_Nx == 1`, otherwise by returning the result of a call to `operator new(_Nx * sizeof(Type))` cast to type Type `*`.  
  
##  <a name="allocator_base__allocator_base"></a>  allocator_base::allocator_base  
 Constructs an object of type `allocator_base`.  
  
```
allocator_base();

template <class Other>  
allocator_base(const allocator_base<Other, Sync>& right);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`right`|The allocator object to be copied.|  
  
### Remarks  
 The first constructor constructs an [allocator_base](../standard-library/allocator-base-class.md) instance. The second constructor constructs an `allocator_base` instance such that for any `allocator_base<Type, _Sync>` instance `a`, `allocator_base<Type, Sync>(allocator_base<Other, Sync>(a)) == a`.  
  
##  <a name="allocator_base__const_pointer"></a>  allocator_base::const_pointer  
 A type that provides a constant pointer to the type of object managed by the allocator.  
  
```
typedef const Type *const_pointer;
```  
  
##  <a name="allocator_base__const_reference"></a>  allocator_base::const_reference  
 A type that provides a constant reference to type of object managed by the allocator.  
  
```
typedef const Type& const_reference;
```  
  
##  <a name="allocator_base__construct"></a>  allocator_base::construct  
 Constructs a specific type of object at a specified address that is initialized with a specified value.  
  
```
void construct(pointer ptr, const Type& val);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`ptr`|A pointer to the location where the object is to be constructed.|  
|`val`|The value with which the object being constructed is to be initialized.|  
  
### Remarks  
 This member function is implemented for the user-defined allocator by calling `new((void*)ptr Type(val)`.  
  
##  <a name="allocator_base__deallocate"></a>  allocator_base::deallocate  
 Frees a specified number of objects from storage beginning at a specified position.  
  
```
void deallocate(pointer ptr, size_type _Nx);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`ptr`|A pointer to the first object to be deallocated from storage.|  
|`_Nx`|The number of objects to be deallocated from storage.|  
  
### Remarks  
 This member function is implemented for the user-defined allocator by calling `deallocate(ptr)` on the synchronization filter `Sync` if `_Nx == 1`, otherwise by calling `operator delete(_Nx * ptr)`.  
  
##  <a name="allocator_base__destroy"></a>  allocator_base::destroy  
 Calls an objects destructor without deallocating the memory where the object was stored.  
  
```
void destroy(pointer ptr);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`ptr`|A pointer designating the address of the object to be destroyed.|  
  
### Remarks  
 This member function is implemented for the user-defined allocator by calling `ptr->~Type()`.  
  
##  <a name="allocator_base__difference_type"></a>  allocator_base::difference_type  
 A signed integral type that can represent the difference between values of pointers to the type of object managed by the allocator.  
  
```
typedef std::ptrdiff_t difference_type;
```  
  
##  <a name="allocator_base__max_size"></a>  allocator_base::max_size  
 Returns the number of elements of type `Type` that could be allocated by an object of class allocator before the free memory is used up.  
  
```
size_type max_size() const;
```  
  
### Return Value  
 The number of elements that could be allocated.  
  
### Remarks  
 This member function is implemented for the user-defined allocator by returning `(size_t)-1 / sizeof(Type)` if `0 < (size_t)-1 / sizeof(Type)`, otherwise `1`.  
  
##  <a name="allocator_base__pointer"></a>  allocator_base::pointer  
 A type that provides a pointer to the type of object managed by the allocator.  
  
```
typedef Type *pointer;
```  
  
##  <a name="allocator_base__reference"></a>  allocator_base::reference  
 A type that provides a reference to the type of object managed by the allocator.  
  
```
typedef Type& reference;
```  
  
##  <a name="allocator_base__size_type"></a>  allocator_base::size_type  
 An unsigned integral type that can represent the length of any sequence that an object of template class `allocator_base` can allocate.  
  
```
typedef std::size_t size_type;
```  
  
##  <a name="allocator_base__value_type"></a>  allocator_base::value_type  
 A type that is managed by the allocator.  
  
```
typedef Type value_type;
```  
  
## See Also  
 [\<allocators>](../standard-library/allocators-header.md)



