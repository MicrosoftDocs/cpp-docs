---
title: "CMapStringToString Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CMapStringToString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "collection classes, string mapping"
  - "strings [C++], mapping"
  - "strings [C++], class for mapping"
  - "CMapStringToString class"
ms.assetid: b45794c2-fe6b-4edb-a8ca-faa03b57b4a8
caps.latest.revision: 19
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
# CMapStringToString Class
Supports maps of `CString` objects keyed by `CString` objects.  
  
## Syntax  
  
```  
class CMapStringToString : public CObject  
```  
  
## Members  
 The member functions of `CMapStringToString` are similar to the member functions of class [CMapStringToOb](../mfcref/cmapstringtoob-class.md). Because of this similarity, you can use the `CMapStringToOb` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a return value or "output" function parameter, substitute a pointer to `char`. Wherever you see a `CObject` pointer as an "input" function parameter, substitute a pointer to `char`.  
  
 `BOOL CMapStringToOb::Lookup(const char*<key>, CObject*&<rValue>) const;`  
  
 for example, translates to  
  
 `BOOL CMapStringToString::Lookup(LPCTSTR<key>, CString&<rValue>) const;`  
  
### Public Structures  
  
|Name|Description|  
|----------|-----------------|  
|[CMapStringToString::CPair](#cmapstringtostring__cpair)|A nested structure containing a key value and the value of the associated string object.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMapStringToOb::CMapStringToOb](../mfcref/cmapstringtoob-class.md#cmapstringtoob__cmapstringtoob)|Constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMapStringToOb::GetCount](../mfcref/cmapstringtoob-class.md#cmapstringtoob__getcount)|Returns the number of elements in this map.|  
|[CMapStringToOb::GetHashTableSize](../mfcref/cmapstringtoob-class.md#cmapstringtoob__gethashtablesize)|Determines the current number of elements in the hash table.|  
|[CMapStringToOb::GetNextAssoc](../mfcref/cmapstringtoob-class.md#cmapstringtoob__getnextassoc)|Gets the next element for iterating.|  
|[CMapStringToOb::GetSize](../mfcref/cmapstringtoob-class.md#cmapstringtoob__getsize)|Returns the number of elements in this map.|  
|[CMapStringToOb::GetStartPosition](../mfcref/cmapstringtoob-class.md#cmapstringtoob__getstartposition)|Returns the position of the first element.|  
|[CMapStringToOb::HashKey](../mfcref/cmapstringtoob-class.md#cmapstringtoob__hashkey)|Calculates the hash value of a specified key.|  
|[CMapStringToOb::InitHashTable](../mfcref/cmapstringtoob-class.md#cmapstringtoob__inithashtable)|Initializes the hash table.|  
|[CMapStringToOb::IsEmpty](../mfcref/cmapstringtoob-class.md#cmapstringtoob__isempty)|Tests for the empty-map condition (no elements).|  
|[CMapStringToOb::Lookup](../mfcref/cmapstringtoob-class.md#cmapstringtoob__lookup)|Looks up a void pointer based on the void pointer key. The pointer value, not the entity it points to, is used for the key comparison.|  
|[CMapStringToOb::LookupKey](../mfcref/cmapstringtoob-class.md#cmapstringtoob__lookupkey)|Returns a reference to the key associated with the specified key value.|  
|[CMapStringToString::PGetFirstAssoc](#cmapstringtostring__pgetfirstassoc)|Gets a pointer to the first `CString` in the map.|  
|[CMapStringToString::PGetNextAssoc](#cmapstringtostring__pgetnextassoc)|Gets a pointer to the next `CString` for iterating.|  
|[CMapStringToString::PLookup](#cmapstringtostring__plookup)|Returns a pointer to a `CString` whose value matches the specified value.|  
|[CMapStringToOb::RemoveAll](../mfcref/cmapstringtoob-class.md#cmapstringtoob__removeall)|Removes all the elements from this map.|  
|[CMapStringToOb::RemoveKey](../mfcref/cmapstringtoob-class.md#cmapstringtoob__removekey)|Removes an element specified by a key.|  
|[CMapStringToOb::SetAt](../mfcref/cmapstringtoob-class.md#cmapstringtoob__setat)|Inserts an element into the map; replaces an existing element if a matching key is found.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CMapStringToOb::operator [ ]](../mfcref/cmapstringtoob-class.md#cmapstringtoob__operator_at)|Inserts an element into the map — operator substitution for `SetAt`.|  
  
## Remarks  
 `CMapStringToString` incorporates the `IMPLEMENT_SERIAL` macro to support serialization and dumping of its elements. Each element is serialized in turn if a map is stored to an archive, either with the overloaded insertion ( **<<**) operator or with the `Serialize` member function.  
  
 If you need a dump of individual `CString`- `CString` elements, you must set the depth of the dump context to 1 or greater.  
  
 When a `CMapStringToString` object is deleted, or when its elements are removed, the `CString` objects are removed as appropriate.  
  
 For more information on `CMapStringToString`, see the article [Collections](../mfc/collections.md).  
  
## Inheritance Hierarchy  
 [CObject](../mfcref/cobject-class.md)  
  
 `CMapStringToString`  
  
## Requirements  
 **Header:** afxcoll.h  
  
##  <a name="cmapstringtostring__cpair"></a>  CMapStringToString::CPair  
 Contains a key value and the value of the associated string object.  
  
### Remarks  
 This is a nested structure within class [CMapStringToString](../mfcref/cmapstringtostring-class.md).  
  
 The structure is composed of two fields:  
  
-   **key** The actual value of the key type.  
  
-   **value** The value of the associated object.  
  
 It is used to store the return values from [CMapStringToString::PLookup](#cmapstringtostring__plookup), [CMapStringToString::PGetFirstAssoc](#cmapstringtostring__pgetfirstassoc), and [CMapStringToString::PGetNextAssoc](#cmapstringtostring__pgetnextassoc).  
  
### Example  
  For an example of usage, see the example for [CMapStringToString::PLookup](#cmapstringtostring__plookup).  
  
##  <a name="cmapstringtostring__pgetfirstassoc"></a>  CMapStringToString::PGetFirstAssoc  
 Returns the first entry of the map object.  
  
```  
const CPair* PGetFirstAssoc( ) const;   
CPair* PGetFirstAssoc( );  
```  
  
### Return Value  
 A pointer to the first entry in the map; see [CMapStringToString::CPair](#cmapstringtostring__cpair). If the map is empty, the value is `NULL`.  
  
### Remarks  
 Call this function to return a pointer the first element in the map object.  
  
### Example  
 [!code[NVC_MFCCollections#73](../mfc/codesnippet/CPP/cmapstringtostring-class_1.cpp)]  
  
##  <a name="cmapstringtostring__pgetnextassoc"></a>  CMapStringToString::PGetNextAssoc  
 Retrieves the map element pointed to by `pAssocRec`.  
  
```  
const CPair *PGetNextAssoc( const CPair* pAssoc ) const;  
  
CPair *PGetNextAssoc( const CPair* pAssoc );  
```  
  
### Parameters  
 *pAssoc*  
 Points to a map entry returned by a previous [PGetNextAssoc](#vclrfcmapstringtostringpgetnextassoc) or [PGetFirstAssoc](#cmapstringtostring__pgetfirstassoc) call.  
  
### Return Value  
 A pointer to the next entry in the map; see [CMapStringToString::CPair](#cmapstringtostring__cpair). If the element is the last in the map, the value is **NULL**.  
  
### Remarks  
 Call this method to iterate through all the elements in the map. Retrieve the first element with a call to `PGetFirstAssoc` and then iterate through the map with successive calls to `PGetNextAssoc`.  
  
### Example  
  See the example for [CMapStringToString::PGetFirstAssoc](#cmapstringtostring__pgetfirstassoc).  
  
##  <a name="cmapstringtostring__plookup"></a>  CMapStringToString::PLookup  
 Looks up the value mapped to a given key.  
  
```  
const CPair* PLookup(  
    LPCTSTR key ) const;  
CPair* PLookup(  
    LPCTSTR key );  
```  
  
### Parameters  
 `key`  
 A pointer to the key for the element to be searched for.  
  
### Return Value  
 A pointer to the specified key.  
  
### Remarks  
 Call this method to search for a map element with a key that exactly matches the given key.  
  
### Example  
 [!code[NVC_MFCCollections#74](../mfc/codesnippet/CPP/cmapstringtostring-class_2.cpp)]  
  
## See Also  
 [MFC Sample COLLECT](../top/visual-c---samples.md)   
 [CObject Class](../mfcref/cobject-class.md)   
 [Hierarchy Chart](../mfc/hierarchy-chart.md)