---
title: "array_view Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::array_view"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "array_view class"
ms.assetid: 7e7ec9bc-05a2-4372-b05d-752b50006c5a
caps.latest.revision: 18
ms.author: "mithom"
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
    typename _Value_type,  
    int _Rank = 1  
>  
class array_view : public _Array_view_base< _Rank, sizeof(_Value_type)/sizeof(int)>;  
  
template <  
    typename _Value_type,  
    int _Rank  
>  
class array_view<const _Value_type, _Rank> : public _Array_view_base< _Rank, sizeof(_Value_type)/sizeof(int)>;  
```  
  
#### Parameters  
 `_Value_type`  
 The data type of the elements in the `array_view` object.  
  
 `_Rank`  
 The rank of the `array_view` object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[array_view::array_view Constructor](#array_view__array_view_constructor)|Initializes a new instance of the `array_view` class. There is no default constructor for `array<T,N>`. All constructors are restricted to run on the CPU only and cannot be executed on a Direct3D target.|  
|[array_view::~array_view Destructor](#array_view___dtorarray_view_destructor)|Destroys the `array_view` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[array_view::copy_to Method](#array_view__copy_to_method)|Copies the contents of the `array_view` object to the specified destination by calling `copy(*this, dest)`.|  
|[array_view::data Method](#array_view__data_method)|Returns a pointer to the raw data of the `array_view`.|  
|[array_view::discard_data Method](#array_view__discard_data_method)|Discards the current data underlying this view.|  
|[array_view::get_extent Method](#array_view__get_extent_method)|Returns the extent object of the array_view object.|  
|[array_view::get_ref Method](#array_view__get_ref_method)|Returns a reference to the indexed element.|  
|[array_view::get_source_accelerator_view Method](#array_view__get_source_accelerator_view_method)|Returns the [accelerator_view](../parallel/accelerator_view-class.md) where the data source of the `array_view` is located.|  
|[array_view::refresh Method](#array_view__refresh_method)|Notifies the `array_view` object that its bound memory has been modified outside the `array_view` interface. A call to this method renders all cached information stale.|  
|[array_view::reinterpret_as Method](#array_view__reinterpret_as_method)|Returns a one-dimensional array that contains all the elements in the `array_view` object.|  
|[array_view::section Method](#array_view__section_method)|Returns a subsection of the `array_view` object that's at the specified origin and, optionally, that has the specified extent.|  
|[array_view::synchronize Method](#array_view__synchronize_method)|Synchronizes any modifications made to the `array_view` object back to its source data.|  
|[array_view::synchronize_async Method](#array_view__synchronize_async_method)|Asynchronously synchronizes any modifications made to the [array_view](../parallel/array_view-class.md) object back to its source data.|  
|[array_view::synchronize_to Method](#array_view__synchronize_to_method)|Synchronizes any modifications made to the `array_view` object to the specified [accelerator_view](../parallel/accelerator_view-class.md).|  
|[array_view::synchronize_to_async Method](#array_view__synchronize_to_async_method)|Asynchronously synchronizes any modifications made to the `array_view` object to the specified [accelerator_view](../parallel/accelerator_view-class.md).|  
|[array_view::view_as Method](#array_view__view_as_method)|Produces an `array_view` object of a different rank using this `array_view` object’s data.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[array_view::operator() Operator](#array_view__operator___operator)|Returns the value of the element that is specified by the parameter or parameters.|  
|[array_view::operator[] Operator](#array_view__operator_at_operator)|Returns the element that is specified by the parameters.|  
|[array_view::operator= Operator](#array_view__operator_eq_operator)|Copies the contents of the specified `array_view` object into this one.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[array_view::rank Constant](#array_view__rank_constant)|Stores the rank of the `array_view` object.|  
  
### Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[array_view::extent Data Member](#array_view__extent_data_member)|Gets the `extent` object that defines the shape of the `array_view` object.|  
|[array_view::source_accelerator_view Data Member](#array_view__source_accelerator_view_data_member)|Gets the [accelerator_view](../parallel/accelerator_view-class.md) where the data source of the `array_view` is located|  
|[array_view::value_type Data Member](#array_view__value_type_data_member)|The value type of the `array_view` and the bound array.|  
  
## Remarks  
 The `array_view` class represents a view into the data that is contained in an "array" object or a subsection of an `array` object.  
  
 You can access the `array_view` object where the source data is located (locally) or on a different accelerator or a coherence domain (remotely). When you access the object remotely, views are copied and cached as necessary. Except for the effects of automatic caching, `array_view` objects have a performance profile similar to that of `array` objects. There is a small performance penalty when you access the data through views.  
  
 There are three remote usage scenarios:  
  
-   A view to a system memory pointer is passed by means of a [parallel_for_each](concurrency_namespace__c++_amp__Functions) call to an accelerator and accessed on the accelerator.  
  
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
  
##  <a name="array_view___dtorarray_view_destructor"></a>  array_view::~array_view Destructor  
 Destroys the [array_view](../parallel/array_view-class.md) object.  
  
```  
~array_view()restrict(amp,cpu);  
```  
  
##  <a name="array_view__array_view_constructor"></a>  array_view::array_view Constructor  
 Initializes a new instance of the [array_view](../parallel/array_view-class.md) class.  
  
```  
array_view(  
    array<_Value_type, _Rank>& _Src )restrict(amp,cpu);  
  
