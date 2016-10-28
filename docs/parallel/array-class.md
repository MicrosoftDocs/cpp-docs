---
title: "array Class"
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
  - "amp/Concurrency::array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "array class"
ms.assetid: 0832b6c1-40f0-421d-9104-6b1baa0c63a7
caps.latest.revision: 28
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
# array Class
Represents a data container used to move data to an accelerator.  
  
## Syntax  
  
```  
template <  
    typename _Value_type,  
    int _Rank  
>  
friend class array;  
```  
  
#### Parameters  
 `_Value_type`  
 The element type of the data.  
  
 `_Rank`  
 The rank of the array.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[array::array Constructor](#array__array_constructor)|Initializes a new instance of the `array` class.|  
|[array::~array Destructor](#array___dtorarray_destructor)|Destroys the `array` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[array::copy_to Method](#array__copy_to_method)|Copies the contents of the array to another array.|  
|[array::data Method](#array__data_method)|Returns a pointer to the raw data of the array.|  
|[array::get_accelerator_view Method](#array__get_accelerator_view_method)|Returns the [accelerator_view](../parallel/accelerator_view-class.md) object that represents the location where the array is allocated. This property can be accessed only on the CPU.|  
|[array::get_associated_accelerator_view Method](#array__get_associated_accelerator_view_method)|Gets the second [accelerator_view](../parallel/accelerator_view-class.md) object that is passed as a parameter when a staging constructor is called to instantiate the "array" object.|  
|[array::get_cpu_access_type Method](#array__get_cpu_access_type_method)|Returns the [access_type](concurrency_namespace__c++_amp__Enumerations) of the array. This method can be accessed only on the CPU.|  
|[array::get_extent Method](#array__get_extent_method)|Returns the [extent](../parallel/extent-class--c---amp-.md) object of the array.|  
|[array::reinterpret_as Method](#array__reinterpret_as_method)|Returns a one-dimensional array that contains all the elements in the `array` object.|  
|[array::section Method](#array__section_method)|Returns a subsection of the "array" object that is at the specified origin and, optionally, that has the specified extent.|  
|[array::view_as Method](#array__view_as_method)|Returns an [array_view](../parallel/array_view-class.md) object that is constructed from the `array` object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[array::operator std::vector&lt;_Value_type&gt; Operator](#array__operator_std__vector_lt__value_type_gt__operator)|Uses `copy(*this, vector)` to implicitly convert the array to a std::"vector" object.|  
|[array::operator() Operator](#array__operator___operator)|Returns the element value that is specified by the parameters.|  
|[array::operator[] Operator](#array__operator_at_operator)|Returns the element that is at the specified index.|  
|[array::operator= Operator](#array__operator_eq_operator)|Copies the contents of the specified `array` object into this one.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[array::rank Constant](#array__rank_constant)|Stores the rank of the array.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[array::accelerator_view Data Member](#array__accelerator_view_data_member)|Gets the [accelerator_view](../parallel/accelerator_view-class.md) object that represents the location where the array is allocated. This property can be accessed only on the CPU.|  
|[array::associated_accelerator_view Data Member](#array__associated_accelerator_view_data_member)|Gets the second [accelerator_view](../parallel/accelerator_view-class.md) object that is passed as a parameter when a staging constructor is called to instantiate the "array" object.|  
|[array::cpu_access_type Data Member](#array__cpu_access_type_data_member)|Gets the [access_type](concurrency_namespace__c++_amp__Enumerations) that represents how the CPU can access the storage of the array.|  
|[array::extent Data Member](#array__extent_data_member)|Gets the extent that defines the shape of the array.|  
  
## Remarks  
 The type `array<T,N>` represents a dense and regular (not jagged)                 *N*-dimensional array that is located in a specific location, such as an accelerator or the CPU. The data type of the elements in the array is `T`, which must be of a type that is compatible with the target accelerator. Although the rank, `N`, (of the array is determined statically and is part of the type, the extent of the array is determined by the runtime and is expressed by using class `extent<N>`.  
  
 An array can have any number of dimensions, although some functionality is specialized for `array` objects with rank one, two, and three. If you omit the dimension argument, the default is 1.  
  
 Array data is laid out contiguously in memory. Elements that differ by one in the least significant dimension are adjacent in memory.  
  
 Arrays are logically considered to be value types, because when an array is copied to another array, a deep copy is performed. Two arrays never point to the same data.  
  
 The `array<T,N>` type is used in several scenarios:  
  
-   As a data container that can be used in computations on an accelerator.  
  
-   As a data container to hold memory on the host CPU (that can be used to copy to and from other arrays).  
  
-   As a staging object to act as a fast intermediary in host-to-device copies.  
  
## Inheritance Hierarchy  
 `array`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
##  <a name="array___dtorarray_destructor"></a>  array::~array Destructor  
 Destroys the `array` object.  
  
```  
~array() restrict(cpu);  
```  
  
##  <a name="array__accelerator_view_data_member"></a>  array::accelerator_view Data Member  
 Gets the [accelerator_view](../parallel/accelerator_view-class.md) object that represents the location where the array is allocated. This property can be accessed only on the CPU.  
  
```  
__declspec(property(get= get_accelerator_view)) Concurrency::accelerator_view accelerator_view;  
```  
  
##  <a name="array__array_constructor"></a>  array::array Constructor  
 Initializes a new instance of the "array class". There is no default constructor for `array<T,N>`. All constructors are run on the CPU only. They cannot be executed on a Direct3D target.  
  
```  
explicit array(  
    const Concurrency::extent<_Rank> & _Extent ) restrict(cpu);  
  
explicit array(  
    int _E0 ) restrict(cpu);  
  
explicit array(  
    int _E0,  
    int _E1 ) restrict(cpu);  
  
explicit array(  
    int _E0,  
    int _E1,  
    int _E2 ) restrict(cpu);  
  
array(  
    const Concurrency::extent<_Rank>& _Extent,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
array(  
    int _E0,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
array(  
    int _E0,  
    int _E1,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
array(  
    int _E0,  
    int _E1,  
    int _E2,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
array(  
    const Concurrency::extent<_Rank>& _Extent,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
array(  
    int _E0,  
    accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
array(  
    int _E0,  
    int _E1,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
array(  
    int _E0,  
    int _E1,  
    int _E2,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first, _InputIterator _Src_last ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0, _InputIterator _Src_first, _InputIterator _Src_last ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0, _InputIterator _Src_first ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1, _InputIterator _Src_first ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
template <  
    typename _InputIterator  
>  
array(  
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av ) restrict(cpu);  
  
explicit array(  
    const array_view<const _Value_type, _Rank>& _Src ) restrict(cpu);  
  
array(  
    const array_view<const _Value_type, _Rank>& _Src,  
    accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto  
) restrict(cpu);  
  
array(  
    const array_view<const _Value_type, _Rank>& _Src,  
    accelerator_view _Av,  
    accelerator_view _Associated_Av ) restrict(cpu);  
  
array(  
    const array& _Other ) restrict(cpu);  
  
array(  
    array && _Other ) restrict(cpu);  
```  
  
### Parameters  
 `_Associated_Av`  
 An accelerator_view which specifies the preferred target location of the array.  
  
 `_Av`  
 An [accelerator_view](../parallel/accelerator_view-class.md) object that specifies the location of the array.  
  
 `_Cpu_access_type`  
 The desired [access_type](concurrency_namespace__c++_amp__Enumerations) for the array on the CPU. This parameter has a default value of `access_type_auto` leaving the CPU `access_type` determination to the runtime. The actual CPU `access_type` for the array can be queried using the `get_cpu_access_type` method.  
  
 `_Extent`  
 The extent in each dimension of the array.  
  
 `_E0`  
 The most significant component of the extent of this section.  
  
 `_E1`  
 The next-to-most-significant component of the extent of this section.  
  
 `_E2`  
 The least significant component of the extent of this section.  
  
 `_InputIterator`  
 The type of the input interator.  
  
 `_Src`  
 To object to copy.  
  
 `_Src_first`  
 A beginning iterator into the source container.  
  
 `_Src_last`  
 An ending iterator into the source container.  
  
 `_Other`  
 Other data source.  
  
 `_Rank`  
 The rank of the section.  
  
 `_Value_type`  
 The data type of the elements that are copied.  
  
##  <a name="array__associated_accelerator_view_data_member"></a>  array::associated_accelerator_view Data Member  
 Gets the second [accelerator_view](../parallel/accelerator_view-class.md) object that is passed as a parameter when a staging constructor is called to instantiate the "array" object.  
  
```  
__declspec(property(get= get_associated_accelerator_view)) Concurrency::accelerator_view associated_accelerator_view;  
```  
  
##  <a name="array__copy_to_method"></a>  array::copy_to Method  
 Copies the contents of the "array" to another `array`.  
  
```  
void copy_to(  
    array<_Value_type, _Rank>& _Dest ) const ;  
  
void copy_to(  
    array_view<_Value_type, _Rank>& _Dest ) const ;  
```  
  
### Parameters  
 `_Dest`  
 The [array_view](../parallel/array_view-class.md) object to copy to.  
  
##  <a name="array__cpu_access_type_data_member"></a>  array::cpu_access_type Data Member  
 Gets the CPU access_type allowed for this array.  
  
```  
__declspec(property(get= get_cpu_access_type)) access_type cpu_access_type;  
```  
  
##  <a name="array__data_method"></a>  array::data Method  
 Returns a pointer to the raw data of the "array".  
  
```  
_Value_type* data() restrict(amp,cpu);  
  
const _Value_type* data() const restrict(amp,cpu);  
```  
  
### Return Value  
 A pointer to the raw data of the array.  
  
##  <a name="array__extent_data_member"></a>  array::extent Data Member  
 Gets the [extent](../parallel/extent-class--c---amp-.md) object that defines the shape of the "array".  
  
```  
__declspec(property(get= get_extent)) Concurrency::extent<_Rank> extent;  
```  
  
##  <a name="array__get_accelerator_view_method"></a>  array::get_accelerator_view Method  
 Returns the [accelerator_view](../parallel/accelerator_view-class.md) object that represents the location where the "array" object is allocated. This property can be accessed only on the CPU.  
  
```  
Concurrency::accelerator_view get_accelerator_view() const;  
```  
  
### Return Value  
 The `accelerator_view` object that represents the location where the "array" object is allocated.  
  
##  <a name="array__get_associated_accelerator_view_method"></a>  array::get_associated_accelerator_view Method  
 Gets the second [accelerator_view](../parallel/accelerator_view-class.md) object that is passed as a parameter when a staging constructor is called to instantiate the "array" object.  
  
```  
Concurrency::accelerator_view get_associated_accelerator_view() const ;  
```  
  
### Return Value  
 The second [accelerator_view](../parallel/accelerator_view-class.md) object passed to the staging constructor.  
  
##  <a name="array__get_cpu_access_type_method"></a>  array::get_cpu_access_type Method  
 Returns the CPU access_type that's allowed for this array.  
  
```  
access_type get_cpu_access_type() const restrict(cpu);  
```  
  
### Return Value  
  
##  <a name="array__get_extent_method"></a>  array::get_extent Method  
 Returns the [extent](../parallel/extent-class--c---amp-.md) object of the "array".  
  
```  
Concurrency::extent<_Rank> get_extent() const restrict(amp,cpu);  
```  
  
### Return Value  
 The `extent` object of the "array".  
  
##  <a name="array__operator_std__vector_lt__value_type_gt__operator"></a>  array::operator std::vector&lt;_Value_type&gt; Operator  
 Uses `copy(*this, vector)` to implicitly convert the array to a std::vector object.  
  
```  
operator std::vector< _Value_type>() const restrict(cpu);  
```  
  
### Parameters  
 `_Value_type`  
 The data type of the elements of the vector.  
  
### Return Value  
 An object of type `vector<T>` that contains a copy of the data that is contained in the array.  
  
##  <a name="array__operator___operator"></a>  array::operator() Operator  
 Returns the element value that is specified by the parameters.  
  
```  
value_type&  operator() (const index<_Rank>& _Index) restrict(amp,cpu);  
  
const value_type&  operator() (const index<_Rank>& _Index) const restrict(amp,cpu);  
  
value_type&  operator() (int _I0, int _I1) restrict(amp,cpu);  
  
const value_type&  operator() (int _I0, int _I1) const restrict(amp,cpu);  
  
value_type&  operator() (int _I0, int _I1, int _I2) restrict(amp,cpu);  
  
const value_type&  operator() (int _I0, int _I1, int _I2) const restrict(amp,cpu);  
  
typename details::_Projection_result_type<_Value_type,_Rank>::_Result_type operator()(int _I) restrict(amp,cpu);  
  
typename details::_Projection_result_type<_Value_type,_Rank>::_Const_result_type operator()(int _I) const restrict(amp,cpu);  
```  
  
### Parameters  
 `_Index`  
 The location of the element.  
  
 `_I0`  
 The most significant component of the origin of this section.  
  
 `_I1`  
 The next-to-most-significant component of the origin of this section.  
  
 `_I2`  
 The least significant component of the origin of this section.  
  
 `_I`  
 The location of the element.  
  
### Return Value  
 The element value specified by the parameters.  
  
##  <a name="array__operator_at_operator"></a>  array::operator[] Operator  
 Returns the element that is at the specified index.  
  
```  
value_type&  operator[] (  
    const index<_Rank>& _Index ) restrict(amp,cpu);  
  
const value_type&  operator[] (  
    const index<_Rank>& _Index ) const restrict(amp,cpu);  
  
typename details::_Projection_result_type<_Value_type,_Rank>::_Result_type operator[](int _I) restrict(amp,cpu);  
  
typename details::_Projection_result_type<_Value_type,_Rank>::_Const_result_type operator[](int _I) const restrict(amp,cpu);  
```  
  
### Parameters  
 `_Index`  
 The index.  
  
 `_I`  
 The index.  
  
### Return Value  
 The element that is at the specified index.  
  
##  <a name="array__operator_eq_operator"></a>  array::operator= Operator  
 Copies the contents of the specified "array" object.  
  
```  
array &  operator= (  
    const array & _Other ) restrict(cpu);  
  
array &  operator= (  
    array && _Other ) restrict(cpu);  
  
array&  operator= (  
    const array_view<const _Value_type, _Rank>& _Src ) restrict(cpu);  
```  
  
### Parameters  
 `_Other`  
 The `array` object to copy from.  
  
 `_Src`  
 The `array` object to copy from.  
  
### Return Value  
 A reference to this `array` object.  
  
##  <a name="array__rank_constant"></a>  array::rank Constant  
 Stores the rank of the "array".  
  
```  
static const int rank = _Rank;  
```  
  
##  <a name="array__section_method"></a>  array::section Method  
 Returns a subsection of the "array" object that is at the specified origin and, optionally, that has the specified extent.  
  
```  
array_view<_Value_type,_Rank> section(  
    const Concurrency::index<_Rank>& _Section_origin,  
    const Concurrency::extent<_Rank>& _Section_extent ) restrict(amp,cpu);  
  
array_view<const _Value_type,_Rank> section(  
    const Concurrency::index<_Rank>& _Section_origin,  
    const Concurrency::extent<_Rank>& _Section_extent ) const restrict(amp,cpu);  
  
array_view<_Value_type,_Rank> section(  
    const Concurrency::extent<_Rank>& _Ext ) restrict(amp,cpu);  
  
array_view<const _Value_type,_Rank> section(  
    const Concurrency::extent<_Rank>& _Ext ) const restrict(amp,cpu);  
  
array_view<_Value_type,_Rank> section(  
    const index<_Rank>& _Idx ) restrict(amp,cpu);  
  
array_view<const _Value_type,_Rank> section(  
    const index<_Rank>& _Idx ) const restrict(amp,cpu);  
  
array_view<_Value_type,1> section(  
    int _I0,  
    int _E0 ) restrict(amp,cpu);  
  
array_view<const _Value_type,1> section(  
    int _I0,  
    int _E0 ) const restrict(amp,cpu);  
  
array_view<_Value_type,2> section(  
    int _I0,  
    int _I1,  
    int _E0,  
    int _E1 ) restrict(amp,cpu);  
  
array_view<const _Value_type,2> section(  
    int _I0,  
    int _I1,  
    int _E0,  
    int _E1 ) const restrict(amp,cpu);  
  
array_view<_Value_type,3> section(  
    int _I0,  
    int _I1,  
    int _I2,  
    int _E0,  
    int _E1,  
    int _E2 ) restrict(amp,cpu);  
  
array_view<const _Value_type,3> section(  
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
  
 `_Value_type`  
 The data type of the elements that are copied.  
  
### Return Value  
 Returns a subsection of the `array` object that is at the specified origin and, optionally, that has the specified extent. When only the `index` object is specified, the subsection contains all elements in the associated grid that have indexes that are larger than the indexes of the elements in the `index` object.  
  
##  <a name="array__view_as_method"></a>  array::view_as Method  
 Reinterprets this array as an [array_view](../parallel/array_view-class.md) of a different rank.  
  
```  
template <  
    int _New_rank  
>  
array_view<_Value_type,_New_rank> view_as(  
    const Concurrency::extent< _New_rank>& _View_extent ) restrict(amp,cpu);  
  
template <  
    int _New_rank  
>  
array_view<const _Value_type,_New_rank> view_as(  
    const Concurrency::extent< _New_rank>& _View_extent ) const restrict(amp,cpu);  
```  
  
### Parameters  
 `_New_rank`  
 The rank of the `extent` object passed as a parameter.  
  
 `_View_extent`  
 The extent that is used to construct the new [array_view](../parallel/array_view-class.md) object.  
  
 `_Value_type`  
 The data type of the elements in both the original "array" object and the returned `array_view` object.  
  
### Return Value  
 The [array_view](../parallel/array_view-class.md) object that is constructed.  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../parallel/concurrency-namespace--c---amp-.md)