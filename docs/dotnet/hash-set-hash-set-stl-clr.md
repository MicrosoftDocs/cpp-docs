---
title: "hash_set::hash_set (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::hash_set::hash_set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hash_set member [STL/CLR]"
ms.assetid: 006414ed-db5a-4c08-ac81-4a8ae57d0aad
caps.latest.revision: 18
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
# hash_set::hash_set (STL/CLR)
Constructs a container object.  
  
## Syntax  
  
```  
hash_set();  
explicit hash_set(key_compare^ pred);  
hash_set(key_compare^ pred, hasher^ hashfn);  
hash_set(hash_set<Key>% right);  
hash_set(hash_set<Key>^ right);  
template<typename InIter>  
    hash_sethash_set(InIter first, InIter last);  
template<typename InIter>  
    hash_set(InIter first, InIter last,  
        key_compare^ pred);  
template<typename InIter>  
    hash_set(InIter first, InIter last,  
        key_compare^ pred, hasher^ hashfn);  
hash_set(System::Collections::Generic::IEnumerable<GValue>^ right);  
hash_set(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred);  
hash_set(System::Collections::Generic::IEnumerable<GValue>^ right,  
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
  
 `hash_set();`  
  
 initializes the controlled sequence with no elements, with the default ordering predicate `key_compare()`, and with the default hash function. You use it to specify an empty initial controlled sequence, with the default ordering predicate and hash function.  
  
 The constructor:  
  
 `explicit hash_set(key_compare^ pred);`  
  
 initializes the controlled sequence with no elements, with the ordering predicate `pred`, and with the default hash function. You use it to specify an empty initial controlled sequence, with the specified ordering predicate and the default hash function.  
  
 The constructor:  
  
 `hash_set(key_compare^ pred, hasher^ hashfn);`  
  
 initializes the controlled sequence with no elements, with the ordering predicate `pred`, and with the hash function `hashfn`. You use it to specify an empty initial controlled sequence, with the specified ordering predicate and hash function.  
  
 The constructor:  
  
 `hash_set(hash_set<Key>% right);`  
  
 initializes the controlled sequence with the sequence `[``right``.`[hash_set::begin (STL/CLR)](../dotnet/hash-set-begin-stl-clr.md)`(),` `right``.`[hash_set::end (STL/CLR)](../dotnet/hash-set-end-stl-clr.md)`())`, with the default ordering predicate, and with the default hash function. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the hash_set object `right`, with the default ordering predicate and hash function.  
  
 The constructor:  
  
 `hash_set(hash_set<Key>^ right);`  
  
 initializes the controlled sequence with the sequence `[``right``->`[hash_set::begin (STL/CLR)](../dotnet/hash-set-begin-stl-clr.md)`(),` `right``->`[hash_set::end (STL/CLR)](../dotnet/hash-set-end-stl-clr.md)`())`, with the default ordering predicate, and with the default hash function. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the hash_set object `right`, with the default ordering predicate and hash function.  
  
 The constructor:  
  
 `template<typename InIter>`  
  
 `hash_set(InIter first, InIter last);`  
  
 initializes the controlled sequence with the sequence `[``first``,` `last``)`, with the default ordering predicate, and with the default hash function. You use it to make the controlled sequence a copy of another sequence, with the default ordering predicate and hash function.  
  
 The constructor:  
  
 `template<typename InIter>`  
  
 `hash_set(InIter first, InIter last,`  
  
 `key_compare^ pred);`  
  
 initializes the controlled sequence with the sequence `[``first``,` `last``)`, with the ordering predicate `pred`, and with the default hash function. You use it to make the controlled sequence a copy of another sequence, with the specified ordering predicate and the default hash function.  
  
 The constructor:  
  
 `template<typename InIter>`  
  
 `hash_set(InIter first, InIter last,`  
  
 `key_compare^ pred, hasher^ hashfn);`  
  
 initializes the controlled sequence with the sequence `[``first``,` `last``)`, with the ordering predicate `pred`, and with the hash function `hashfn`. You use it to make the controlled sequence a copy of another sequence, with the specified ordering predicate and hash function.  
  
 The constructor:  
  
 `hash_set(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 initializes the controlled sequence with the sequence designated by the enumerator `right`, with the default ordering predicate, and with the default hash function. You use it to make the controlled sequence a copy of another sequence described by an enumerator, with the default ordering predicate and hash function.  
  
 The constructor:  
  
 `hash_set(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred);`  
  
 initializes the controlled sequence with the sequence designated by the enumerator `right`, with the ordering predicate `pred`, and with the default hash function. You use it to make the controlled sequence a copy of another sequence described by an enumerator, with the specified ordering predicate and default hash function.  
  
 The constructor:  
  
 `hash_set(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred, hasher^ hashfn);`  
  
 initializes the controlled sequence with the sequence designated by the enumerator `right`, with the ordering predicate `pred`, and with the hash function `hashfn`. You use it to make the controlled sequence a copy of another sequence described by an enumerator, with the specified ordering predicate and hash function.  
  
## Example  
  
```  
// cliext_hash_set_construct.cpp   
// compile with: /clr   
#include <cliext/hash_set>   
  
int myfun(wchar_t key)   
    { // hash a key   
    return (key ^ 0xdeadbeef);   
    }   
  
typedef cliext::hash_set<wchar_t> Myhash_set;   
int main()   
    {   
// construct an empty container   
    Myhash_set c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Myhash_set c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule and hash function   
    Myhash_set c2h(cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_set::hasher(&myfun));   
    System::Console::WriteLine("size() = {0}", c2h.size());   
  
    c2h.insert(c1.begin(), c1.end());   
    for each (wchar_t elem in c2h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Myhash_set c3(c1.begin(), c1.end());   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Myhash_set c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule and hash function   
    Myhash_set c4h(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>(),   
        gcnew Myhash_set::hasher(&myfun));   
    for each (wchar_t elem in c4h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Myhash_set c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Myhash_set c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,   
            cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c6)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule and hash function   
    Myhash_set c6h(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,   
            cliext::greater_equal<wchar_t>(),   
                gcnew Myhash_set::hasher(&myfun));   
    for each (wchar_t elem in c6h)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    System::Console::WriteLine();   
  
// construct from a generic container   
    Myhash_set c7(c4);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Myhash_set c8(%c3);   
    for each (wchar_t elem in c8)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
size() = 0  
 a b c  
size() = 0  
 a b c  
size() = 0  
 c b a  
  
 a b c  
 a b c  
 c b a  
  
 a b c  
 a b c  
 c b a  
  
 a b c  
 a b c  
```  
  
## Requirements  
 **Header:** \<cliext/hash_set>  
  
 **Namespace:** cliext  
  
## See Also  
 [hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)   
 [hash_set::generic_container (STL/CLR)](../dotnet/hash-set-generic-container-stl-clr.md)   
 [hash_set::operator= (STL/CLR)](../dotnet/hash-set-operator-assign-stl-clr.md)