array_view(  
    const array_view& _Other )restrict(amp,cpu);  
  
explicit array_view(  
    const Concurrency::extent<_Rank>& _Extent  
) restrict(cpu);  
  
template <  
    typename _Container  
>  
array_view(  
    const Concurrency::extent<_Rank>& _Extent,  
    _Container& _Src ) restrict(cpu);  
  
array_view(  
    const Concurrency::extent<_Rank>& _Extent,  
    _Value_type * _Src )restrict(amp,cpu);  
  
explicit array_view(  
    int _E0 ) restrict(cpu);  
  
template <  
    typename _Container  
>  
explicit array_view(  
    _Container& _Src,  
    typename std::enable_if<details::_Is_container<_Container>::type::value, void **>::type = 0  
) restrict(cpu);  
  
template <  
    typename _Container  
>  
explicit array_view(  
    int _E0,  
    _Container& _Src ) restrict(cpu);  
  
explicit array_view(  
    int _E0,  
    int _E1 ) __CPU_ONLY;  
  
template <  
    typename _Container  
>  
explicit array_view(  
    int _E0,  
    int _E1,  
    _Container& _Src ) restrict(cpu);  
  
explicit array_view(  
    int _E0,  
    int _E1,  
    int _E2 ) __CPU_ONLY;  
  
template <  
    typename _Container  
>  
explicit array_view(  
    int _E0,  
    int _E1,  
    int _E2,  
    _Container& _Src );  
  
explicit array_view(  
    int _E0,  
    _In_ _Value_type * _Src )restrict(amp,cpu);  
  
template <  
    typename _Arr_type,  
    int _Size  
>  
explicit array_view(  
    _In_ _Arr_type (& _Src) [_Size]  
) restrict(amp,cpu);  
  
explicit array_view(  
    int _E0,  
    int _E1,  
    _In_ _Value_type * _Src )restrict(amp,cpu);  
  
explicit array_view(  
    int _E0,  
    int _E1,  
    int _E2,  
    _In_ _Value_type * _Src )restrict(amp,cpu);  
  
array_view(  
    const array<_Value_type, _Rank>& _Src )restrict(amp,cpu);  
  
array_view(  
    const array_view<_Value_type, _Rank>& _Src )restrict(amp,cpu);  
  
array_view(  
    const array_view<const _Value_type, _Rank>& _Src )restrict(amp,cpu);  
  
template <  
    typename _Container  
>  
array_view(  
    const Concurrency::extent<_Rank>& _Extent,  
    const _Container& _Src ) restrict(cpu);  
  
template <  
    typename _Container  
>  
explicit array_view(  
    const _Container& _Src,  
    typename std::enable_if<details::_Is_container<_Container>::type::value, void **>::type = 0  
) restrict(cpu);  
  
array_view(  
    const Concurrency::extent<_Rank>& _Extent,  
    const _Value_type * _Src )restrict(amp,cpu);  
  
template <  
    typename _Arr_type,  
    int _Size  
>  
explicit array_view(  
    const _In_ _Arr_type (& _Src) [_Size]  
) restrict(amp,cpu);  
  
