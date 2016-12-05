---
title: "extent Class (C++ AMP) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::extent"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "extent structure"
ms.assetid: edb5de3d-3935-4dbb-8365-4cc6c4fb0269
caps.latest.revision: 19
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
# extent Class (C++ AMP)
Represents a vector of *N* integer values that specify the bounds of an *N*-dimensional space that has an origin of 0. The values in the vector are ordered from most significant to least significant.  
  
### Syntax  
  
```  
template <
    int _Rank>  
class extent;  
```  
  
### Parameters  
 `_Rank`  
 The rank of the `extent` object.  

 ## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[extent::extent Constructor](#ctor)|Initializes a new instance of the `extent` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[extent::contains Method](#contains)|Verifies that the specified `extent` object has the specified rank.|  
|[extent::size Method](#size)|Returns the total linear size of the extent (in units of elements).|  
|[extent::tile Method](#tile)|Produces a `tiled_extent` object with the tile extents given by specified dimensions.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[extent::operator- Operator](#extent__operator_min)|Returns a new `extent` object that's created by subtracting the `index` elements from the corresponding `extent` elements.|  
|[extent::operator-- Operator](#extent__operator_min_min)|Decrements each element of the `extent` object.|  
|[extent::operator(mod)= Operator](#extent__operator_mod)=)|Calculates the modulus (remainder) of each element in the `extent` object when that element is divided by a number.|  
|[extent::operator*= Operator](#extent__operator_star_eq)|Multiplies each element of the `extent` object by a number.|  
|[extent::operator/= Operator](#extent__operator_min_eq)|Divides each element of the `extent` object by a number.|  
|[extent::operator\[\]](#extent__operator_at)|Returns the element that's at the specified index.|  
|[extent::operator+ Operator](#extent__operator_add)|Returns a new `extent` object that's created by adding the corresponding `index` and `extent` elements.|  
|[extent::operator++ Operator](#extent__operator_add_add)|Increments each element of the `extent` object.|  
|[extent::operator+= Operator](#extent__operator_add_eq)|Adds the specified number to each element of the `extent` object.|  
|[extent::operator= Operator](#extent__operator_eq)|Copies the contents of another `extent` object into this one.|  
|[extent::operator-= Operator](#extent__operator_min_eq)|Subtracts the specified number from each element of the `extent` object.|  

  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[extent::rank Constant](#rank)|Gets the rank of the `extent` object.|  
  
## Inheritance Hierarchy  
 `extent`  


## <a name="extent__contains_method"></a> extent::contains Method 
Indicates whether the specified [index](index-class.md) value is contained within the `extent' object.  
  
### Syntax  
  
```  
bool contains( const index<rank>& _Index ) const restrict(amp,cpu);  
```  
  
### Parameters  
 `_Index`  
 The `index` value to test.  
  
### Return Value  
 `true` if the specified `index` value is contained in the `extent` object; otherwise, `false`.  
  
##  <a name="extent__ctor"></a> extent::extent Constructor  
Initializes a new instance of the `extent' class.  
  
### Syntax  
  
```  
extent() restrict(amp,cpu);  
  
extent(  
    const extent<_Rank>& _Other ) restrict(amp,cpu);  
  
explicit extent(  
    int _I ) restrict(amp,cpu);  
  
extent(  
    int _I0,  
    int _I1 ) restrict(amp,cpu);  
  
extent(  
    int _I0,  
    int _I1,  
    int _I2 ) restrict(amp,cpu);  
  
explicit extent(  
    const int _Array[_Rank]  
) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Array`  
 An array of `_Rank` integers that is used to create the new `extent` object.  
  
 `_I`  
 The length of the extent.  
  
 `_I0`  
 The length of the most significant dimension.  
  
 `_I1`  
 The length of the next-to-most-significant dimension.  
  
 `_I2`  
 The length of the least significant dimension.  
  
 `_Other`  
 An `extent` object on which the new `extent` object is based.  
  
## Remarks  
 The parameterless constructor initializes an `extent` object that has a rank of three.  
  
 If an array is used to construct an `extent` object, the length of the array must match the rank of the `extent` object.  
  
##  <a name="extent__operator_mod"></a> extent::operator(mod)= Operator 
Calculates the modulus (remainder) of each element in the `extent' when that element is divided by a number.  
  
### Syntax  
  
```  
extent<_Rank>&  operator%= (int _Rhs ) restrict(cpu, direct3d);  
```  
  
### Parameters  
 `_Rhs`  
 The number to find the modulus of.  
  
### Return Value  
 The `extent` object.  
  
##  <a name="extent__operator_star_eq"></a> extent::operator*= Operator  
Multiplies each element in the `extent' object by the specified number.  
  
### Syntax  
  
```  
extent<_Rank>&  operator*= ( int _Rhs ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Rhs`  
 The number to multiply.  
  
### Return Value  
 The `extent` object.  
  
## extent::operator+ Operator  
Returns a new `extent` object created by adding the corresponding `index` and `extent` elements.  
  
### Syntax  
  
```  
extent<_Rank>  operator+(  
    const index<_Rank>& _Rhs ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Rhs`  
 The `index` object that contains the elements to add.  
  
### Return Value  
 The new `extent` object.  
  
##  <a name="extent__operator_add_add"></a> extent::operator++ Operator  
Increments each element of the `extent' object.  
  
### Syntax  
  
```  
extent<_Rank>&  operator++() restrict(amp,cpu);  
  
extent<_Rank>  operator++(  
    int  
) restrict(amp,cpu);  
```  
  
### Return Value  
 For the prefix operator, the `extent` object (`*this`). For the suffix operator, a new `extent` object.  
  
##  <a name="extent__operator_add_eq"></a> extent::operator+= Operator  
Adds the specified number to each element of the `extent' object.  
  
### Syntax  
  
```  
extent<_Rank>&  operator+= (  
    const extent<_Rank>& _Rhs ) restrict(amp,cpu);  
  
extent<_Rank>&  operator+= (  
    const index<_Rank>& _Rhs ) restrict(amp,cpu);  
  
extent<_Rank>&  operator+= (  
    int _Rhs ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Rhs`  
 The number, index, or extent to add.  
  
### Return Value  
 The resulting `extent` object.  
  
##  <a name="extent__operator_min"></a> extent::operator- Operator  
Creates a new `extent` object by subtracting each element in the specified `index` object from the corresponding element in this `extent` object.  
  
### Syntax  
  
```  
extent<_Rank>  operator-(  
    const index<_Rank>& _Rhs ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Rhs`  
 The `index` object that contains the elements to subtract.  
  
### Return Value  
 The new `extent` object.  
  
##  <a name="extent__operator_min_min"></a> extent::operator-- Operator  
Decrements each element in the `extent' object.  
  
### Syntax  
  
```  
extent<_Rank>&  operator--() restrict(amp,cpu);  
  
extent<_Rank>  operator--(  
    int  
) restrict(amp,cpu);  
```  
  
### Return Value  
 For the prefix operator, the `extent` object (`*this`). For the suffix operator, a new `extent` object.  
  
##  <a name="extent__operator_div_eq"></a> extent::operator/= Operator  
Divides each element in the `extent' object by the specified number.  
  
### Syntax  
  
```  
extent<_Rank>&  operator/= (  
    int _Rhs ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Rhs`  
 The number to divide by.  
  
### Return Value  
 The `extent` object.  
  
##  <a name="extent__operator_min_eq"></a> extent::operator-= Operator  
Subtracts the specified number from each element of the `extent' object.  
  
### Syntax  
  
```  
extent<_Rank>&  operator-= (  
    const extent<_Rank>& _Rhs ) restrict(amp,cpu);  
  
extent<_Rank>&  operator-= (  
    const index<_Rank>& _Rhs ) restrict(amp,cpu);  
  
extent<_Rank>&  operator-= (  
    int _Rhs ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Rhs`  
 The number to subtract.  
  
### Return Value  
 The resulting `extent` object.  
  
##  <a name="extent__operator_eq"></a> extent::operator= Operator  
Copies the contents of another `extent' object into this one.  
  
### Syntax  
  
```  
extent<_Rank>&  operator= (  
    const extent<_Rank>& _Other ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Other`  
 The `extent` object to copy from.  
  
### Return Value  
 A reference to this `extent` object.  
  
##  <a name="extent__operator_at"></a> extent::operator \[\] 
Returns the element that's at the specified index.  
  
### Syntax  
  
```  
int operator[] ( unsigned int _Index ) const restrict(amp,cpu);  
  
int&  operator[] ( unsigned int _Index ) restrict(amp,cpu);  
```  
  
### Parameters  
 `_Index`  
 An integer from 0 through the rank minus 1.  
  
### Return Value  
 The element that's at the specified index.  
  
##  <a name="extent__rank_constant"></a> extent::rank Constant  
Stores the rank of the `extent' object.  
  
### Syntax  
  
```  
static const int rank = _Rank;  
```  
  
##  <a name="extent__size_method"></a> extent::size Method  
Returns the total linear size of the `extent` object (in units of elements).  
  
### Syntax  

```  
unsigned int size() const restrict(amp,cpu);  
```  
  
## <a name="tile"></a> extent::tile Method
Produces a tiled_extent object with the specified tile dimensions.

```
template <
   int _Dim0
>
tiled_extent<_Dim0> tile() const ;

template <
   int _Dim0,
   int _Dim1
>
tiled_extent<_Dim0, _Dim1> tile() const ;

template <
   int _Dim0,
   int _Dim1,
   int _Dim2
>
tiled_extent<_Dim0, _Dim1, _Dim2> tile() const ;
```  
### Parameters
`_Dim0`
The most significant component of the tiled extent.
`_Dim1`
The next-to-most-significant component of the tiled extent.
`_Dim2`
The least significant component of the tiled extent.


  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
