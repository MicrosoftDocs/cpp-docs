---
description: "Learn more about: CRBTree Class"
title: "CRBTree Class"
ms.date: "11/04/2016"
f1_keywords: ["CRBTree", "ATLCOLL/ATL::CRBTree", "ATLCOLL/ATL::CRBTree::KINARGTYPE", "ATLCOLL/ATL::CRBTree::KOUTARGTYPE", "ATLCOLL/ATL::CRBTree::VINARGTYPE", "ATLCOLL/ATL::CRBTree::VOUTARGTYPE", "ATLCOLL/ATL::CRBTree::FindFirstKeyAfter", "ATLCOLL/ATL::CRBTree::GetAt", "ATLCOLL/ATL::CRBTree::GetCount", "ATLCOLL/ATL::CRBTree::GetHeadPosition", "ATLCOLL/ATL::CRBTree::GetKeyAt", "ATLCOLL/ATL::CRBTree::GetNext", "ATLCOLL/ATL::CRBTree::GetNextAssoc", "ATLCOLL/ATL::CRBTree::GetNextKey", "ATLCOLL/ATL::CRBTree::GetNextValue", "ATLCOLL/ATL::CRBTree::GetPrev", "ATLCOLL/ATL::CRBTree::GetTailPosition", "ATLCOLL/ATL::CRBTree::GetValueAt", "ATLCOLL/ATL::CRBTree::IsEmpty", "ATLCOLL/ATL::CRBTree::RemoveAll", "ATLCOLL/ATL::CRBTree::RemoveAt", "ATLCOLL/ATL::CRBTree::SetValueAt"]
helpviewer_keywords: ["CRBTree class"]
ms.assetid: a1b1cb63-38e4-4fc2-bb28-f774d1721760
---
# CRBTree Class

This class provides methods for creating and utilizing a Red-Black tree.

## Syntax

```
template <typename K,
          typename V,
          class KTraits = CElementTraits<K>,
          class VTraits = CElementTraits<V>>
class CRBTree
```

#### Parameters

*K*<br/>
The key element type.

*V*<br/>
The value element type.

*KTraits*<br/>
The code used to copy or move key elements. See [CElementTraits Class](../../atl/reference/celementtraits-class.md) for more details.