template <  
    typename _Container  
>  
array_view(  
    int _E0,  
    const _Container& _Src );  
  
template <  
    typename _Container  
>  
array_view(  
    int _E0,  
    int _E1,  
    const _Container& _Src );  
  
template <  
    typename _Container  
>  
array_view(  
    int _E0,  
    int _E1,  
    int _E2,  
    const _Container& _Src );  
  
array_view(  
    int _E0,  
    const _Value_type * _Src )restrict(amp,cpu);  
  
array_view(  
    int _E0,  
    int _E1,  
    const _Value_type * _Src ) restrict(amp,cpu);  
  
array_view(  
    int _E0,  
    int _E1,  
    int _E2,  
    const _Value_type * _Src ) restrict(amp,cpu);  
  
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
  
##  <a name="array_view__copy_to_method"></a>  array_view::copy_to Method  
 Copies the contents of the [array_view](../parallel/array_view-class.md) object to the specified destination object by calling `copy(*this, dest)`.  
  
```  
void copy_to(  
    array<_Value_type, _Rank>& _Dest ) const;  
  
void copy_to(  
    array_view<_Value_type, _Rank>& _Dest ) const;  
```  
  
### Parameters  
 `_Dest`  
 The object to copy to.  
  
##  <a name="array_view__data_method"></a>  array_view::data Method  
 Returns a pointer to the raw data of the [array_view](../parallel/array_view-class.md).  
  
```  
_Value_type* data() const restrict(amp,cpu);  
  
const _Value_type* data() const restrict(amp,cpu);  
```  
  
### Return Value  
 A pointer to the raw data of the `array_view`.  
  
##  <a name="array_view__discard_data_method"></a>  array_view::discard_data Method  
 Discards the current data underlying this view. This is an optimization hint to the runtime used to avoid copying the current contents of the view to a target `accelerator_view` that it is accessed on, and its use is recommended if the existing content is not needed. This method is a no-op when used in a restrict(amp) context  
  
```  
void discard_data() const restrict(cpu);  
```  
  
##  <a name="array_view__extent_data_member"></a>  array_view::extent Data Member  
 Gets the `extent` object that defines the shape of the `array_view` object.  
  
```  
__declspec(property(get= get_extent)) Concurrency::extent<_Rank> extent;  
```  
  
##  <a name="array_view__get_extent_method"></a>  array_view::get_extent Method  
 Returns the [extent](../parallel/extent-class--c---amp-.md) object of the [array_view](../parallel/array_view-class.md) object.  
  
```  
Concurrency::extent<_Rank> get_extent() const restrict(cpu, amp);  
```  
  
### Return Value  
 The `extent` object of the `array_view` object  
  
##  <a name="array_view__get_ref_method"></a>  array_view::get_ref Method  
 Get a reference to the element indexed by _Index. Unlike the other indexing operators for accessing the array_view on the CPU, this method does not implicitly synchronize this array_view's contents to the CPU. After accessing the array_view on a remote location or performing a copy operation involving this array_view users are responsible to explicitly synchronize the array_view to the CPU before calling this method. Failure to do so results in undefined behavior.  
  
```  
value_type& get_ref(  
    const index<_Rank>& _Index ) const restrict(amp, cpu);  
```  
  
### Parameters  
 `_Index`  
 The index.  
  
### Return Value  
 Reference to the element indexed by _Index  
  
##  <a name="array_view__get_source_accelerator_view_method"></a>  array_view::get_source_accelerator_view Method  
 Returns the accelerator_view where the data source of the array_view is located. If the array_view does not have a data source, this API throws a runtime_exception  
  
```  
accelerator_view get_source_accelerator_view() const;  
```  
  
### Return Value  
  
##  <a name="array_view__operator___operator"></a>  array_view::operator() Operator  
 Returns the value of the element that is specified by the parameter or parameters.  
  
