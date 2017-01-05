---
title: "ctype&lt;char&gt; Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ctype<char>"
  - "locale/std::ctype<char>"
  - "std::ctype<char>"
  - "std.ctype<char>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ctype<char> class"
ms.assetid: ee30acb4-a743-405e-b3d4-13602092da84
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
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
# ctype&lt;char&gt; Class
The class is an explicit specialization of template class **ctype\<CharType**> to type `char`, describing an object that can serve as a locale facet to characterize various properties of a character of type `char`.  
  
## Syntax  
  
```  
template <>  
class ctype<char>  
: public ctype_base  
{  
public:  
    typedef char _Elem;  
    typedef _Elem char_type;  
    bool is(
    mask _Maskval,  
    _Elem _Ch) const;

 
    const _Elem* is(
    const _Elem* first,  
    const _Elem* last,  
    mask* dest) const;

 
    const _Elem* scan_is(
    mask _Maskval,  
    const _Elem* first,  
    const _Elem* last) const;

 
    const _Elem* scan_not(
    mask _Maskval,  
    const _Elem* first,  
    const _Elem* last) const;

 
    _Elem tolower(
    _Elem _Ch) const;

 
    const _Elem* tolower(
    _Elem* first,  
    const _Elem* last) const;

 
    _Elem toupper(
    _Elem _Ch) const;

 
    const _Elem* toupper(
    _Elem* first,  
    const _Elem* last) const;

 
    _Elem widen(
    char _Byte) const;

 
    const _Elem* widen(
    const char* first,  
    const char* last,  
    _Elem* dest) const;

 
    const _Elem* _Widen_s(
    const char* first,  
    const char* last,  
    _Elem* dest,  
    size_t dest_size) const;

 
    _Elem narrow(
    _Elem _Ch,  
    char _Dflt = '\0') const;

 
    const _Elem* narrow(
    const _Elem* first,  
    const _Elem* last,  
    char _Dflt,  
    char* dest) const;

 
    const _Elem* _Narrow_s(
    const _Elem* first,  
    const _Elem* last,  
    char _Dflt,  
    char* dest,  
    size_t dest_size) const;

 
    static locale::id& id;  
    explicit ctype(
    const mask* _Table = 0,  
    bool _Deletetable = false,  
    size_t _Refs = 0);

protected:  
    virtual ~ctype();
//other protected members  
};  
```  
  
## Remarks  
 The explicit specialization differs from the template class in several ways:  
  
-   An object of class ctype< `char`> stores a pointer to the first element of a ctype mask table, an array of UCHAR_MAX + 1 elements of type **ctype_base::mask**. It also stores a Boolean object that indicates whether the array should be deleted (using `operator delete[]`) when the ctype\< **Elem**> object is destroyed.  
  
-   Its sole public constructor lets you specify **tab**, the ctype mask table, and **del**, the Boolean object that is true if the array should be deleted when the ctype< `char`> object is destroyed, as well as the reference-count parameter refs.  
  
-   The protected member function **table** returns the stored ctype mask table.  
  
-   The static member object **table_size** specifies the minimum number of elements in a ctype mask table.  
  
-   The protected static member function **classic_table**( returns the ctype mask table appropriate to the "C" locale.  
  
-   There are no protected virtual member functions [do_is](../standard-library/ctype-class.md#ctype__do_is), [do_scan_is](../standard-library/ctype-class.md#ctype__do_scan_is), or [do_scan_not](../standard-library/ctype-class.md#ctype__do_scan_not). The corresponding public member functions perform the equivalent operations themselves.  
  
 The member functions [do_narrow](../standard-library/ctype-class.md#ctype__do_narrow) and [do_widen](../standard-library/ctype-class.md#ctype__do_widen) copy elements unaltered.  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
## See Also  
 [facet Class](http://msdn.microsoft.com/Library/dd4f12f5-cb1b-457f-af56-2fb204216ec1)   
 [ctype_base Class](../standard-library/ctype-base-class.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

