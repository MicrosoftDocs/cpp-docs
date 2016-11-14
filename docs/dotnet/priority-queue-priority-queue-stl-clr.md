---
title: "priority_queue::priority_queue (STL-CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "cliext::priority_queue::priority_queue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "priority_queue member [STL/CLR]"
ms.assetid: aab423d7-959e-48fd-9028-e9f45f43cb8a
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
# priority_queue::priority_queue (STL/CLR)
Constructs a container adapter object.  
  
## Syntax  
  
```  
priority_queue();  
priority_queue(priority_queue<Value, Container> right);  
priority_queue(priority_queue<Value, Container> right);  
explicit priority_queue(value_compare^ pred);  
priority_queue(value_compare^ pred, container_type% cont);  
template<typename InIt>  
    priority_queue(InIt first, InIt last);  
template<typename InIt>  
    priority_queue(InIt first, InIt last,  
        value_compare^ pred);  
template<typename InIt>  
    priority_queue(InIt first, InIt last,  
        value_compare^ pred, container_type% cont);  
```  
  
#### Parameters  
 cont  
 Container to copy.  
  
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
  
 `priority_queue();`  
  
 creates an empty wrapped container, with the default ordering predicate. You use it to specify an empty initial controlled sequence, with the default ordering predicate.  
  
 The constructor:  
  
 `priority_queue(priority_queue<Value, Container>% right);`  
  
 creates a wrapped container that is a copy of `right.get_container()`, with the ordering predicate `right.value_comp()`. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the queue object `right`, with the same ordering predicate.  
  
 The constructor:  
  
 `priority_queue(priority_queue<Value, Container>^ right);`  
  
 creates a wrapped container that is a copy of `right->get_container()`, with the ordering predicate `right->value_comp()`. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the queue object `*right`, with the same ordering predicate.  
  
 The constructor:  
  
 `explicit priority_queue(value_compare^ pred);`  
  
 creates an empty wrapped container, with the ordering predicate `pred`. You use it to specify an empty initial controlled sequence, with the specified ordering predicate.  
  
 The constructor:  
  
 `priority_queue(value_compare^ pred, container_type cont);`  
  
 creates an empty wrapped container, with the ordering predicate `pred`, then pushes all the elements of `cont` You use it to specify an initial controlled sequence from an existing container, with the specified ordering predicate.  
  
 The constructor:  
  
 `template<typename InIt>`  
  
 `priority_queue(InIt first, InIt last);`  
  
 creates an empty wrapped container, with the default ordering predicate, then pushes the sequence `[``first``,` `last``)`. You use it to specify an initial controlled sequence from a specified eqeuence, with the specified ordering predicate.  
  
 The constructor:  
  
 `template<typename InIt>`  
  
 `priority_queue(InIt first, InIt last,`  
  
 `value_compare^ pred);`  
  
 creates an empty wrapped container, with the ordering predicate `pred`, then pushes the sequence `[``first``,` `last``)`. You use it to specify an initial controlled sequence from a specified seqeuence, with the specified ordering predicate.  
  
 The constructor:  
  
 `template<typename InIt>`  
  
 `priority_queue(InIt first, InIt last,`  
  
 `value_compare^ pred, container_type% cont);`  
  
 creates an empty wrapped container, with the ordering predicate `pred`, then pushes all the elements of `cont` plus the sequence `[``first``,` `last``)`. You use it to specify an initial controlled sequence from an existing container and a specified seqeuence, with the specified ordering predicate.  
  
## Example  
  
```  
// cliext_priority_queue_construct.cpp   
// compile with: /clr   
#include <cliext/queue>   
#include <cliext/deque>   
  
typedef cliext::priority_queue<wchar_t> Mypriority_queue;   
typedef cliext::deque<wchar_t> Mydeque;   
int main()   
    {   
// construct an empty container   
    Mypriority_queue c1;   
    Mypriority_queue::container_type^ wc1 = c1.get_container();   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
    c1.push(L'a');   
    c1.push(L'b');   
    c1.push(L'c');   
    for each (wchar_t elem in wc1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule   
    Mypriority_queue c2 = cliext::greater<wchar_t>();   
    System::Console::WriteLine("size() = {0}", c2.size());   
  
    for each (wchar_t elem in wc1)   
        c2.push(elem);   
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule by copying an underlying container   
    Mypriority_queue c2x =   
        gcnew Mypriority_queue(cliext::greater<wchar_t>(), *wc1);   
   for each (wchar_t elem in c2x.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range   
    Mypriority_queue c3(wc1->begin(), wc1->end());   
    for each (wchar_t elem in c3.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range and an ordering rule   
    Mypriority_queue c4(wc1->begin(), wc1->end(),   
        cliext::greater<wchar_t>());   
    for each (wchar_t elem in c4.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an iterator range, another container, and an ordering rule   
    Mypriority_queue c5(wc1->begin(), wc1->end(),   
        cliext::greater<wchar_t>(), *wc1);   
    for each (wchar_t elem in c5.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct from a generic container   
    Mypriority_queue c6(c3);   
    for each (wchar_t elem in c6.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Mypriority_queue c7(%c3);   
    for each (wchar_t elem in c7.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct with an ordering rule, by copying an underlying container   
    Mypriority_queue c8 =   
        gcnew Mypriority_queue(cliext::greater<wchar_t>(), *wc1);   
    for each (wchar_t elem in c8.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    return (0);   
    }  
  
```  
  
```Output  
size() = 0  
 c a b  
size() = 0  
 a c b  
 a c b  
 c a b  
 a c b  
 a a b c c b  
 c a b  
 c a b  
 a c b  
```  
  
## Requirements  
 **Header:** \<cliext/queue>  
  
 **Namespace:** cliext  
  
## See Also  
 [priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)   
 [priority_queue::assign (STL/CLR)](../dotnet/priority-queue-assign-stl-clr.md)   
 [priority_queue::generic_container (STL/CLR)](../dotnet/priority-queue-generic-container-stl-clr.md)   
 [priority_queue::operator= (STL/CLR)](../dotnet/priority-queue-operator-assign-stl-clr.md)