```  
value_type&  operator() (  
    const index<_Rank>& _Index ) const restrict(amp,cpu);  
  
typename details::_Projection_result_type<_Value_type,_Rank>::_Result_type operator() (  
    int _I ) const restrict(amp,cpu);  
  
value_type&  operator() (  
    int _I0,  
    int _I1 ) const restrict(amp,cpu);  
  
value_type&  operator() (  
    int _I0,  
    int _I1,  
    int _I2 ) const restrict(amp,cpu);  
  
typename details::_Projection_result_type<_Value_type,_Rank>::_Const_result_type operator() (  
    int _I ) const restrict(amp,cpu);  
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
  
##  <a name="array_view__operator_at_operator"></a>  array_view::operator[] Operator  
 Returns the element that is specified by the parameters.  
  
```  
typename details::_Projection_result_type<_Value_type,_Rank>::_Const_result_type operator[] (  
    int _I ) const restrict(amp,cpu);  
  
value_type&  operator[] (  
    const index<_Rank>& _Index ) const restrict(amp,cpu);  
```  
  
### Parameters  
 `_Index`  
 The index.  
  
 `_I`  
 The index.  
  
### Return Value  
 The value of the element at the index, or an `array_view` projected on the most-significant dimension.  
  
##  <a name="array_view__operator_eq_operator"></a>  array_view::operator= Operator  
 Copies the contents of the specified [array_view](../parallel/array_view-class.md) object to this one.  
  
```  
array_view&  operator= (  
    const array_view& _Other ) restrict(amp,cpu);  
  
