---
title: "CSimpleMap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CSimpleMap"
  - "ATL.CSimpleMap"
  - "CSimpleMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleMap class"
ms.assetid: 61b06eb4-ae73-44b0-a305-0afb5a33e8b1
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
# CSimpleMap Class
This class provides support for a simple mapping array.  
  
## Syntax  
  
```
template <class TKey, class TVal, class TEqual = CSimpleMapEqualHelper<TKey,
    TVal>> class CSimpleMap
```  
  
#### Parameters  
 `TKey`  
 The key element type.  
  
 `TVal`  
 The value element type.  
  
 `TEqual`  
 A trait object, defining the equality test for elements of type `T`.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleMap::_ArrayElementType](#csimplemap___arrayelementtype)|Typedef for the value type.|  
|[CSimpleMap::_ArrayKeyType](#csimplemap___arraykeytype)|Typedef for the key type.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleMap::CSimpleMap](#csimplemap__csimplemap)|The constructor.|  
|[CSimpleMap::~CSimpleMap](#csimplemap___dtorcsimplemap)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleMap::Add](#csimplemap__add)|Adds a key and associated value to the map array.|  
|[CSimpleMap::FindKey](#csimplemap__findkey)|Finds a specific key.|  
|[CSimpleMap::FindVal](#csimplemap__findval)|Finds a specific value.|  
|[CSimpleMap::GetKeyAt](#csimplemap__getkeyat)|Retrieves the specified key.|  
|[CSimpleMap::GetSize](#csimplemap__getsize)|Returns the number of entries in the mapping array.|  
|[CSimpleMap::GetValueAt](#csimplemap__getvalueat)|Retrieves the specified value.|  
|[CSimpleMap::Lookup](#csimplemap__lookup)|Returns the value associated with the given key.|  
|[CSimpleMap::Remove](#csimplemap__remove)|Removes a key and matching value.|  
|[CSimpleMap::RemoveAll](#csimplemap__removeall)|Removes all keys and values.|  
|[CSimpleMap::RemoveAt](#csimplemap__removeat)|Removes a specific key and matching value.|  
|[CSimpleMap::ReverseLookup](#csimplemap__reverselookup)|Returns the key associated with the given value.|  
|[CSimpleMap::SetAt](#csimplemap__setat)|Sets the value associated with the given key.|  
|[CSimpleMap::SetAtIndex](#csimplemap__setatindex)|Sets the specific key and value.|  
  
## Remarks  
 `CSimpleMap` provides support for a simple mapping array of any given type `T`, managing an unordered array of key elements and their associated values.  
  
 The parameter `TEqual` provides a means of defining an equality function for two elements of type `T`. By creating a class similar to [CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md), it is possible to alter the behavior of the equality test for any given array. For example, when dealing with an array of pointers, it may be useful to define the equality as depending on the values the pointers reference. The default implementation utilizes **operator==()**.  
  
 Both `CSimpleMap` and [CSimpleArray](../../atl/reference/csimplearray-class.md) are provided for compatibility with previous ATL releases, and more complete and efficient collection implementations are provided by [CAtlArray](../../atl/reference/catlarray-class.md) and [CAtlMap](../../atl/reference/catlmap-class.md).  
  
 Unlike other map collections in ATL and MFC, this class is implemented with a simple array, and lookup searches require a linear search. `CAtlMap` should be used when the array contains a large number of elements.  
  
## Requirements  
 **Header:** atlsimpcoll.h  
  
## Example  
 [!code-cpp[NVC_ATL_Utilities#91](../../atl/codesnippet/cpp/csimplemap-class_1.cpp)]  
  
##  <a name="csimplemap__add"></a>  CSimpleMap::Add  
 Adds a key and associated value to the map array.  
  
```
BOOL Add(const TKey& key,  const TVal& val);
```  
  
### Parameters  
 `key`  
 The key.  
  
 *val*  
 The associated value.  
  
### Return Value  
 Returns TRUE if the key and value were successfully added, FALSE otherwise.  
  
### Remarks  
 Each key and value pair added causes the mapping array memory to be freed and reallocated, in order to ensure the data for each is always stored contiguously. That is, the second key element always directly follows the first key element in memory and so on.  
  
##  <a name="csimplemap___arrayelementtype"></a>  CSimpleMap::_ArrayElementType  
 A typedef for the key type.  
  
```
typedef TVal _ArrayElementType;
```  
  
##  <a name="csimplemap___arraykeytype"></a>  CSimpleMap::_ArrayKeyType  
 A typedef for the value type.  
  
```
typedef TKey _ArrayKeyType;
```  
  
##  <a name="csimplemap__csimplemap"></a>  CSimpleMap::CSimpleMap  
 The constructor.  
  
```
CSimpleMap();
```  
  
### Remarks  
 Initializes the data members.  
  
##  <a name="csimplemap___dtorcsimplemap"></a>  CSimpleMap::~CSimpleMap  
 The destructor.  
  
```
~CSimpleMap();
```  
  
### Remarks  
 Frees all allocated resources.  
  
##  <a name="csimplemap__findkey"></a>  CSimpleMap::FindKey  
 Finds a specific key.  
  
```
int FindKey(const TKey& key) const;
```  
  
### Parameters  
 `key`  
 The key to search for.  
  
### Return Value  
 Returns the index of the key if found, otherwise returns -1.  
  
##  <a name="csimplemap__findval"></a>  CSimpleMap::FindVal  
 Finds a specific value.  
  
```
int FindVal(const TVal& val) const;
```  
  
### Parameters  
 *val*  
 The value for which to search.  
  
### Return Value  
 Returns the index of the value if it is found, otherwise returns -1.  
  
##  <a name="csimplemap__getkeyat"></a>  CSimpleMap::GetKeyAt  
 Retrieves the key at the specified index.  
  
```
TKey& GetKeyAt(int nIndex) const;
```  
  
### Parameters  
 `nIndex`  
 The index of the key to return.  
  
### Return Value  
 Returns the key referenced by `nIndex`.  
  
### Remarks  
 The index passed by `nIndex` must be valid for the return value to be meaningful.  
  
##  <a name="csimplemap__getsize"></a>  CSimpleMap::GetSize  
 Returns the number of entries in the mapping array.  
  
```
int GetSize() const;
```  
  
### Return Value  
 Returns the number of entries (a key and value is one entry) in the mapping array.  
  
##  <a name="csimplemap__getvalueat"></a>  CSimpleMap::GetValueAt  
 Retrieves the value at the specific index.  
  
```
TVal& GetValueAt(int nIndex) const;
```  
  
### Parameters  
 `nIndex`  
 The index of the value to return.  
  
### Return Value  
 Returns the value referenced by `nIndex`.  
  
### Remarks  
 The index passed by `nIndex` must be valid for the return value to be meaningful.  
  
##  <a name="csimplemap__lookup"></a>  CSimpleMap::Lookup  
 Returns the value associated with the given key.  
  
```
TVal Lookup(const TKey& key) const;
```  
  
### Parameters  
 `key`  
 The key.  
  
### Return Value  
 Returns the associated value. If no matching key is found, NULL is returned.  
  
##  <a name="csimplemap__remove"></a>  CSimpleMap::Remove  
 Removes a key and matching value.  
  
```
BOOL Remove(const TKey& key);
```  
  
### Parameters  
 `key`  
 The key.  
  
### Return Value  
 Returns TRUE if the key, and matching value, were successfully removed, FALSE otherwise.  
  
##  <a name="csimplemap__removeall"></a>  CSimpleMap::RemoveAll  
 Removes all keys and values.  
  
```
void RemoveAll();
```  
  
### Remarks  
 Removes all keys and values from the mapping array object.  
  
##  <a name="csimplemap__removeat"></a>  CSimpleMap::RemoveAt  
 Removes a key and associated value at the specified index.  
  
```
BOOL RemoveAt(int nIndex);
```  
  
### Parameters  
 `nIndex`  
 The index of the key and associated value to remove.  
  
### Return Value  
 Returns TRUE on success, FALSE if the index specified is an invalid index.  
  
##  <a name="csimplemap__reverselookup"></a>  CSimpleMap::ReverseLookup  
 Returns the key associated with the given value.  
  
```
TKey ReverseLookup(const TVal& val) const;
```  
  
### Parameters  
 *val*  
 The value.  
  
### Return Value  
 Returns the associated key. If no matching key is found, NULL is returned.  
  
##  <a name="csimplemap__setat"></a>  CSimpleMap::SetAt  
 Sets the value associated with the given key.  
  
```
BOOL SetAt(const TKey& key,  const TVal& val);
```  
  
### Parameters  
 `key`  
 The key.  
  
 *val*  
 The new value to assign.  
  
### Return Value  
 Returns TRUE if the key was found, and the value was successfully changed, FALSE otherwise.  
  
##  <a name="csimplemap__setatindex"></a>  CSimpleMap::SetAtIndex  
 Sets the key and value at a specified index.  
  
```
BOOL SetAtIndex(int nIndex,
    const TKey& key,
    const TVal& val);
```  
  
### Parameters  
 `nIndex`  
 The index, referencing the key and value pairing to change.  
  
 `key`  
 The new key.  
  
 *val*  
 The new value.  
  
### Return Value  
 Returns TRUE if successful, FALSE if the index was not valid.  
  
### Remarks  
 Updates both the key and value pointed to by `nIndex`.  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
