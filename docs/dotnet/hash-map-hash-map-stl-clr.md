---
title: "hash_map::hash_map (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_map::hash_map"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_map member [STL/CLR]"
ms.assetid: d65eb3fa-4bf9-4186-95f8-5517c90ef1fa
caps.latest.revision: 17
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
# hash_map::hash_map (STL/CLR)
Constructs a container object.  
  
## Syntax  
  
```  
hash_map();  
explicit hash_map(key_compare^ pred);  
hash_map(key_compare^ pred, hasher^ hashfn);  
hash_map(hash_map<Key, Mapped>% right);  
hash_map(hash_map<Key, Mapped>^ right);  
template<typename InIter>  
    hash_maphash_map(InIter first, InIter last);  
template<typename InIter>  
    hash_map(InIter first, InIter last,  
        key_compare^ pred);  
template<typename InIter>  
    hash_map(InIter first, InIter last,  
        key_compare^ pred, hasher^ hashfn);  
hash_map(System::Collections::Generic::IEnumerable<GValue>^ right);  
hash_map(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred);  
hash_map(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred, hasher^ hashfn);  
```  
  
#### Parameters  
 first  
 Beginning of range to insert.  
  
 hashfn  
 Hash function for mapping keys to buckets.  
  
 last  
 End of range to insert.  
  
 pred  
 Ordering predicate for the controlled sequence.  
  
 right  
 Object or range to insert.  
  
## Remarks  
 The constructor:  
  
 `hash_map();`  
  
 initializes the controlled sequence with no elements, with the default ordering predicate `key_compare()`, and with the default hash function. You use it to specify an empty initial controlled sequence, with the default ordering predicate and hash function.  
  
 The constructor:  
  
 `explicit hash_map(key_compare^ pred);`  
  
 initializes the controlled sequence with no elements, with the ordering predicate `pred`, and with the default hash function. You use it to specify an empty initial controlled sequence, with the specified ordering predicate and the default hash function.  
  
 The constructor:  
  
 `hash_map(key_compare^ pred, hasher^ hashfn);`  
  
 initializes the controlled sequence with no elements, with the ordering predicate `pred`, and with the hash function `hashfn`. You use it to specify an empty initial controlled sequence, with the specified ordering predicate and hash function.  
  
 The constructor:  
  
 `hash_map(hash_map<Key, Mapped>% right);`  
  
 initializes the controlled sequence with the sequence `[``right``.`[hash_map::begin (STL/CLR)](../dotnet/hash-map-begin-stl-clr.md)`(),` `right``.`[hash_map::end (STL/CLR)](../dotnet/hash-map-end-stl-clr.md)`())`, with the default ordering predicate, and with the default hash function. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the hash_map object `right`, with the default ordering predicate and hash function.  
  
 The constructor:  
  
 `hash_map(hash_map<Key, Mapped>^ right);`  
  
 initializes the controlled sequence with the sequence `[``right``->`[hash_map::begin (STL/CLR)](../dotnet/hash-map-begin-stl-clr.md)`(),` `right``->`[hash_map::end (STL/CLR)](../dotnet/hash-map-end-stl-clr.md)`())`, with the default ordering predicate, and with the default hash function. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the hash_map object `right`, with the default ordering predicate and hash function.  
  
 The constructor:  
  
 `template<typename InIter>`  
  
 `hash_map(InIter first, InIter last);`  
  
 initializes the controlled sequence with the sequence `[``first``,` `last``)`, with the default ordering predicate, and with the default hash function. You use it to make the controlled sequence a copy of another sequence, with the default ordering predicate and hash function.  
  
 The constructor:  
  
 `template<typename InIter>`  
  
 `hash_map(InIter first, InIter last,`  
  
 `key_compare^ pred);`  
  
 initializes the controlled sequence with the sequence `[``first``,` `last``)`, with the ordering predicate `pred`, and with the default hash function. You use it to make the controlled sequence a copy of another sequence, with the specified ordering predicate and the default hash function.  
  
 The constructor:  
  
 `template<typename InIter>`  
  
 `hash_map(InIter first, InIter last,`  
  
 `key_compare^ pred, hasher^ hashfn);`  
  
 initializes the controlled sequence with the sequence `[``first``,` `last``)`, with the ordering predicate `pred`, and with the hash function `hashfn`. You use it to make the controlled sequence a copy of another sequence, with the specified ordering predicate and hash function.  
  
 The constructor:  
  
 `hash_map(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 initializes the controlled sequence with the sequence designated by the enumerator `right`, with the default ordering predicate, and with the default hash function. You use it to make the controlled sequence a copy of another sequence described by an enumerator, with the default ordering predicate and hash function.  
  
 The constructor:  
  
 `hash_map(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred);`  
  
 initializes the controlled sequence with the sequence designated by the enumerator `right`, with the ordering predicate `pred`, and with the default hash function. You use it to make the controlled sequence a copy of another sequence described by an enumerator, with the specified ordering predicate and default hash function.  
  
 The constructor:  
  
 `hash_map(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred, hasher^ hashfn);`  
  
 initializes the controlled sequence with the sequence designated by the enumerator `right`, with the ordering predicate `pred`, and with the hash function `hashfn`. You use it to make the controlled sequence a copy of another sequence described by an enumerator, with the specified ordering predicate and hash function.  
  
## Example  
  
```  
// cliext_hash_map_construct.cpp   
// compile with: /clr   
#include <cliext/hash_map>   
  
