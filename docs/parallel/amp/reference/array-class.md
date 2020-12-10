---
description: "Learn more about: array Class"
title: "array Class"
ms.date: "11/04/2016"
f1_keywords: ["array", "AMP/array", "AMP/Concurrency::array::array", "AMP/Concurrency::array::copy_to", "AMP/Concurrency::array::data", "AMP/Concurrency::array::get_accelerator_view", "AMP/Concurrency::array::get_associated_accelerator_view", "AMP/Concurrency::array::get_cpu_access_type", "AMP/Concurrency::array::get_extent", "AMP/Concurrency::array::reinterpret_as", "AMP/Concurrency::array::section", "AMP/Concurrency::array::view_as", "AMP/Concurrency::array::rank", "AMP/Concurrency::array::accelerator_view", "AMP/Concurrency::array::associated_accelerator_view", "AMP/Concurrency::array::cpu_access_type", "AMP/Concurrency::array::extent"]
helpviewer_keywords: ["array class"]
ms.assetid: 0832b6c1-40f0-421d-9104-6b1baa0c63a7
---
# array Class

Represents a data container used to move data to an accelerator.

## Syntax

```cpp
template <typename value_type, int _Rank>
friend class array;
```

### Parameters

*value_type*<br/>
The element type of the data.

*_Rank*<br/>
The rank of the array.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[array Constructor](#ctor)|Initializes a new instance of the `array` class.|
|[~array Destructor](#dtor)|Destroys the `array` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[copy_to](#copy_to)|Copies the contents of the array to another array.|
|[data](#data)|Returns a pointer to the raw data of the array.|
|[get_accelerator_view](#get_accelerator_view)|Returns the [accelerator_view](accelerator-view-class.md) object that represents the location where the array is allocated. This property can be accessed only on the CPU.|
|[get_associated_accelerator_view](#get_associated_accelerator_view)|Gets the second [accelerator_view](accelerator-view-class.md) object that is passed as a parameter when a staging constructor is called to instantiate the `array` object.|
|[get_cpu_access_type](#get_cpu_access_type)|Returns the [access_type](concurrency-namespace-enums-amp.md#access_type) of the array. This method can be accessed only on the CPU.|
|[get_extent](#get_extent)|Returns the [extent](extent-class.md) object of the array.|
|[reinterpret_as](#reinterpret_as)|Returns a one-dimensional array that contains all the elements in the `array` object.|
|[section](#section)|Returns a subsection of the `array` object that is at the specified origin and, optionally, that has the specified extent.|
|[view_as](#view_as)|Returns an [array_view](array-view-class.md) object that is constructed from the `array` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator std::vector&lt;value_type&gt;](#operator_vec)|Uses `copy(*this, vector)` to implicitly convert the array to a std::[vector](../../../standard-library/vector-class.md) object.|
|[operator()](#operator_call)|Returns the element value that is specified by the parameters.|
|[operator\[\]](#operator_at)|Returns the element that is at the specified index.|
|[operator=](#operator_eq)|Copies the contents of the specified `array` object into this one.|

### Public Constants

|Name|Description|
|----------|-----------------|
|[rank Constant](#rank)|Stores the rank of the array.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[accelerator_view](#accelerator_view)|Gets the [accelerator_view](accelerator-view-class.md) object that represents the location where the array is allocated. This property can be accessed only on the CPU.|
|[associated_accelerator_view](#associated_accelerator_view)|Gets the second [accelerator_view](accelerator-view-class.md) object that is passed as a parameter when a staging constructor is called to instantiate the `array` object.|
|[cpu_access_type](#cpu_access_type)|Gets the [access_type](concurrency-namespace-enums-amp.md#access_type) that represents how the CPU can access the storage of the array.|
|[extent](#extent)|Gets the extent that defines the shape of the array.|

## Remarks

The type `array<T,N>` represents a dense and regular (not jagged) *N*-dimensional array that is located in a specific location, such as an accelerator or the CPU. The data type of the elements in the array is `T`, which must be of a type that is compatible with the target accelerator. Although the rank, `N`, (of the array is determined statically and is part of the type, the extent of the array is determined by the runtime and is expressed by using class `extent<N>`.

An array can have any number of dimensions, although some functionality is specialized for `array` objects with rank one, two, and three. If you omit the dimension argument, the default is 1.

Array data is laid out contiguously in memory. Elements that differ by one in the least significant dimension are adjacent in memory.

Arrays are logically considered to be value types, because when an array is copied to another array, a deep copy is performed. Two arrays never point to the same data.

The `array<T,N>` type is used in several scenarios:

- As a data container that can be used in computations on an accelerator.

- As a data container to hold memory on the host CPU (that can be used to copy to and from other arrays).

- As a staging object to act as a fast intermediary in host-to-device copies.

## Inheritance Hierarchy

`array`

## Requirements

**Header:** amp.h

**Namespace:** Concurrency

## <a name="dtor"></a> ~array

Destroys the `array` object.

```cpp
~array() restrict(cpu);
```

## <a name="accelerator_view"></a> accelerator_view

Gets the [accelerator_view](accelerator-view-class.md) object that represents the location where the array is allocated. This property can be accessed only on the CPU.

```cpp
__declspec(property(get= get_accelerator_view)) Concurrency::accelerator_view accelerator_view;
```

## <a name="ctor"></a> array

Initializes a new instance of the [array class](array-class.md). There is no default constructor for `array<T,N>`. All constructors are run on the CPU only. They cannot be executed on a Direct3D target.

```cpp
explicit array(
    const Concurrency::extent<_Rank>& _Extent) restrict(cpu);

explicit array(
    int _E0) restrict(cpu);

explicit array(
    int _E0,
    int _E1) restrict(cpu);

explicit array(
    int _E0,
    int _E1,
    int _E2) restrict(cpu);

array(
    const Concurrency::extent<_Rank>& _Extent,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

array(
    int _E0,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

array(
    int _E0,
    int _E1,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

array(
    int _E0,
    int _E1,
    int _E2,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

array(
    const Concurrency::extent<_Rank>& _Extent,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

array(
    int _E0,
    accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

array(
    int _E0,
    int _E1,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

array(
    int _E0,
    int _E1,
    int _E2,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first,
    _InputIterator _Src_last) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    _InputIterator _Src_first,
    _InputIterator _Src_last) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    _InputIterator _Src_first) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    _InputIterator _Src_first,
    _InputIterator _Src_last) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    _InputIterator _Src_first) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2,
    _InputIterator _Src_first,
    _InputIterator _Src_last) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2,
    _InputIterator _Src_first) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2,
    _InputIterator _Src_first,
    Concurrency::accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    const Concurrency::extent<_Rank>& _Extent,
    _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    _InputIterator _Src_first,
    _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

template <typename _InputIterator>
array(
    int _E0,
    int _E1,
    int _E2, _InputIterator _Src_first,
    Concurrency::accelerator_view _Av,
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

explicit array(
    const array_view<const value_type, _Rank>& _Src) restrict(cpu);

array(
    const array_view<const value_type, _Rank>& _Src,
    accelerator_view _Av
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

array(
    const array_view<const value_type, _Rank>& _Src,
    accelerator_view _Av,
    accelerator_view _Associated_Av) restrict(cpu);

array(const array& _Other) restrict(cpu);

array(array&& _Other) restrict(cpu);
```

### Parameters

*_Associated_Av*<br/>
An accelerator_view which specifies the preferred target location of the array.

*_Av*<br/>
An [accelerator_view](accelerator-view-class.md) object that specifies the location of the array.

*_Cpu_access_type*<br/>
The desired [access_type](concurrency-namespace-enums-amp.md#access_type)  for the array on the CPU. This parameter has a default value of `access_type_auto` leaving the CPU `access_type` determination to the runtime. The actual CPU `access_type` for the array can be queried using the `get_cpu_access_type` method.

*_Extent*<br/>
The extent in each dimension of the array.

*_E0*<br/>
The most significant component of the extent of this section.

*_E1*<br/>
The next-to-most-significant component of the extent of this section.

*_E2*<br/>
The least significant component of the extent of this section.

*_InputIterator*<br/>
The type of the input iterator.

*_Src*<br/>
To object to copy.

*_Src_first*<br/>
A beginning iterator into the source container.

*_Src_last*<br/>
An ending iterator into the source container.

*_Other*<br/>
Other data source.

*_Rank*<br/>
The rank of the section.

*value_type*<br/>
The data type of the elements that are copied.

## <a name="associated_accelerator_view"></a> associated_accelerator_view

Gets the second [accelerator_view](accelerator-view-class.md) object that is passed as a parameter when a staging constructor is called to instantiate the `array` object.

```cpp
__declspec(property(get= get_associated_accelerator_view)) Concurrency::accelerator_view associated_accelerator_view;
```

## <a name="copy_to"></a> copy_to

Copies the contents of the `array` to another `array`.

```cpp
void copy_to(
    array<value_type, _Rank>& _Dest) const ;

void copy_to(
    array_view<value_type, _Rank>& _Dest) const ;
```

### Parameters

*_Dest*<br/>
The [array_view](array-view-class.md) object to copy to.

## <a name="cpu_access_type"></a> cpu_access_type

Gets the CPU access_type allowed for this array.

```cpp
__declspec(property(get= get_cpu_access_type)) access_type cpu_access_type;
```

## <a name="data"></a> data

Returns a pointer to the raw data of the `array`.

```cpp
value_type* data() restrict(amp, cpu);

const value_type* data() const restrict(amp, cpu);
```

### Return Value

A pointer to the raw data of the array.

## <a name="extent"></a> extent

Gets the [extent](extent-class.md) object that defines the shape of the `array`.

```cpp
__declspec(property(get= get_extent)) Concurrency::extent<_Rank> extent;
```

## <a name="get_accelerator_view"></a> get_accelerator_view

Returns the [accelerator_view](accelerator-view-class.md) object that represents the location where the `array` object is allocated. This property can be accessed only on the CPU.

```cpp
Concurrency::accelerator_view get_accelerator_view() const;
```

### Return Value

The `accelerator_view` object that represents the location where the `array` object is allocated.

## <a name="get_associated_accelerator_view"></a> get_associated_accelerator_view

Gets the second [accelerator_view](accelerator-view-class.md) object that is passed as a parameter when a staging constructor is called to instantiate the `array` object.

```cpp
Concurrency::accelerator_view get_associated_accelerator_view() const ;
```

### Return Value

The second [accelerator_view](accelerator-view-class.md) object passed to the staging constructor.

## <a name="get_cpu_access_type"></a> get_cpu_access_type

Returns the CPU access_type that's allowed for this array.

```cpp
access_type get_cpu_access_type() const restrict(cpu);
```

### Return Value

## <a name="get_extent"></a> get_extent

Returns the [extent](extent-class.md) object of the `array`.

```cpp
Concurrency::extent<_Rank> get_extent() const restrict(amp,cpu);
```

### Return Value

The `extent` object of the `array`.

## <a name="operator_vec"></a> operator std::vector&lt;value_type&gt;

Uses `copy(*this, vector)` to implicitly convert the array to a std::vector object.

```cpp
operator std::vector<value_type>() const restrict(cpu);
```

### Parameters

*value_type*<br/>
The data type of the elements of the vector.

### Return Value

An object of type `vector<T>` that contains a copy of the data that is contained in the array.

## <a name="operator_call"></a> operator()

Returns the element value that is specified by the parameters.

```cpp
value_type& operator() (const index<_Rank>& _Index) restrict(amp,cpu);

const value_type& operator() (const index<_Rank>& _Index) cons  t restrict(amp,cpu);

value_type& operator() (int _I0, int _I1) restrict(amp,cpu);

const value_type& operator() (int _I0, int _I1) const restrict(amp,cpu)  ;

value_type& operator() (int _I0, int _I1, int _I2) restrict(amp,cpu);

const value_type& operator() (int _I0, int _I1, int _I2) const restrict(amp,cpu);

typename details::_Projection_result_type<value_type,_Rank>::_Result_type operator()(int _I) restrict(amp,cpu);

typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator()(int _I) const restrict(amp,cpu);
```

### Parameters

*_Index*<br/>
The location of the element.

*_I0*<br/>
The most significant component of the origin of this section.

*_I1*<br/>
The next-to-most-significant component of the origin of this section.

*_I2*<br/>
The least significant component of the origin of this section.

*_I*<br/>
The location of the element.

### Return Value

The element value specified by the parameters.

## <a name="operator_at"></a> operator[]

Returns the element that is at the specified index.

```cpp
value_type& operator[](const index<_Rank>& _Index) restrict(amp,cpu);

const value_type& operator[]
    (const index<_Rank>& _Index) const restrict(amp,cpu);

typename details::_Projection_result_type<value_type,_Rank>::_Result_type operator[](int _i) restrict(amp,cpu);

typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator[](int _i) const restrict(amp,cpu);
```

### Parameters

*_Index*<br/>
The index.

*_I*<br/>
The index.

### Return Value

The element that is at the specified index.

## <a name="operator_eq"></a> operator=

Copies the contents of the specified `array` object.

```cpp
array& operator= (const array& _Other) restrict(cpu);

array& operator= (array&& _Other) restrict(cpu);

array& operator= (
    const array_view<const value_type, _Rank>& _Src) restrict(cpu);
```

### Parameters

*_Other*<br/>
The `array` object to copy from.

*_Src*<br/>
The `array` object to copy from.

### Return Value

A reference to this `array` object.

## <a name="rank"></a> rank

Stores the rank of the `array`.

```cpp
static const int rank = _Rank;
```

## <a name="reinterpret_as"></a> reinterpret_as

Reinterprets the array through a one-dimensional array_view, which optionally may have a different value type than the source array.

### Syntax

```cpp
template <typename _Value_type2>
array_view<_Value_type2,1> reinterpret_as() restrict(amp,cpu);

template <typename _Value_type2>
array_view<const _Value_type2, 1> reinterpret_as() const restrict(amp,cpu);
```

### Parameters

*_Value_type2*<br/>
The data type of the returned data.

### Return Value

An array_view or const array_view object that is based on the array, with the element type reinterpreted from T to ElementType and the rank reduced from N to 1.

### Remarks

Sometimes it is convenient to view a multi-dimensional array as if it is a linear, one-dimensional array, possibly with a different value type than the source array. You can use this method to achieve this.
**Caution** Reinterpreting an array object by using a different value type is a potentially unsafe operation. We recommend that you use this functionality carefully.

The following code provides an example.

```cpp
struct RGB { float r; float g; float b; };

array<RGB,3>  a = ...;
array_view<float,1> v = a.reinterpret_as<float>();

assert(v.extent == 3*a.extent);
```

## <a name="section"></a> section

Returns a subsection of the `array` object that is at the specified origin and, optionally, that has the specified extent.

```cpp
array_view<value_type,_Rank> section(
    const Concurrency::index<_Rank>& _Section_origin,
    const Concurrency::extent<_Rank>& _Section_extent) restrict(amp,cpu);

array_view<const value_type,_Rank> section(
    const Concurrency::index<_Rank>& _Section_origin,
    const Concurrency::extent<_Rank>& _Section_extent) const restrict(amp,cpu);

array_view<value_type,_Rank> section(
    const Concurrency::extent<_Rank>& _Ext) restrict(amp,cpu);

array_view<const value_type,_Rank> section(
    const Concurrency::extent<_Rank>& _Ext) const restrict(amp,cpu);

array_view<value_type,_Rank> section(
    const index<_Rank>& _Idx) restrict(amp,cpu);

array_view<const value_type,_Rank> section(
    const index<_Rank>& _Idx) const restrict(amp,cpu);

array_view<value_type,1> section(
    int _I0,
    int _E0) restrict(amp,cpu);

array_view<const value_type,1> section(
    int _I0,
    int _E0) const restrict(amp,cpu);

array_view<value_type,2> section(
    int _I0,
    int _I1,
    int _E0,
    int _E1) restrict(amp,cpu);

array_view<const value_type,2> section(
    int _I0,
    int _I1,
    int _E0,
    int _E1) const restrict(amp,cpu);

array_view<value_type,3> section(
    int _I0,
    int _I1,
    int _I2,
    int _E0,
    int _E1,
    int _E2) restrict(amp,cpu);

array_view<const value_type,3> section(
    int _I0,
    int _I1,
    int _I2,
    int _E0,
    int _E1,
    int _E2) const restrict(amp,cpu);
```

### Parameters

*_E0*<br/>
The most significant component of the extent of this section.

*_E1*<br/>
The next-to-most-significant component of the extent of this section.

*_E2*<br/>
The least significant component of the extent of this section.

*_Ext*<br/>
The [extent](extent-class.md) object that specifies the extent of the section. The origin is 0.

*_Idx*<br/>
The [index](index-class.md) object that specifies the location of the origin. The subsection is the rest of the extent.

*_I0*<br/>
The most significant component of the origin of this section.

*_I1*<br/>
The next-to-most-significant component of the origin of this section.

*_I2*<br/>
The least significant component of the origin of this section.

*_Rank*<br/>
The rank of the section.

*_Section_extent*<br/>
The [extent](extent-class.md) object that specifies the extent of the section.

*_Section_origin*<br/>
The [index](index-class.md) object that specifies the location of the origin.

*value_type*<br/>
The data type of the elements that are copied.

### Return Value

Returns a subsection of the `array` object that is at the specified origin and, optionally, that has the specified extent. When only the `index` object is specified, the subsection contains all elements in the associated grid that have indexes that are larger than the indexes of the elements in the `index` object.

## <a name="view_as"></a> view_as

Reinterprets this array as an [array_view](array-view-class.md) of a different rank.

```cpp
template <int _New_rank>
array_view<value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank>& _View_extent) restrict(amp,cpu);

template <int _New_rank>
array_view<const value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank>& _View_extent) const restrict(amp,cpu);
```

### Parameters

*_New_rank*<br/>
The rank of the `extent` object passed as a parameter.

*_View_extent*<br/>
The extent that is used to construct the new [array_view](array-view-class.md) object.

*value_type*<br/>
The data type of the elements in both the original `array` object and the returned `array_view` object.

### Return Value

The [array_view](array-view-class.md) object that is constructed.

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
