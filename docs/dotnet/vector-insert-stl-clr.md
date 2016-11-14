---
title: "vector::insert (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::vector::insert"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "insert member [STL/CLR]"
ms.assetid: f240cabf-f9d1-40c1-9cfb-975a90955546
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
# vector::insert (STL/CLR)
Adds elements at a specified position.  
  
## Syntax  
  
```  
iterator insert(iterator where, value_type val);  
void insert(iterator where, size_type count, value_type val);  
template<typename InIt>  
    void insert(iterator where, InIt first, InIt last);  
void insert(iterator where,  
    System::Collections::Generic::IEnumerable<Value>^ right);  
```  
  
#### Parameters  
 count  
 Number of elements to insert.  
  
 first  
 Beginning of range to insert.  
  
 last  
 End of range to insert.  
  
 right  
 Enumeration to insert.  
  
 val  
 Value of the element to insert.  
  
 where  
 Where in container to insert before.  
  
## Remarks  
 Each of the member functions inserts, before the element pointed to by `where` in the controlled sequence, a sequence specified by the remaining operands.  
  
 The first member function inserts an element with value `val` and returns an iterator that designates the newly inserted element. You use it to insert a single element before a place designated by an iterator.  
  
 The second member function inserts a repetition of `count` elements of value `val`. You use it to insert zero or more contiguous elements which are all copies of the same value.  
  
 If `InIt` is an integer type, the third member function behaves the same as `insert(``where``, (size_type)``first``, (value_type)``last``)`. Otherwise, it inserts the sequence `[``first``,` `last``)`. You use it to insert zero or more contiguous elements copied from another sequence.  
  
 The fourth member function inserts the sequence designated by the `right`. You use it to insert a sequence described by an enumerator.  
  
 When inserting a single element, the number of element copies is linear in the number of elements between the insertion point and the nearer end of the sequence. (When inserting one or more elements at either end of the sequence, no element copies occur.) If `InIt` is an input iterator, the third member function effectively performs a single insertion for each element in the sequence. Otherwise, when inserting `N` elements, the number of element copies is linear in `N` plus the number of elements between the insertion point and the nearer end of the sequence.  
  
## Example  
  
```  
// cliext_vector_insert.cpp   
// compile with: /clr   
#include <cliext/vector>   
  
int main()   
    {   
    cliext::vector<wchar_t> c1;   
    c1.push_back(L'a');   
    c1.push_back(L'b');   
    c1.push_back(L'c');   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a single value using iterator   
    cliext::vector<wchar_t>::iterator it = c1.begin();   
    System::Console::WriteLine("insert(begin()+1, L'x') = {0}",   
        *c1.insert(++it, L'x'));   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert a repetition of values   
    cliext::vector<wchar_t> c2;   
    c2.insert(c2.begin(), 2, L'y');   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an iterator range   
    it = c1.end();   
    c2.insert(c2.end(), c1.begin(), --it);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// insert an enumeration   
    c2.insert(c2.begin(),   // NOTE: cast is not needed   
        (System::Collections::Generic::IEnumerable<wchar_t>^)%c1);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
```Output  
 a b c  
insert(begin()+1, L'x') = x  
 a x b c  
 y y  
 y y a x b  
 a x b c y y a x b  
```  
  
## Requirements  
 **Header:** \<cliext/vector>  
  
 **Namespace:** cliext  
  
## See Also  
 [vector (STL/CLR)](../dotnet/vector-stl-clr.md)   
 [vector::assign (STL/CLR)](../dotnet/vector-assign-stl-clr.md)