array_view&  operator= (  
    const array_view<_Value_type, _Rank>& _Other ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Other`  
 The `array_view` object to copy from.  
  
### Return Value  
 A reference to this `array_view` object.  
  
##  <a name="array_view__rank_constant"></a>  array_view::rank Constant  
 Stores the rank of the [array_view](../parallel/array_view-class.md) object.  
  
```  
static const int rank = _Rank;  
```  
  
##  <a name="array_view__refresh_method"></a>  array_view::refresh Method  
 Notifies the [array_view](../parallel/array_view-class.md) object that its bound memory has been modified outside the `array_view` interface. A call to this method renders all cached information stale.  
  
```  
void refresh() const restrict(cpu);  
```  
  
##  <a name="array_view__section_method"></a>  array_view::section Method  
 Returns a subsection of the [array_view](../parallel/array_view-class.md) object that's at the specified origin and, optionally, that has the specified extent.  
  
```  
array_view section(  
    const Concurrency::index<_Rank>& _Section_origin,  
    const Concurrency::extent<_Rank>& _Section_extent ) const restrict(amp,cpu);  
  
array_view section(  
    const Concurrency::index<_Rank>& _Idx ) const restrict(amp,cpu);  
  
array_view section(  
    const Concurrency::extent<_Rank>& _Ext ) const restrict(amp,cpu);  
  
array_view section(  
    int _I0,  
    int _E0 ) const restrict(amp,cpu);  
  
array_view section(  
    int _I0,  
    int _I1,  
    int _E0,  
    int _E1 ) const restrict(amp,cpu);  
  
array_view section(  
    int _I0,  
    int _I1,  
    int _I2,  
    int _E0,  
    int _E1,  
    int _E2 ) const restrict(amp,cpu);  
```  
  
### Parameters  
 `_E0`  
 The most significant component of the extent of this section.  
  
 `_E1`  
 The next-to-most-significant component of the extent of this section.  
  
 `_E2`  
 The least significant component of the extent of this section.  
  
 `_Ext`  
 The [extent](../parallel/extent-class--c---amp-.md) object that specifies the extent of the section. The origin is 0.  
  
 `_Idx`  
 The [index](../parallel/index-class.md) object that specifies the location of the origin. The subsection is the rest of the extent.  
  
 `_I0`  
 The most significant component of the origin of this section.  
  
 `_I1`  
 The next-to-most-significant component of the origin of this section.  
  
 `_I2`  
 The least significant component of the origin of this section.  
  
 `_Rank`  
 The rank of the section.  
  
 `_Section_extent`  
 The [extent](../parallel/extent-class--c---amp-.md) object that specifies the extent of the section.  
  
 `_Section_origin`  
 The [index](../parallel/index-class.md) object that specifies the location of the origin.  
  
### Return Value  
 A subsection of the `array_view` object that's at the specified origin and, optionally, that has the specified extent. When only the `index` object is specified, the subsection contains all elements in the associated extent that have indexes that are larger than the indexes of the elements in the `index` object.  
  
##  <a name="array_view__source_accelerator_view_data_member"></a>  array_view::source_accelerator_view Data Member  
 Gets the source accelerator_view that this array_view is associated with.  
  
```  
__declspec(property(get= get_source_accelerator_view)) accelerator_view source_accelerator_view;  
```  
  
##  <a name="array_view__synchronize_method"></a>  array_view::synchronize Method  
 Synchronizes any modifications made to the `array_view` object back to its source data.  
  
```  
void synchronize(  
    access_type _Access_type = access_type_read  
) const restrict(cpu);  
  
void synchronize() const restrict(cpu);  
```  
  
### Parameters  
 `_Access_type`  
 The intended [access_type](concurrency_namespace__c++_amp__Enumerations) on the target [accelerator_view](../parallel/accelerator_view-class.md). This parameter has a default value of `access_type_read`.  
  
##  <a name="array_view__synchronize_async_method"></a>  array_view::synchronize_async Method  
 Asynchronously synchronizes any modifications made to the [array_view](../parallel/array_view-class.md) object back to its source data.  
  
```  
concurrency::completion_future synchronize_async(  
    access_type _Access_type = access_type_read  
) const restrict(cpu);  
  
concurrency::completion_future synchronize_async() const restrict(cpu);  
```  
  
### Parameters  
 `_Access_type`  
 The intended [access_type](concurrency_namespace__c++_amp__Enumerations) on the target [accelerator_view](../parallel/accelerator_view-class.md). This parameter has a default value of `access_type_read`.  
  
### Return Value  
 A future upon which to wait for the operation to complete.  
  
##  <a name="array_view__synchronize_to_method"></a>  array_view::synchronize_to Method  
 Synchronizes any modifications made to this array_view to the specified accelerator_view.  
  
```  
void synchronize_to(  
    const accelerator_view& _Accl_view,  
    access_type _Access_type = access_type_read  
) const restrict(cpu);  
  
void synchronize_to(  
    const accelerator_view& _Accl_view ) const restrict(cpu);  
```  
  
### Parameters  
 `_Accl_view`  
 The target accelerator_view to synchronize to.  
  
 `_Access_type`  
 The desired access_type on the target accelerator_view. This parameter has a default value of access_type_read.  
  
##  <a name="array_view__synchronize_to_async_method"></a>  array_view::synchronize_to_async Method  
 Asynchronously synchronizes any modifications made to this array_view to the specified accelerator_view.  
  
```  
concurrency::completion_future synchronize_to_async(  
    const accelerator_view& _Accl_view,  
    access_type _Access_type = access_type_read  
) const restrict(cpu);  
  
concurrency::completion_future synchronize_to_async(  
    const accelerator_view& _Accl_view ) const restrict(cpu);  
```  
  
### Parameters  
 `_Accl_view`  
 The target accelerator_view to synchronize to.  
  
 `_Access_type`  
 The desired access_type on the target accelerator_view. This parameter has a default value of access_type_read.  
  
### Return Value  
 A future upon which to wait for the operation to complete.  
  
##  <a name="array_view__value_type_data_member"></a>  array_view::value_type Data Member  
 The value type of the array_view and the bound array.  
  
```  
typedef typename_Value_type value_type;  
```  
  
##  <a name="array_view__view_as_method"></a>  array_view::view_as Method  
 Reinterprets this `array_view` as an `array_view` of a different rank.  
  
```  
template <  
    int _New_rank  
>  
array_view<_Value_type,_New_rank> view_as(  
    const Concurrency::extent< _New_rank>& _View_extent ) const restrict(amp,cpu);  
  
template <  
    int _New_rank  
>  
array_view<const _Value_type,_New_rank> view_as(  
    const Concurrency::extent< _New_rank> _View_extent ) const restrict(amp,cpu);  
```  
  
### Parameters  
 `_New_rank`  
 The rank of the new `array_view` object.  
  
 `_View_extent`  
 The reshaping `extent`.  
  
 `_Value_type`  
 The data type of the elements in both the original "array" object and the returned `array_view` object.  
  
### Return Value  
 The [array_view](../parallel/array_view-class.md) object that is constructed.  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../parallel/concurrency-namespace--c---amp-.md)