*VTraits*<br/>
The code used to copy or move value elements.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CRBTree::KINARGTYPE](#kinargtype)|Type used when a key is passed as an input argument.|
|[CRBTree::KOUTARGTYPE](#koutargtype)|Type used when a key is returned as an output argument.|
|[CRBTree::VINARGTYPE](#vinargtype)|Type used when a value is passed as an input argument.|
|[CRBTree::VOUTARGTYPE](#voutargtype)|Type used when a value is passed as an output argument.|

### Public Classes

|Name|Description|
|----------|-----------------|
|[CRBTree::CPair Class](#cpair_class)|A class containing the key and value elements.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CRBTree::~CRBTree](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CRBTree::FindFirstKeyAfter](#findfirstkeyafter)|Call this method to find the position of the element that uses the next available key.|
|[CRBTree::GetAt](#getat)|Call this method to get the element at a given position in the tree.|
|[CRBTree::GetCount](#getcount)|Call this method to get the number of elements in the tree.|
|[CRBTree::GetHeadPosition](#getheadposition)|Call this method to get the position value for the element at the head of the tree.|
|[CRBTree::GetKeyAt](#getkeyat)|Call this method to get the key from a given position in the tree.|
|[CRBTree::GetNext](#getnext)|Call this method to obtain a pointer to an element stored in the `CRBTree` object, and advance the position to the next element.|
|[CRBTree::GetNextAssoc](#getnextassoc)|Call this method to get the key and value of an element stored in the map and advance the position to the next element.|
|[CRBTree::GetNextKey](#getnextkey)|Call this method to get the key of an element stored in the tree and advance the position to the next element.|
|[CRBTree::GetNextValue](#getnextvalue)|Call this method to get the value of an element stored in the tree and advance the position to the next element.|
|[CRBTree::GetPrev](#getprev)|Call this method to obtain a pointer to an element stored in the `CRBTree` object, and then update the position to the previous element.|
|[CRBTree::GetTailPosition](#gettailposition)|Call this method to get the position value for the element at the tail of the tree.|
|[CRBTree::GetValueAt](#getvalueat)|Call this method to retrieve the value stored at a given position in the `CRBTree` object.|
|[CRBTree::IsEmpty](#isempty)|Call this method to test for an empty tree object.|
|[CRBTree::RemoveAll](#removeall)|Call this method to remove all elements from the `CRBTree` object.|
|[CRBTree::RemoveAt](#removeat)|Call this method to remove the element at the given position in the `CRBTree` object.|
|[CRBTree::SetValueAt](#setvalueat)|Call this method to change the value stored at a given position in the `CRBTree` object.|

## Remarks

A Red-Black tree is a binary search tree that uses an extra bit of information per node to ensure that it remains "balanced," that is, the tree height doesn't grow disproportionately large and affect performance.

This template class is designed to be used by [CRBMap](../../atl/reference/crbmap-class.md) and [CRBMultiMap](../../atl/reference/crbmultimap-class.md). The bulk of the methods that make up these derived classes are provided by `CRBTree`.

For a more complete discussion of the various collection classes and their features and performance characteristics, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Requirements

**Header:** atlcoll.h

## <a name="cpair_class"></a> CRBTree::CPair Class

A class containing the key and value elements.

```
class CPair : public __POSITION
```

### Remarks

This class is used by the methods [CRBTree::GetAt](#getat), [CRBTree::GetNext](#getnext), and [CRBTree::GetPrev](#getprev) to access the key and value elements stored in the tree structure.

The members are as follows:

|Data member|Description|
|-|-|
|`m_key`|The data member storing the key element.|
|`m_value`|The data member storing the value element.|

## <a name="dtor"></a> CRBTree::~CRBTree

The destructor.

```
~CRBTree() throw();
```

### Remarks

Frees any allocated resources. Calls [CRBTree::RemoveAll](#removeall) to delete all elements.

## <a name="findfirstkeyafter"></a> CRBTree::FindFirstKeyAfter

Call this method to find the position of the element that uses the next available key.

```
POSITION FindFirstKeyAfter(KINARGTYPE key) const throw();
```

### Parameters

*key*<br/>
A key value.

### Return Value

Returns the position value of the element that uses the next available key. If there are no more elements, NULL is returned.

### Remarks

This method makes it easy to traverse the tree without having to calculate position values beforehand.

## <a name="getat"></a> CRBTree::GetAt

Call this method to get the element at a given position in the tree.

```
CPair* GetAt(POSITION pos) throw();
const CPair* GetAt(POSITION pos) const throw();
void GetAt(POSITION pos, KOUTARGTYPE key, VOUTARGTYPE value) const;
```

### Parameters

*pos*<br/>
The position value.

*key*<br/>
The variable that receives the key.

*value*<br/>
The variable that receives the value.

### Return Value

The first two forms return a pointer to a [CPair](#cpair_class). The third form obtains a key and a value for the given position.

### Remarks

The position value can be previously determined with a call to a method such as [CRBTree::GetHeadPosition](#getheadposition) or [CRBTree::GetTailPosition](#gettailposition).

In debug builds, an assertion failure will occur if *pos* is equal to NULL.

## <a name="getcount"></a> CRBTree::GetCount

Call this method to get the number of elements in the tree.

```
size_t GetCount() const throw();
```

### Return Value

Returns the number of elements (each key/value pair is one element) stored in the tree.

## <a name="getheadposition"></a> CRBTree::GetHeadPosition

Call this method to get the position value for the element at the head of the tree.

```
POSITION GetHeadPosition() const throw();
```

### Return Value

Returns the position value for the element at the head of the tree.

### Remarks

The value returned by `GetHeadPosition` can be used with methods such as [CRBTree::GetKeyAt](#getkeyat) or [CRBTree::GetNext](#getnext) to traverse the tree and retrieve values.

## <a name="getkeyat"></a> CRBTree::GetKeyAt

Call this method to get the key from a given position in the tree.

```
const K& GetKeyAt(POSITION pos) const throw();
```

### Parameters

*pos*<br/>
The position value.

### Return Value

Returns the key stored at position *pos* in the tree.

### Remarks

If *pos* is not a valid position value, results are unpredictable. In debug builds, an assertion failure will occur if *pos* is equal to NULL.

## <a name="getnext"></a> CRBTree::GetNext

Call this method to obtain a pointer to an element stored in the `CRBTree` object, and advance the position to the next element.

```
const CPair* GetNext(POSITION& pos) const throw();
CPair* GetNext(POSITION& pos) throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to methods such as [CRBTree::GetHeadPosition](#getheadposition) or [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### Return Value

Returns a pointer to the next [CPair](#cpair_class) value in the tree.

### Remarks

The *pos* position counter is updated after each call. If the retrieved element is the last in the tree, *pos* is set to NULL.

## <a name="getnextassoc"></a> CRBTree::GetNextAssoc

Call this method to get the key and value of an element stored in the map and advance the position to the next element.

```cpp
void GetNextAssoc(
    POSITION& pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to methods such as [CRBTree::GetHeadPosition](#getheadposition) or [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

*key*<br/>
Template parameter specifying the type of the tree's key.

*value*<br/>
Template parameter specifying the type of the tree's value.

### Remarks

The *pos* position counter is updated after each call. If the retrieved element is the last in the tree, *pos* is set to NULL.

## <a name="getnextkey"></a> CRBTree::GetNextKey

Call this method to get the key of an element stored in the tree and advance the position to the next element.

```
const K& GetNextKey(POSITION& pos) const throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to methods such as [CRBTree::GetHeadPosition](#getheadposition) or [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### Return Value

Returns a reference to the next key in the tree.

### Remarks

Updates the current position counter, *pos*. If there are no more entries in the tree, the position counter is set to NULL.

## <a name="getnextvalue"></a> CRBTree::GetNextValue

Call this method to get the value of an element stored in the tree and advance the position to the next element.

```
const V& GetNextValue(POSITION& pos) const throw();
V& GetNextValue(POSITION& pos) throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to methods such as [CRBTree::GetHeadPosition](#getheadposition) or [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### Return Value

Returns a reference to the next value in the tree.

### Remarks

Updates the current position counter, *pos*. If there are no more entries in the tree, the position counter is set to NULL.

## <a name="getprev"></a> CRBTree::GetPrev

Call this method to obtain a pointer to an element stored in the `CRBTree` object, and then update the position to the previous element.

```
const CPair* GetPrev(POSITION& pos) const throw();
CPair* GetPrev(POSITION& pos) throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to methods such as [CRBTree::GetHeadPosition](#getheadposition) or [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### Return Value

Returns a pointer to the previous [CPair](#cpair_class) value stored in the tree.

### Remarks

Updates the current position counter, *pos*. If there are no more entries in the tree, the position counter is set to NULL.

## <a name="gettailposition"></a> CRBTree::GetTailPosition

Call this method to get the position value for the element at the tail of the tree.

```
POSITION GetTailPosition() const throw();
```

### Return Value

Returns the position value for the element at the tail of the tree.

### Remarks

The value returned by `GetTailPosition` can be used with methods such as [CRBTree::GetKeyAt](#getkeyat) or [CRBTree::GetPrev](#getprev) to traverse the tree and retrieve values.

## <a name="getvalueat"></a> CRBTree::GetValueAt

Call this method to retrieve the value stored at a given position in the `CRBTree` object.

```
const V& GetValueAt(POSITION pos) const throw();
V& GetValueAt(POSITION pos) throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to methods such as [CRBTree::GetHeadPosition](#getheadposition) or [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### Return Value

Returns a reference to the value stored at the given position in the `CRBTree` object.

## <a name="isempty"></a> CRBTree::IsEmpty

Call this method to test for an empty tree object.

```
bool IsEmpty() const throw();
```

### Return Value

Returns TRUE if the tree is empty, FALSE otherwise.

## <a name="kinargtype"></a> CRBTree::KINARGTYPE

Type used when a key is passed as an input argument.

```
typedef KTraits::INARGTYPE KINARGTYPE;
```

## <a name="koutargtype"></a> CRBTree::KOUTARGTYPE

Type used when a key is returned as an output argument.

```
typedef KTraits::OUTARGTYPE KOUTARGTYPE;
```

## <a name="removeall"></a> CRBTree::RemoveAll

Call this method to remove all elements from the `CRBTree` object.

```cpp
void RemoveAll() throw();
```

### Remarks

Clears out the `CRBTree` object, freeing the memory used to store the elements.

## <a name="removeat"></a> CRBTree::RemoveAt

Call this method to remove the element at the given position in the `CRBTree` object.

```cpp
void RemoveAt(POSITION pos) throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to methods such as [CRBTree::GetHeadPosition](#getheadposition) or [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

### Remarks

Removes the key/value pair stored at the specified position. The memory used to store the element is freed. The POSITION referenced by *pos* becomes invalid, and while the POSITION of any other elements in the tree remains valid, they do not necessarily retain the same order.

## <a name="setvalueat"></a> CRBTree::SetValueAt

Call this method to change the value stored at a given position in the `CRBTree` object.

```cpp
void SetValueAt(POSITION pos, VINARGTYPE value);
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to methods such as [CRBTree::GetHeadPosition](#getheadposition) or [CRBTree::FindFirstKeyAfter](#findfirstkeyafter).

*value*<br/>
The value to add to the `CRBTree` object.

### Remarks

Changes the value element stored at the given position in the `CRBTree` object.

## <a name="vinargtype"></a> CRBTree::VINARGTYPE

Type used when a value is passed as an input argument.

```
typedef VTraits::INARGTYPE VINARGTYPE;
```

## <a name="voutargtype"></a> CRBTree::VOUTARGTYPE

Type used when a value is passed as an output argument.

```
typedef VTraits::OUTARGTYPE VOUTARGTYPE;
```

## See also

[Class Overview](../../atl/atl-class-overview.md)
