---
title: "CMapWordToOb Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 9c9bcd76-456f-4cf9-b03c-dd28b49d5e4f
caps.latest.revision: 19
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
# CMapWordToOb Class
Supports maps of `CObject` pointers keyed by 16-bit words.  
  
## Syntax  
  
```  
class CMapWordToOb : public CObject  
```  
  
## Members  
 The member functions of `CMapWordToOb` are similar to the member functions of class [CMapStringToOb](../VS_visualcpp/CMapStringToOb-Class.md). Because of this similarity, you can use the `CMapStringToOb` reference documentation for member function specifics. Wherever you see a `CString` or a **const** pointer to `char` as a function parameter or return value, substitute **WORD**.  
  
 `BOOL CMapStringToOb::Lookup( const char* <key>,`  
  
 `CObject*& <rValue> ) const;`  
  
 for example, translates to  
  
 `BOOL CMapWordToOb::Lookup( WORD <key>, CObject*& <rValue> ) const;`  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMapStringToOb::CMapStringToOb](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__cmapstringtoob)|Constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMapStringToOb::GetCount](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__getcount)|Returns the number of elements in this map.|  
|[CMapStringToOb::GetHashTableSize](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__gethashtablesize)|Determines the current number of elements in the hash table.|  
|[CMapStringToOb::GetNextAssoc](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__getnextassoc)|Gets the next element for iterating.|  
|[CMapStringToOb::GetSize](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__getsize)|Returns the number of elements in this map.|  
|[CMapStringToOb::GetStartPosition](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__getstartposition)|Returns the position of the first element.|  
|[CMapStringToOb::HashKey](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__hashkey)|Calculates the hash value of a specified key.|  
|[CMapStringToOb::InitHashTable](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__inithashtable)|Initializes the hash table.|  
|[CMapStringToOb::IsEmpty](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__isempty)|Tests for the empty-map condition (no elements).|  
|[CMapStringToOb::Lookup](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__lookup)|Looks up a void pointer based on the void pointer key. The pointer value, not the entity it points to, is used for the key comparison.|  
|[CMapStringToOb::LookupKey](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__lookupkey)|Returns a reference to the key associated with the specified key value.|  
|[CMapStringToOb::RemoveAll](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__removeall)|Removes all the elements from this map.|  
|[CMapStringToOb::RemoveKey](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__removekey)|Removes an element specified by a key.|  
|[CMapStringToOb::SetAt](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__setat)|Inserts an element into the map; replaces an existing element if a matching key is found.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CMapStringToOb::operator [ ]](../VS_visualcpp/CMapStringToOb-Class.md#cmapstringtoob__operator_at)|Inserts an element into the map — operator substitution for `SetAt`.|  
  
## Remarks  
 `CMapWordToOb` incorporates the `IMPLEMENT_SERIAL` macro to support serialization and dumping of its elements. Each element is serialized in turn if a map is stored to an archive, either with the overloaded insertion ( **<<**) operator or with the `Serialize` member function.  
  
 If you need a dump of individual **WORD**- `CObject` elements, you must set the depth of the dump context to 1 or greater.  
  
 When a `CMapWordToOb` object is deleted, or when its elements are removed, the `CObject` pointers are removed. The objects referenced by the `CObject` pointers are not destroyed.  
  
 For more information on `CMapWordToOb`, see the article [Collections](../VS_visualcpp/Collections.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 `CMapWordToOb`  
  
## Requirements  
 **Header:** afxcoll.h  
  
## See Also  
 [CObject Class](../VS_visualcpp/CObject-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)