int myfun(wchar_t key)   
    { // hash a key   
    return (key ^ 0xdeadbeef);   
    }   
  
typedef cliext::hash_map<wchar_t, int> Myhash_map;   
int main()   
    {   
// construct an empty container   
    Myhash_map c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(Myhash_map::make_value(L'a', 1));   
    c1.insert(Myhash_map::make_value(L'b', 2));   
    c1.insert(Myhash_map::make_value(L'c', 3));   
    for each (Myhash_map::value_type elem in c1)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Myhash_map c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (Myhash_map::value_type elem in c2)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an ordering rule and hash function   
    Myhash_map c2h(cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_map::hasher(&myfun));   
    System::Console::WriteLine("size() = {0}", c2h.size());   
  
    c2h.insert(c1.begin(), c1.end());   
    for each (Myhash_map::value_type elem in c2h)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Myhash_map c3(c1.begin(), c1.end());   
    for each (Myhash_map::value_type elem in c3)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Myhash_map c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (Myhash_map::value_type elem in c4)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule and hash function   
    Myhash_map c4h(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_map::hasher(&myfun));   
    for each (Myhash_map::value_type elem in c4h)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Myhash_map c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Myhash_map::value_type>^)%c3);   
    for each (Myhash_map::value_type elem in c5)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Myhash_map c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Myhash_map::value_type>^)%c3,   
                cliext::greater_equal<wchar_t>());   
    for each (Myhash_map::value_type elem in c6)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule and hash function   
    Myhash_map c6h(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<   
            Myhash_map::value_type>^)%c3,   
                cliext::greater_equal<wchar_t>(),   
                gcnew Myhash_map::hasher(&myfun));   
    for each (Myhash_map::value_type elem in c6h)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Myhash_map c7(c4);   
    for each (Myhash_map::value_type elem in c7)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
  
// construct by copying a container handle   
    Myhash_map c8(%c3);   
    for each (Myhash_map::value_type elem in c8)   
        System::Console::Write(" [{0} {1}]", elem->first, elem->second);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
size() = 0  
 [a 1] [b 2] [c 3]  
size() = 0  
 [a 1] [b 2] [c 3]  
size() = 0  
 [c 3] [b 2] [a 1]  
  
 [a 1] [b 2] [c 3]  
 [a 1] [b 2] [c 3]  
 [c 3] [b 2] [a 1]  
  
 [a 1] [b 2] [c 3]  
 [a 1] [b 2] [c 3]  
 [c 3] [b 2] [a 1]  
  
 [a 1] [b 2] [c 3]  
 [a 1] [b 2] [c 3]  
```  
  
## Requirements  
 **Header:** \<cliext/hash_map>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)   
 [hash_map::generic_container (STL/CLR)](../dotnet/hash-map-generic-container-stl-clr.md)   
 [hash_map::operator= (STL/CLR)](../dotnet/hash-map-operator-assign-stl-clr.md)