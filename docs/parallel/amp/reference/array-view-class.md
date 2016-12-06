---
title: "array_view Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::array_view"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "array_view class"
ms.assetid: 7e7ec9bc-05a2-4372-b05d-752b50006c5a
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
# array_view Class
Represents an N-dimensional view over the data held in another container.  
  
## Syntax  
  
```  
template <
    typename value_type,  
    int _Rank = 1  
>  
class array_view : public _Array_view_base<_Rank, sizeof(value_type)/sizeof(int)>;  
 
template <
    typename value_type,  
    int _Rank  
>  
class array_view<const value_type, _Rank> : public _Array_view_base<_Rank, sizeof(value_type)/sizeof(int)>;  
```  
  
#### Parameters  
 `value_type`  
 The data type of the elements in the `array_view` object.  
  
 `_Rank`  
 The rank of the `array_view` object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[array_view::array_view Constructor](#ctor)|Initializes a new instance of the `array_view` class. There is no default constructor for `array<T,N>`. All constructors are restricted to run on the CPU only and cannot be executed on a Direct3D target.|  
|[array_view::~array_view Destructor](#ctor)|Destroys the `array_view` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[array_view::copy_to Method](#copy_to)|Copies the contents of the `array_view` object to the specified destination by calling `copy(*this, dest)`.|  
|[array_view::data Method](#data)|Returns a pointer to the raw data of the `array_view`.|  
|[array_view::discard_data Method](#discard_data)|Discards the current data underlying this view.|  
|[array_view::get_extent Method](#get_extent)|Returns the extent object of the array_view object.|  
|[array_view::get_ref Method](#get_ref)|Returns a reference to the indexed element.|  
|[array_view::get_source_accelerator_view Method](#get_source_accelerator_view)|Returns the [accelerator_view](accelerator-view-class.md) where the data source of the `array_view` is located.|  
|[array_view::refresh Method](#refresh)|Notifies the `array_view` object that its bound memory has been modified outside the `array_view` interface. A call to this method renders all cached information stale.|  
|[array_view::reinterpret_as Method](#reinterpret_as)|Returns a one-dimensional array that contains all the elements in the `array_view` object.|  
|[array_view::section Method](#section)|Returns a subsection of the `array_view` object that's at the specified origin and, optionally, that has the specified extent.|  
|[array_view::synchronize Method](#synchronize)|Synchronizes any modifications made to the `array_view` object back to its source data.|  
|[array_view::synchronize_async Method](#synchronize_async)|Asynchronously synchronizes any modifications made to the [array_view](array-view-class.md) object back to its source data.|  
|[array_view::synchronize_to Method](#synchronize_to)|Synchronizes any modifications made to the `array_view` object to the specified [accelerator_view](accelerator-view-class.md).|  
|[array_view::synchronize_to_async Method](#synchronize_to_async)|Asynchronously synchronizes any modifications made to the `array_view` object to the specified [accelerator_view](accelerator-view-class.md).|  
|[array_view::view_as Method](#view_as)|Produces an `array_view` object of a different rank using this `array_view` object’s data.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[array_view::operator() Operator](#array_view__operator_call)|Returns the value of the element that is specified by the parameter or parameters.|  
|[array_view::operator[] Operator](#operator_at)|Returns the element that is specified by the parameters.|  
|[array_view::operator= Operator](#operator_eq)|Copies the contents of the specified `array_view` object into this one.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[array_view::rank Constant](#rank)|Stores the rank of the `array_view` object.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[array_view::extent Data Member](#extent)|Gets the `extent` object that defines the shape of the `array_view` object.|  
|[array_view::source_accelerator_view Data Member](#source_accelerator_view)|Gets the [accelerator_view](accelerator-view-class.md) where the data source of the `array_view` is located|  
|[array_view::value_type Data Member](#value_type)|The value type of the `array_view` and the bound array.|  
  
## Remarks  
 The `array_view` class represents a view into the data that is contained in an [array](array-class.md) object or a subsection of an `array` object.  
  
 You can access the `array_view` object where the source data is located (locally) or on a different accelerator or a coherence domain (remotely). When you access the object remotely, views are copied and cached as necessary. Except for the effects of automatic caching, `array_view` objects have a performance profile similar to that of `array` objects. There is a small performance penalty when you access the data through views.  
  
 There are three remote usage scenarios:  
  
-   A view to a system memory pointer is passed by means of a [parallel_for_each](../../../parallel/concrt/reference/concurrency-namespace-functions.md#parallel_for_each) call to an accelerator and accessed on the accelerator.  
  
-   A view to an array located on an accelerator is passed by means of a `parallel_for_each` call to another accelerator and is accessed there.  
  
-   A view to an array located on an accelerator is accessed on the CPU.  
  
 In any one of these scenarios, the referenced views are copied by the runtime to the remote location and, if modified by the calls to the `array_view` object, are copied back to the local location. The runtime might optimize the process of copying changes back, might copy only changed elements, or might copy unchanged portions also. Overlapping `array_view` objects on one data source are not guaranteed to maintain referential integrity in a remote location.  
  
 You must synchronize any multithreaded access to the same data source.  
  
 The runtime makes the following guarantees regarding the caching of data in `array_view` objects:  
  
-   All well-synchronized accesses to an `array` object and an `array_view` object on it in program order obey a serial happens-before relationship.  
  
-   All well-synchronized accesses to overlapping `array_view` objects on the same accelerator on a single `array` object are aliased through the `array` object. They induce a total occurs-before relationship which obeys program order. There is no caching. If the `array_view` objects are executing on different accelerators, the order of access is undefined, creating a race condition.  
  
 When you create an `array_view` object using a pointer in system memory, you must change the view `array_view` object only through the `array_view` pointer. Alternatively, you must call `refresh()` on one of the `array_view` objects that are attached to the system pointer, if the underlying native memory is changed directly, instead of through the `array_view` object.  
  
 Either action notifies the `array_view` object that the underlying native memory is changed and that any copies that are located on an accelerator are outdated. If you follow these guidelines, the pointer-based views are identical to those provided to views of data-parallel arrays.  
  
## Inheritance Hierarchy  
 `_Array_view_shape`  
  
 `_Array_view_base`  
  
 `array_view`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
##  <a name="dtor"></a>  array_view::~array_view Destructor  
 Destroys the [array_view](array-view-class.md) object.  
  
```  
~array_view()restrict(amp,cpu);
```  
  
##  <a name="ctor"></a>  array_view::array_view Constructor  
 Initializes a new instance of the [array_view](array-view-class.md) class.  
  
```  
array_view(
    array<value_type, _Rank>& _Src)restrict(amp,cpu);

 
array_view(
    const array_view& _Other)restrict(amp,cpu);

 
explicit array_view(
    const Concurrency::extent<_Rank>& _Extent) restrict(cpu);

 
template <
    typename _Container  
>  
array_view(
    const Concurrency::extent<_Rank>& _Extent,  
    _Container& _Src) restrict(cpu);

 
array_view(
    const Concurrency::extent<_Rank>& _Extent,  
    value_type* _Src)restrict(amp,cpu);

 
explicit array_view(
    int _E0) restrict(cpu);

 
template <
    typename _Container  
>  
explicit array_view(
    _Container& _Src,  
    typename std::enable_if<details::_Is_container<_Container>::type::value, void **>::type = 0) restrict(cpu);

 
template <
    typename _Container  
>  
explicit array_view(
    int _E0,  
    _Container& _Src) restrict(cpu);

 
explicit array_view(
    int _E0,  
    int _E1) __CPU_ONLY;  
 
template <
    typename _Container  
>  
explicit array_view(
    int _E0,  
    int _E1,  
    _Container& _Src) restrict(cpu);

 
explicit array_view(
    int _E0,  
    int _E1,  
    int _E2) __CPU_ONLY;  
 
template <
    typename _Container  
>  
explicit array_view(
    int _E0,  
    int _E1,  
    int _E2,  
    _Container& _Src);

 
explicit array_view(
    int _E0,  
    _In_ value_type* _Src)restrict(amp,cpu);

 
template <
    typename _Arr_type,  
    int _Size  
>  
explicit array_view(
    _In_ _Arr_type (& _Src) [_Size]) restrict(amp,cpu);

 
explicit array_view(
    int _E0,  
    int _E1,  
    _In_ value_type* _Src)restrict(amp,cpu);

 
explicit array_view(
    int _E0,  
    int _E1,  
    int _E2,  
    _In_ value_type* _Src)restrict(amp,cpu);

 
array_view(
    const array<value_type, _Rank>& _Src)restrict(amp,cpu);

 
array_view(
    const array_view<value_type, _Rank>& _Src)restrict(amp,cpu);

 
array_view(
    const array_view<const value_type, _Rank>& _Src)restrict(amp,cpu);

 
template <
    typename _Container  
>  
array_view(
    const Concurrency::extent<_Rank>& _Extent,  
    const _Container& _Src) restrict(cpu);

 
template <
    typename _Container  
>  
explicit array_view(
    const _Container& _Src,  
    typename std::enable_if<details::_Is_container<_Container>::type::value, void **>::type = 0) restrict(cpu);

 
array_view(
    const Concurrency::extent<_Rank>& _Extent,  
    const value_type* _Src)restrict(amp,cpu);

 
template <
    typename _Arr_type,  
    int _Size  
>  
explicit array_view(
    const _In_ _Arr_type (& _Src) [_Size]) restrict(amp,cpu);

 
template <
    typename _Container  
>  
array_view(
    int _E0,  
    const _Container& _Src);

 
template <
    typename _Container  
>  
array_view(
    int _E0,  
    int _E1,  
    const _Container& _Src);

 
template <
    typename _Container  
>  
array_view(
    int _E0,  
    int _E1,  
    int _E2,  
    const _Container& _Src);

 
array_view(
    int _E0,  
    const value_type* _Src)restrict(amp,cpu);

 
array_view(
    int _E0,  
    int _E1,  
    const value_type* _Src) restrict(amp,cpu);

 
array_view(
    int _E0,  
    int _E1,  
    int _E2,  
    const value_type* _Src) restrict(amp,cpu);

 
```  
  
### Parameters  
 `_Arr_type`  
 The element type of a C-style array from which data is supplied.  
  
 `_Container`  
 A template argument that must specify a linear container that supports `data()` and `size()` members.  
  
 `_E0`  
 The most significant component of the extent of this section.  
  
 `_E1`  
 The next-to-most-significant component of the extent of this section.  
  
 `_E2`  
 The least significant component of the extent of this section.  
  
 `_Extent`  
 The extent in each dimension of this `array_view`.  
  
 `_Other`  
 An object of type `array_view<T,N>` from which to initialize the new `array_view`.  
  
 `_Size`  
 The size of a C-style array from which data is supplied.  
  
 `_Src`  
 A pointer to the source data that will be copied into the new array.  
  
##  <a name="copy_to"></a>  array_view::copy_to Method  
 Copies the contents of the `array_view` object to the specified destination object by calling `copy(*this, dest)`.  
  
```  
void copy_to(
    array<value_type, _Rank>& _Dest) const;

 
 
void copy_to(
    array_view<value_type, _Rank>& _Dest) const;

 
```  
  
### Parameters  
 `_Dest`  
 The object to copy to.  
  
##  <a name="data"></a>  array_view::data Method  
 Returns a pointer to the raw data of the [array_view](array-view-class.md).  
  
```  
value_type* data() const restrict(amp,
    cpu);

 
const value_type* data() const restrict(amp,
    cpu);
```  
  
### Return Value  
 A pointer to the raw data of the `array_view`.  
  
##  <a name="discard_data"></a>  array_view::discard_data Method  
 Discards the current data underlying this view. This is an optimization hint to the runtime used to avoid copying the current contents of the view to a target `accelerator_view` that it is accessed on, and its use is recommended if the existing content is not needed. This method is a no-op when used in a restrict(amp) context  
  
```  
void discard_data() const restrict(cpu);
```  
  
##  <a name="extent"></a>  array_view::extent Data Member  
 Gets the `extent` object that defines the shape of the `array_view` object.  
  
```  
__declspec(property(get= get_extent)) Concurrency::extent<_Rank> extent;  
```  
  
##  <a name="get_extent"></a>  array_view::get_extent Method  
 Returns the [extent](extent-class.md) object of the [array_view](array-view-class.md) object.  
  
```  
Concurrency::extent<_Rank> get_extent() const restrict(cpu, amp);
```  
  
### Return Value  
 The `extent` object of the `array_view` object  
  
##  <a name="get_ref"></a>  array_view::get_ref Method  
 Get a reference to the element indexed by _Index. Unlike the other indexing operators for accessing the array_view on the CPU, this method does not implicitly synchronize this array_view's contents to the CPU. After accessing the array_view on a remote location or performing a copy operation involving this array_view users are responsible to explicitly synchronize the array_view to the CPU before calling this method. Failure to do so results in undefined behavior.  
  
```  
value_type& get_ref(
    const index<_Rank>& _Index) const restrict(amp, cpu);
```  
  
### Parameters  
 `_Index`  
 The index.  
  
### Return Value  
 Reference to the element indexed by _Index  
  
##  <a name="get_source_accelerator_view"></a>  array_view::get_source_accelerator_view Method  
 Returns the accelerator_view where the data source of the array_view is located. If the array_view does not have a data source, this API throws a runtime_exception  
  
```  
accelerator_view get_source_accelerator_view() const;

 
```  
  
### Return Value  
  
##  <a name="array_view__operator_call"></a>  array_view::operator() Operator  
 Returns the value of the element that is specified by the parameter or parameters.  
  
```  
value_type& operator() (
    const index<_Rank>& _Index) const restrict(amp,cpu);

 
typename details::_Projection_result_type<value_type,_Rank>::_Result_type operator() (
    int _I) const restrict(amp,cpu);

 
value_type& operator() (
    int _I0,  
    int _I1) const restrict(amp,cpu);

 
value_type& operator() (
    int _I0,  
    int _I1,  
    int _I2) const restrict(amp,cpu);

 
typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator() (
    int _I) const restrict(amp,cpu);
```  
  
### Parameters  
 `_Index`  
 The location of the element.  
  
 `_I0`  
 The index in the first dimension.  
  
 `_I1`  
 The index in the second dimension.  
  
 `_I2`  
 The index in the third dimension.  
  
 `_I`  
 The location of the element.  
  
### Return Value  
 The value of the element that is specified by the parameter or parameters.  
  
##  <a name="operator_at"></a>  array_view::operator[] Operator  
 Returns the element that is specified by the parameters.  
  
```  
typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator[] (
    int _I) const restrict(amp,cpu);

 
value_type& operator[] (
    const index<_Rank>& _Index) const restrict(amp,cpu);
```  
  
### Parameters  
 `_Index`  
 The index.  
  
 `_I`  
 The index.  
  
### Return Value  
 The value of the element at the index, or an `array_view` projected on the most-significant dimension.  
  
##  <a name="operator_eq"></a>  array_view::operator= Operator  
 Copies the contents of the specified [array_view](array-view-class.md) object to this one.  
  
```  
array_view& operator= (
    const array_view& _Other) restrict(amp,cpu);

 
array_view& operator= (
    const array_view<value_type, _Rank>& _Other) restrict(amp,cpu);
```  
  
### Parameters  
 `_Other`  
 The `array_view` object to copy from.  
  
### Return Value  
 A reference to this `array_view` object.  
  
##  <a name="rank"></a>  array_view::rank Constant  
 Stores the rank of the [array_view](array-view-class.md) object.  
  
```  
static const int rank = _Rank;  
```  
  
##  <a name="refresh"></a>  array_view::refresh Method  
 Notifies the [array_view](array-view-class.md) object that its bound memory has been modified outside the `array_view` interface. A call to this method renders all cached information stale.  
  
```  
void refresh() const restrict(cpu);
```  
## <a name="reinterpret_as"></a> array_view::reinterpret_as Method
Reinterprets the array_view through a one-dimensional array_view, which as an option can have a different value type than the source array_view.  
  
### Syntax  
  
```  
template <  
    typename _Value_type2  
>  
array_view< _Value_type2, _Rank> reinterpret_as() const restrict(amp,cpu);  
  
template <  
    typename _Value_type2  
>  
array_view<const _Value_type2, _Rank> reinterpret_as() const restrict(amp,cpu);  
```  
  
### Parameters  
 `_Value_type2`  
 The data type of the new `array_view` object.  
  
### Return Value  
 An `array_view` object or a const `array_view` object that is based on this `array_view`, with the element type converted from `T` to `_Value_type2`, and the rank reduced from *N* to 1.  
  
### Remarks  
 Sometimes it is convenient to view a multi-dimensional array as a linear, one-dimensional array, which may have a different value type than the source array. You can achieve this on an `array_view` by using this method.  
  
**Warning** Reinterpeting an array_view object by using a different value type is a potentially unsafe operation. This functionality should be used with care.  
  
 Here's an example:  
  
```cpp  
struct RGB { float r; float g; float b; };  
  
array<RGB,3>  a = ...;   
array_view<float,1> v = a.reinterpret_as<float>();   
  
assert(v.extent == 3*a.extent);  
```  
    
##  <a name="section"></a>  array_view::section Method  
 Returns a subsection of the [array_view](array-view-class.md) object that's at the specified origin and, optionally, that has the specified extent.  
  
```  
array_view section(
    const Concurrency::index<_Rank>& _Section_origin,  
    const Concurrency::extent<_Rank>& _Section_extent) const restrict(amp,cpu);

 
array_view section(
    const Concurrency::index<_Rank>& _Idx) const restrict(amp,cpu);

 
array_view section(
    const Concurrency::extent<_Rank>& _Ext) const restrict(amp,cpu);

 
array_view section(
    int _I0,  
    int _E0) const restrict(amp,cpu);

 
array_view section(
    int _I0,  
    int _I1,  
    int _E0,  
    int _E1) const restrict(amp,cpu);

 
array_view section(
    int _I0,  
    int _I1,  
    int _I2,  
    int _E0,  
    int _E1,  
    int _E2) const restrict(amp,cpu);
```  
  
### Parameters  
 `_E0`  
 The most significant component of the extent of this section.  
  
 `_E1`  
 The next-to-most-significant component of the extent of this section.  
  
 `_E2`  
 The least significant component of the extent of this section.  
  
 `_Ext`  
 The [extent](extent-class.md) object that specifies the extent of the section. The origin is 0.  
  
 `_Idx`  
 The [index](index-class.md) object that specifies the location of the origin. The subsection is the rest of the extent.  
  
 `_I0`  
 The most significant component of the origin of this section.  
  
 `_I1`  
 The next-to-most-significant component of the origin of this section.  
  
 `_I2`  
 The least significant component of the origin of this section.  
  
 `_Rank`  
 The rank of the section.  
  
 `_Section_extent`  
 The [extent](extent-class.md) object that specifies the extent of the section.  
  
 `_Section_origin`  
 The [index](index-class.md) object that specifies the location of the origin.  
  
### Return Value  
 A subsection of the `array_view` object that's at the specified origin and, optionally, that has the specified extent. When only the `index` object is specified, the subsection contains all elements in the associated extent that have indexes that are larger than the indexes of the elements in the `index` object.  
  
##  <a name="source_accelerator_view"></a>  array_view::source_accelerator_view Data Member  
 Gets the source accelerator_view that this array_view is associated with.  
  
```  
__declspec(property(get= get_source_accelerator_view)) accelerator_view source_accelerator_view;  
```  
  
##  <a name="synchronize"></a>  array_view::synchronize Method  
 Synchronizes any modifications made to the `array_view` object back to its source data.  
  
```  
void synchronize(access_type _Access_type = access_type_read) const restrict(cpu);

 
void synchronize() const restrict(cpu);
```  
  
### Parameters  
 `_Access_type`  
 The intended [access_type](concurrency-namespace-enums-amp.md#access_type) on the target [accelerator_view](accelerator-view-class.md). This parameter has a default value of `access_type_read`.  
  
##  <a name="synchronize_async"></a>  array_view::synchronize_async Method  
 Asynchronously synchronizes any modifications made to the [array_view](array-view-class.md) object back to its source data.  
  
```  
concurrency::completion_future synchronize_async(access_type _Access_type = access_type_read) const restrict(cpu);

 
concurrency::completion_future synchronize_async() const restrict(cpu);
```  
  
### Parameters  
 `_Access_type`  
 The intended [access_type](concurrency-namespace-enums-amp.md#access_type) on the target [accelerator_view](accelerator-view-class.md). This parameter has a default value of `access_type_read`.  
  
### Return Value  
 A future upon which to wait for the operation to complete.  
  
##  <a name="synchronize_to"></a>  array_view::synchronize_to Method  
 Synchronizes any modifications made to this array_view to the specified accelerator_view.  
  
```  
void synchronize_to(
    const accelerator_view& _Accl_view,  
    access_type _Access_type = access_type_read) const restrict(cpu);

 
void synchronize_to(
    const accelerator_view& _Accl_view) const restrict(cpu);
```  
  
### Parameters  
 `_Accl_view`  
 The target accelerator_view to synchronize to.  
  
 `_Access_type`  
 The desired access_type on the target accelerator_view. This parameter has a default value of access_type_read.  
  
##  <a name="synchronize_to_async"></a>  array_view::synchronize_to_async Method  
 Asynchronously synchronizes any modifications made to this array_view to the specified accelerator_view.  
  
```  
concurrency::completion_future synchronize_to_async(
    const accelerator_view& _Accl_view,  
    access_type _Access_type = access_type_read) const restrict(cpu);

 
concurrency::completion_future synchronize_to_async(
    const accelerator_view& _Accl_view) const restrict(cpu);
```  
  
### Parameters  
 `_Accl_view`  
 The target accelerator_view to synchronize to.  
  
 `_Access_type`  
 The desired access_type on the target accelerator_view. This parameter has a default value of access_type_read.  
  
### Return Value  
 A future upon which to wait for the operation to complete.  
  
##  <a name="value_type"></a>  array_view::value_type Data Member  
 The value type of the array_view and the bound array.  
  
```  
typedef typenamevalue_type value_type;  
```  
  
##  <a name="view_as"></a>  array_view::view_as Method  
 Reinterprets this `array_view` as an `array_view` of a different rank.  
  
```  
template <
    int _New_rank  
>  
array_view<value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank>& _View_extent) const restrict(amp,cpu);

 
template <
    int _New_rank  
>  
array_view<const value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank> _View_extent) const restrict(amp,cpu);
```  
  
### Parameters  
 `_New_rank`  
 The rank of the new `array_view` object.  
  
 `_View_extent`  
 The reshaping `extent`.  
  
 `value_type`  
 The data type of the elements in both the original [array](array-class.md) object and the returned `array_view` object.  
  
### Return Value  
 The [array_view](array-view-class.md) object that is constructed.  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
