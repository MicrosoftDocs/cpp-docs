---
title: "set::set (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::set::set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "set member [STL/CLR]"
ms.assetid: 0cce8501-92ed-431c-b711-14e0b7be7375
caps.latest.revision: 15
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
# set::set (STL/CLR)
Constructs a container object.  
  
## Syntax  
  
```  
set();  
explicit set(key_compare^ pred);  
set(set<Key>% right);  
set(set<Key>^ right);  
template<typename InIter>  
    setset(InIter first, InIter last);  
template<typename InIter>  
    set(InIter first, InIter last,  
        key_compare^ pred);  
set(System::Collections::Generic::IEnumerable<GValue>^ right);  
set(System::Collections::Generic::IEnumerable<GValue>^ right,  
    key_compare^ pred);  
```  
  
#### Parameters  
 first  
 Beginning of range to insert.  
  
 last  
 End of range to insert.  
  
 pred  
 Ordering predicate for the controlled sequence.  
  
 right  
 Object or range to insert.  
  
## Remarks  
 The constructor:  
  
 `set();`  
  
 initializes the controlled sequence with no elements, with the default ordering predicate `key_compare()`. You use it to specify an empty initial controlled sequence, with the default ordering predicate.  
  
 The constructor:  
  
 `explicit set(key_compare^ pred);`  
  
 initializes the controlled sequence with no elements, with the ordering predicate `pred`. You use it to specify an empty initial controlled sequence, with the specified ordering predicate.  
  
 The constructor:  
  
 `set(set<Key>% right);`  
  
 initializes the controlled sequence with the sequence `[``right``.`[set::begin (STL/CLR)](../dotnet/set-begin-stl-clr.md)`(),` `right``.`[set::end (STL/CLR)](../dotnet/set-end-stl-clr.md)`())`, with the default ordering predicate. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the set object `right`, with the default ordering predicate.  
  
 The constructor:  
  
 `set(set<Key>^ right);`  
  
 initializes the controlled sequence with the sequence `[``right``->`[set::begin (STL/CLR)](../dotnet/set-begin-stl-clr.md)`(),` `right``->`[set::end (STL/CLR)](../dotnet/set-end-stl-clr.md)`())`, with the default ordering predicate. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the set object `right`, with the default ordering predicate.  
  
 The constructor:  
  
 `template<typename InIter>`  
  
 `set(InIter first, InIter last);`  
  
 initializes the controlled sequence with the sequence `[``first``,` `last``)`, with the default ordering predicate. You use it to make the controlled sequence a copy of another sequence, with the default ordering predicate.  
  
 The constructor:  
  
 `template<typename InIter>`  
  
 `set(InIter first, InIter last,`  
  
 `key_compare^ pred);`  
  
 initializes the controlled sequence with the sequence `[``first``,` `last``)`, with the ordering predicate `pred`. You use it to make the controlled sequence a copy of another sequence, with the specified ordering predicate.  
  
 The constructor:  
  
 `set(System::Collections::Generic::IEnumerable<Key>^ right);`  
  
 initializes the controlled sequence with the sequence designated by the enumerator `right`, with the default ordering predicate. You use it to make the controlled sequence a copy of another sequence described by an enumerator, with the default ordering predicate.  
  
 The constructor:  
  
 `set(System::Collections::Generic::IEnumerable<Key>^ right,`  
  
 `key_compare^ pred);`  
  
 initializes the controlled sequence with the sequence designated by the enumerator `right`, with the ordering predicate `pred`. You use it to make the controlled sequence a copy of another sequence described by an enumerator, with the specified ordering predicate.  
  
## Example  
  
```  
// cliext_set_construct.cpp   
// compile with: /clr   
#include <cliext/set>   
  
typedef cliext::set<wchar_t> Myset;   
int main()   
    {   
// construct an empty container   
    Myset c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.insert(L'a');   
    c1.insert(L'b');   
    c1.insert(L'c');   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Myset c2 = cliext::greater_equal<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    c2.insert(c1.begin(), c1.end());   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Myset c3(c1.begin(), c1.end());   
    for each (wchar_t elem in c3)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Myset c4(c1.begin(), c1.end(),   
        cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c4)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration   
    Myset c5(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3);   
    for each (wchar_t elem in c5)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an enumeration and an ordering rule   
    Myset c6(   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c3,   
            cliext::greater_equal<wchar_t>());   
    for each (wchar_t elem in c6)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct from a generic container   
    Myset c7(c4);   
    for each (wchar_t elem in c7)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Myset c8(%c3);   
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
 c b a  
 a b c  
 c b a  
 a b c  
 c b a  
 c b a  
 a b c  
```  
  
## Requirements  
 **Header:** \<cliext/set>  
  
 **Namespace:** cliext  
  
## See Also  
 [set (STL/CLR)](../dotnet/set-stl-clr.md)   
 [set::generic_container (STL/CLR)](../dotnet/set-generic-container-stl-clr.md)   
 [set::operator= (STL/CLR)](../dotnet/set-operator-assign-stl-clr.md)