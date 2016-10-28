---
title: "concurrent_vector Class"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concurrent_vector/Concurrency::concurrent_vector"
  - "concurrent_vector/concurrency::concurrent_vector"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "concurrent_vector class"
ms.assetid: a217b4ac-af2b-4d41-94eb-09a75ee28622
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
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
# concurrent_vector Class
The `concurrent_vector` class is a sequence container class that allows random access to any element. It enables concurrency-safe append, element access, iterator access, and iterator traversal operations.  
  
## Syntax  
  
```
template<typename T, class _Ax>
class concurrent_vector: protected details::_Allocator_base<T,
    _Ax>,
 private details::_Concurrent_vector_base_v4;
```  
  
#### Parameters  
 `T`  
 The data type of the elements to be stored in the vector.  
  
 `_Ax`  
 The type that represents the stored allocator object that encapsulates details about the allocation and deallocation of memory for the concurrent vector. This argument is optional and the default value is `allocator<``T``>`.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`allocator_type`|A type that represents the allocator class for the concurrent vector.|  
|`const_iterator`|A type that provides a random-access iterator that can read a `const` element in a concurrent vector.|  
|`const_pointer`|A type that provides a pointer to a `const` element in a concurrent vector.|  
|`const_reference`|A type that provides a reference to a `const` element stored in a concurrent vector for reading and performing `const` operations.|  
|`const_reverse_iterator`|A type that provides a random-access iterator that can read any `const` element in the concurrent vector.|  
|`difference_type`|A type that provides the signed distance between two elements in a concurrent vector.|  
|`iterator`|A type that provides a random-access iterator that can read any element in a concurrent vector. Modification of an element using the iterator is not concurrency-safe.|  
|`pointer`|A type that provides a pointer to an element in a concurrent vector.|  
|`reference`|A type that provides a reference to an element stored in a concurrent vector.|  
|`reverse_iterator`|A type that provides a random-access iterator that can read any element in a reversed concurrent vector. Modification of an element using the iterator is not concurrency-safe.|  
|`size_type`|A type that counts the number of elements in a concurrent vector.|  
|`value_type`|A type that represents the data type stored in a concurrent vector.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[concurrent_vector::concurrent_vector Constructor](#concurrent_vector__concurrent_vector_constructor)|Overloaded. Constructs a concurrent vector.|  
|[concurrent_vector::~concurrent_vector Destructor](#concurrent_vector___dtorconcurrent_vector_destructor)|Erases all elements and destroys this concurrent vector.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[concurrent_vector::assign Method](#concurrent_vector__assign_method)|Overloaded. Erases the elements of the concurrent vector and assigns to it either `_N` copies of `_Item`, or values specified by the iterator range [ `_Begin`, `_End`). This method is not concurrency-safe.|  
|[concurrent_vector::at Method](#concurrent_vector__at_method)|Overloaded. Provides access to the element at the given index in the concurrent vector. This method is concurrency-safe for read operations, and also while growing the vector, as long as you have ensured that the value `_Index` is less than the size of the concurrent vector.|  
|[concurrent_vector::back Method](#concurrent_vector__back_method)|Overloaded. Returns a reference or a `const` reference to the last element in the concurrent vector. If the concurrent vector is empty, the return value is undefined. This method is concurrency-safe.|  
|[concurrent_vector::begin Method](#concurrent_vector__begin_method)|Overloaded. Returns an iterator of type `iterator` or `const_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.|  
|[concurrent_vector::capacity Method](#concurrent_vector__capacity_method)|Returns the maximum size to which the concurrent vector can grow without having to allocate more memory. This method is concurrency-safe.|  
|[concurrent_vector::cbegin Method](#concurrent_vector__cbegin_method)|Returns an iterator of type `const_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.|  
|[concurrent_vector::cend Method](#concurrent_vector__cend_method)|Returns an iterator of type `const_iterator` to the end of the concurrent vector. This method is concurrency-safe.|  
|[concurrent_vector::clear Method](#concurrent_vector__clear_method)|Erases all elements in the concurrent vector. This method is not concurrency-safe.|  
|[concurrent_vector::crbegin Method](#concurrent_vector__crbegin_method)|Returns an iterator of type `const_reverse_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.|  
|[concurrent_vector::crend Method](#concurrent_vector__crend_method)|Returns an iterator of type `const_reverse_iterator` to the end of the concurrent vector. This method is concurrency-safe.|  
|[concurrent_vector::empty Method](#concurrent_vector__empty_method)|Tests if the concurrent vector is empty at the time this method is called. This method is concurrency-safe.|  
|[concurrent_vector::end Method](#concurrent_vector__end_method)|Overloaded. Returns an iterator of type `iterator` or `const_iterator` to the end of the concurrent vector. This method is concurrency-safe.|  
|[concurrent_vector::front Method](#concurrent_vector__front_method)|Overloaded. Returns a reference or a `const` reference to the first element in the concurrent vector. If the concurrent vector is empty, the return value is undefined. This method is concurrency-safe.|  
|[concurrent_vector::get_allocator Method](#concurrent_vector__get_allocator_method)|Returns a copy of the allocator used to construct the concurrent vector. This method is concurrency-safe.|  
|[concurrent_vector::grow_by Method](#concurrent_vector__grow_by_method)|Overloaded. Grows this concurrent vector by `_Delta` elements. This method is concurrency-safe.|  
|[concurrent_vector::grow_to_at_least Method](#concurrent_vector__grow_to_at_least_method)|Grows this concurrent vector until it has at least `_N` elements. This method is concurrency-safe.|  
|[concurrent_vector::max_size Method](#concurrent_vector__max_size_method)|Returns the maximum number of elements the concurrent vector can hold. This method is concurrency-safe.|  
|[concurrent_vector::push_back Method](#concurrent_vector__push_back_method)|Overloaded. Appends the given item to the end of the concurrent vector. This method is concurrency-safe.|  
|[concurrent_vector::rbegin Method](#concurrent_vector__rbegin_method)|Overloaded. Returns an iterator of type `reverse_iterator` or `const_reverse_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.|  
|[concurrent_vector::rend Method](#concurrent_vector__rend_method)|Overloaded. Returns an iterator of type `reverse_iterator` or `const_reverse_iterator` to the end of the concurrent vector. This method is concurrency-safe.|  
|[concurrent_vector::reserve Method](#concurrent_vector__reserve_method)|Allocates enough space to grow the concurrent vector to size `_N` without having to allocate more memory later. This method is not concurrency-safe.|  
|[concurrent_vector::resize Method](#concurrent_vector__resize_method)|Overloaded. Changes the size of the concurrent vector to the requested size, deleting or adding elements as necessary. This method is not concurrency-safe.|  
|[concurrent_vector::shrink_to_fit Method](#concurrent_vector__shrink_to_fit_method)|Compacts the internal representation of the concurrent vector to reduce fragmentation and optimize memory usage. This method is not concurrency-safe.|  
|[concurrent_vector::size Method](#concurrent_vector__size_method)|Returns the number of elements in the concurrent vector. This method is concurrency-safe.|  
|[concurrent_vector::swap Method](#concurrent_vector__swap_method)|Swaps the contents of two concurrent vectors. This method is not concurrency-safe.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[concurrent_vector::operator[] Operator](#concurrent_vector__operator_at_operator)|Overloaded. Provides access to the element at the given index in the concurrent vector. This method is concurrency-safe for read operations, and also while growing the vector, as long as the you have ensured that the value `_Index` is less than the size of the concurrent vector.|  
|[concurrent_vector::operator= Operator](#concurrent_vector__operator_eq_operator)|Overloaded. Assigns the contents of another `concurrent_vector` object to this one. This method is not concurrency-safe.|  
  
## Remarks  
 For detailed information on the `concurrent_vector` class, see [Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
## Inheritance Hierarchy  
 `_Concurrent_vector_base_v4`  
  
 `_Allocator_base`  
  
 `concurrent_vector`  
  
## Requirements  
 **Header:** concurrent_vector.h  
  
 **Namespace:** concurrency  
  
##  <a name="concurrent_vector__assign_method"></a>  concurrent_vector::assign Method  
 Erases the elements of the concurrent vector and assigns to it either `_N` copies of `_Item`, or values specified by the iterator range [ `_Begin`, `_End`). This method is not concurrency-safe.  
  
```
void assign(
    size_type _N,
    const_reference _Item);

template<class _InputIterator>
void assign(_InputIterator _Begin,
    _InputIterator _End);
```  
  
### Parameters  
 `_InputIterator`  
 The type of the specified iterator.  
  
 `_N`  
 The number of items to copy into the concurrent vector.  
  
 `_Item`  
 Reference to a value used to fill the concurrent vector.  
  
 `_Begin`  
 An iterator to the first element of the source range.  
  
 `_End`  
 An iterator to one past the last element of the source range.  
  
### Remarks  
 `assign` is not concurrency-safe. You must ensure that no other threads are invoking methods on the concurrent vector when you call this method.  
  
##  <a name="concurrent_vector__at_method"></a>  concurrent_vector::at Method  
 Provides access to the element at the given index in the concurrent vector. This method is concurrency-safe for read operations, and also while growing the vector, as long as you have ensured that the value `_Index` is less than the size of the concurrent vector.  
  
```
reference at(size_type _Index);

const_reference at(size_type _Index) const;
```  
  
### Parameters  
 `_Index`  
 The index of the element to be retrieved.  
  
### Return Value  
 A reference to the item at the given index.  
  
### Remarks  
 The version of the function `at` that returns a non- `const` reference cannot be used to concurrently write to the element from different threads. A different synchronization object should be used to synchronize concurrent read and write operations to the same data element.  
  
 The method throws `out_of_range` if `_Index` is greater than or equal to the size of the concurrent vector, and `range_error` if the index is for a broken portion of the vector. For details on how a vector can become broken, see [Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md).  
  
##  <a name="concurrent_vector__back_method"></a>  concurrent_vector::back Method  
 Returns a reference or a `const` reference to the last element in the concurrent vector. If the concurrent vector is empty, the return value is undefined. This method is concurrency-safe.  
  
```
reference back();

const_reference back() const;
```  
  
### Return Value  
 A reference or a `const` reference to the last element in the concurrent vector.  
  
##  <a name="concurrent_vector__begin_method"></a>  concurrent_vector::begin Method  
 Returns an iterator of type `iterator` or `const_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.  
  
```
iterator begin();

const_iterator begin() const;
```  
  
### Return Value  
 An iterator of type `iterator` or `const_iterator` to the beginning of the concurrent vector.  
  
##  <a name="concurrent_vector__capacity_method"></a>  concurrent_vector::capacity Method  
 Returns the maximum size to which the concurrent vector can grow without having to allocate more memory. This method is concurrency-safe.  
  
```
size_type capacity() const;
```  
  
### Return Value  
 The maximum size to which the concurrent vector can grow without having to allocate more memory.  
  
### Remarks  
 Unlike an STL `vector`, a `concurrent_vector` object does not move existing elements if it allocates more memory.  
  
##  <a name="concurrent_vector__cbegin_method"></a>  concurrent_vector::cbegin Method  
 Returns an iterator of type `const_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.  
  
```
const_iterator cbegin() const;
```  
  
### Return Value  
 An iterator of type `const_iterator` to the beginning of the concurrent vector.  
  
##  <a name="concurrent_vector__cend_method"></a>  concurrent_vector::cend Method  
 Returns an iterator of type `const_iterator` to the end of the concurrent vector. This method is concurrency-safe.  
  
```
const_iterator cend() const;
```  
  
### Return Value  
 An iterator of type `const_iterator` to the end of the concurrent vector.  
  
##  <a name="concurrent_vector__clear_method"></a>  concurrent_vector::clear Method  
 Erases all elements in the concurrent vector. This method is not concurrency-safe.  
  
```
void clear();
```  
  
### Remarks  
 `clear` is not concurrency-safe. You must ensure that no other threads are invoking methods on the concurrent vector when you call this method. `clear` does not free internal arrays. To free internal arrays, call the function `shrink_to_fit` after `clear`.  
  
##  <a name="concurrent_vector__concurrent_vector_constructor"></a>  concurrent_vector::concurrent_vector Constructor  
 Constructs a concurrent vector.  
  
```
explicit concurrent_vector(
    const allocator_type& _Al = allocator_type());

concurrent_vector(
    const concurrent_vector& _Vector);

template<class M>
concurrent_vector(
    const concurrent_vector<T,
    M>& _Vector,
    const allocator_type& _Al = allocator_type());

concurrent_vector(
    concurrent_vector&& _Vector);

explicit concurrent_vector(
    size_type _N);

concurrent_vector(
    size_type _N,
    const_reference _Item,
    const allocator_type& _Al = allocator_type());

template<class _InputIterator>
concurrent_vector(_InputIterator _Begin,
    _InputIterator _End,
    const allocator_type& _Al = allocator_type());
```  
  
### Parameters  
 `M`  
 The allocator type of the source vector.  
  
 `_InputIterator`  
 The type of the input iterator.  
  
 `_Al`  
 The allocator class to use with this object.  
  
 `_Vector`  
 The source `concurrent_vector` object to copy or move elements from.  
  
 `_N`  
 The initial capacity of the `concurrent_vector` object.  
  
 `_Item`  
 The value of elements in the constructed object.  
  
 `_Begin`  
 Position of the first element in the range of elements to be copied.  
  
 `_End`  
 Position of the first element beyond the range of elements to be copied.  
  
### Remarks  
 All constructors store an allocator object `_Al` and initialize the vector.  
  
 The first constructor specify an empty initial vector and explicitly specifies the allocator type. to be used.  
  
 The second and third constructors specify a copy of the concurrent vector `_Vector`.  
  
 The fourth constructor specifies a move of the concurrent vector `_Vector`.  
  
 The fifth constructor specifies a repetition of a specified number ( `_N`) of elements of the default value for class `T`.  
  
 The sixth constructor specifies a repetition of ( `_N`) elements of value `_Item`.  
  
 The last constructor specifies values supplied by the iterator range [ `_Begin`, `_End`).  
  
##  <a name="concurrent_vector___dtorconcurrent_vector_destructor"></a>  concurrent_vector::~concurrent_vector Destructor  
 Erases all elements and destroys this concurrent vector.  
  
```
~concurrent_vector();
```  
  
##  <a name="concurrent_vector__crbegin_method"></a>  concurrent_vector::crbegin Method  
 Returns an iterator of type `const_reverse_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.  
  
```
const_reverse_iterator crbegin() const;
```  
  
### Return Value  
 An iterator of type `const_reverse_iterator` to the beginning of the concurrent vector.  
  
##  <a name="concurrent_vector__crend_method"></a>  concurrent_vector::crend Method  
 Returns an iterator of type `const_reverse_iterator` to the end of the concurrent vector. This method is concurrency-safe.  
  
```
const_reverse_iterator crend() const;
```  
  
### Return Value  
 An iterator of type `const_reverse_iterator` to the end of the concurrent vector.  
  
##  <a name="concurrent_vector__empty_method"></a>  concurrent_vector::empty Method  
 Tests if the concurrent vector is empty at the time this method is called. This method is concurrency-safe.  
  
```
bool empty() const;
```  
  
### Return Value  
 `true` if the vector was empty at the moment the function was called, `false` otherwise.  
  
##  <a name="concurrent_vector__end_method"></a>  concurrent_vector::end Method  
 Returns an iterator of type `iterator` or `const_iterator` to the end of the concurrent vector. This method is concurrency-safe.  
  
```
iterator end();

const_iterator end() const;
```  
  
### Return Value  
 An iterator of type `iterator` or `const_iterator` to the end of the concurrent vector.  
  
##  <a name="concurrent_vector__front_method"></a>  concurrent_vector::front Method  
 Returns a reference or a `const` reference to the first element in the concurrent vector. If the concurrent vector is empty, the return value is undefined. This method is concurrency-safe.  
  
```
reference front();

const_reference front() const;
```  
  
### Return Value  
 A reference or a `const` reference to the first element in the concurrent vector.  
  
##  <a name="concurrent_vector__get_allocator_method"></a>  concurrent_vector::get_allocator Method  
 Returns a copy of the allocator used to construct the concurrent vector. This method is concurrency-safe.  
  
```
allocator_type get_allocator() const;
```  
  
### Return Value  
 A copy of the allocator used to construct the `concurrent_vector` object.  
  
##  <a name="concurrent_vector__grow_by_method"></a>  concurrent_vector::grow_by Method  
 Grows this concurrent vector by `_Delta` elements. This method is concurrency-safe.  
  
```
iterator grow_by(
    size_type _Delta);

iterator grow_by(
    size_type _Delta,
    const_reference _Item);
```  
  
### Parameters  
 `_Delta`  
 The number of elements to append to the object.  
  
 `_Item`  
 The value to initialize the new elements with.  
  
### Return Value  
 An iterator to first item appended.  
  
### Remarks  
 If `_Item` is not specified, the new elements are default constructed.  
  
##  <a name="concurrent_vector__grow_to_at_least_method"></a>  concurrent_vector::grow_to_at_least Method  
 Grows this concurrent vector until it has at least `_N` elements. This method is concurrency-safe.  
  
```
iterator grow_to_at_least(size_type _N);
```  
  
### Parameters  
 `_N`  
 The new minimum size for the `concurrent_vector` object.  
  
### Return Value  
 An iterator that points to beginning of appended sequence, or to the element at index `_N` if no elements were appended.  
  
##  <a name="concurrent_vector__max_size_method"></a>  concurrent_vector::max_size Method  
 Returns the maximum number of elements the concurrent vector can hold. This method is concurrency-safe.  
  
```
size_type max_size() const;
```  
  
### Return Value  
 The maximum number of elements the `concurrent_vector` object can hold.  
  
##  <a name="concurrent_vector__operator_eq_operator"></a>  concurrent_vector::operator= Operator  
 Assigns the contents of another `concurrent_vector` object to this one. This method is not concurrency-safe.  
  
```
concurrent_vector& operator= (
    const concurrent_vector& _Vector);

template<class M>
concurrent_vector& operator= (
    const concurrent_vector<T, M>& _Vector);

concurrent_vector& operator= (
    concurrent_vector&& _Vector);
```  
  
### Parameters  
 `M`  
 The allocator type of the source vector.  
  
 `_Vector`  
 The source `concurrent_vector` object.  
  
### Return Value  
 A reference to this `concurrent_vector` object.  
  
##  <a name="concurrent_vector__operator_at_operator"></a>  concurrent_vector::operator[] Operator  
 Provides access to the element at the given index in the concurrent vector. This method is concurrency-safe for read operations, and also while growing the vector, as long as the you have ensured that the value `_Index` is less than the size of the concurrent vector.  
  
```
reference operator[](size_type _Index);

const_reference operator[](size_type _Index) const;
```  
  
### Parameters  
 `_Index`  
 The index of the element to be retrieved.  
  
### Return Value  
 A reference to the item at the given index.  
  
### Remarks  
 The version of `operator []` that returns a non- `const` reference cannot be used to concurrently write to the element from different threads. A different synchronization object should be used to synchronize concurrent read and write operations to the same data element.  
  
 No bounds checking is performed to ensure that `_Index` is a valid index into the concurrent vector.  
  
##  <a name="concurrent_vector__push_back_method"></a>  concurrent_vector::push_back Method  
 Appends the given item to the end of the concurrent vector. This method is concurrency-safe.  
  
```
iterator push_back(const_reference _Item);

iterator push_back(T&& _Item);
```  
  
### Parameters  
 `_Item`  
 The value to be appended.  
  
### Return Value  
 An iterator to item appended.  
  
##  <a name="concurrent_vector__rbegin_method"></a>  concurrent_vector::rbegin Method  
 Returns an iterator of type `reverse_iterator` or `const_reverse_iterator` to the beginning of the concurrent vector. This method is concurrency-safe.  
  
```
reverse_iterator rbegin();

const_reverse_iterator rbegin() const;
```  
  
### Return Value  
 An iterator of type `reverse_iterator` or `const_reverse_iterator` to the beginning of the concurrent vector.  
  
##  <a name="concurrent_vector__rend_method"></a>  concurrent_vector::rend Method  
 Returns an iterator of type `reverse_iterator` or `const_reverse_iterator` to the end of the concurrent vector. This method is concurrency-safe.  
  
```
reverse_iterator rend();

const_reverse_iterator rend() const;
```  
  
### Return Value  
 An iterator of type `reverse_iterator` or `const_reverse_iterator` to the end of the concurrent vector.  
  
##  <a name="concurrent_vector__reserve_method"></a>  concurrent_vector::reserve Method  
 Allocates enough space to grow the concurrent vector to size `_N` without having to allocate more memory later. This method is not concurrency-safe.  
  
```
void reserve(size_type _N);
```  
  
### Parameters  
 `_N`  
 The number of elements to reserve space for.  
  
### Remarks  
 `reserve` is not concurrency-safe. You must ensure that no other threads are invoking methods on the concurrent vector when you call this method. The capacity of the concurrent vector after the method returns may be bigger than the requested reservation.  
  
##  <a name="concurrent_vector__resize_method"></a>  concurrent_vector::resize Method  
 Changes the size of the concurrent vector to the requested size, deleting or adding elements as necessary. This method is not concurrency-safe.  
  
```
void resize(
    size_type _N);

void resize(
    size_type _N,
    const T& val);
```  
  
### Parameters  
 `_N`  
 The new size of the concurrent_vector.  
  
 `val`  
 The value of new elements added to the vector if the new size is larger than the original size. If the value is omitted, the new objects are assigned the default value for their type.  
  
### Remarks  
 If the size of the container is less than the requested size, elements are added to the vector until it reaches the requested size. If the size of the container is larger than the requested size, the elements closest to the end of the container are deleted until the container reaches the size `_N`. If the present size of the container is the same as the requested size, no action is taken.  
  
 `resize` is not concurrency safe. You must ensure that no other threads are invoking methods on the concurrent vector when you call this method.  
  
##  <a name="concurrent_vector__shrink_to_fit_method"></a>  concurrent_vector::shrink_to_fit Method  
 Compacts the internal representation of the concurrent vector to reduce fragmentation and optimize memory usage. This method is not concurrency-safe.  
  
```
void shrink_to_fit();
```  
  
### Remarks  
 This method will internally re-allocate memory move elements around, invalidating all the iterators. `shrink_to_fit` is not concurrency-safe. You must ensure that no other threads are invoking methods on the concurrent vector when you call this function.  
  
##  <a name="concurrent_vector__size_method"></a>  concurrent_vector::size Method  
 Returns the number of elements in the concurrent vector. This method is concurrency-safe.  
  
```
size_type size() const;
```  
  
### Return Value  
 The number of elements in this `concurrent_vector` object.  
  
### Remarks  
 The returned size is guaranteed to include all elements appended by calls to the function `push_back`, or grow operations that have completed prior to invoking this method. However, it may also include elements that are allocated but still under construction by concurrent calls to any of the growth methods.  
  
##  <a name="concurrent_vector__swap_method"></a>  concurrent_vector::swap Method  
 Swaps the contents of two concurrent vectors. This method is not concurrency-safe.  
  
```
void swap(concurrent_vector& _Vector);
```  
  
### Parameters  
 `_Vector`  
 The `concurrent_vector` object to swap contents with.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Parallel Containers and Objects](../../../parallel/concrt/parallel-containers-and-objects.md)



