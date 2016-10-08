---
title: "stack::stack (STL-CLR)"
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
H1: stack::stack (STL/CLR)
ms.assetid: f1cfb3fe-4d22-41e5-906b-e8faa0bcde9b
caps.latest.revision: 13
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
# stack::stack (STL-CLR)
Constructs a container adapter object.  
  
## Syntax  
  
```  
stack();  
stack(stack<Value, Container>% right);  
stack(stack<Value, Container>^ right);  
explicit stack(container_type% wrapped);  
```  
  
#### Parameters  
 right  
 Object to copy.  
  
 wrapped  
 Wrapped container to use.  
  
## Remarks  
 The constructor:  
  
 `stack();`  
  
 creates an empty wrapped container. You use it to specify an empty initial controlled sequence.  
  
 The constructor:  
  
 `stack(stack<Value, Container>% right);`  
  
 creates a wrapped container that is a copy of `right.get_container()`. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the stack object `right`.  
  
 The constructor:  
  
 `stack(stack<Value, Container>^ right);`  
  
 creates a wrapped container that is a copy of `right->get_container()`. You use it to specify an initial controlled sequence that is a copy of the sequence controlled by the stack object `*right`.  
  
 The constructor:  
  
 `explicit stack(container_type% wrapped);`  
  
 uses the existing container `wrapped` as the wrapped container. You use it to construct a stack from an existing container.  
  
## Example  
  
```  
// cliext_stack_construct.cpp   
// compile with: /clr   
#include <cliext/stack>   
#include <cliext/vector>   
  
typedef cliext::stack<wchar_t> Mystack;   
typedef cliext::vector<wchar_t> Myvector;   
typedef cliext::stack<wchar_t, Myvector> Mystack_vec;   
int main()   
    {   
// construct an empty container   
    Mystack c1;   
    System::Console::WriteLine("size() = {0}", c1.size());   
  
// construct from an underlying container   
    Myvector v2(5, L'x');   
    Mystack_vec c2(v2);       
    for each (wchar_t elem in c2.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container   
    Mystack_vec c3(c2);   
    for each (wchar_t elem in c3.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct by copying another container through handle   
    Mystack_vec c4(%c2);   
    for each (wchar_t elem in c4.get_container())   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }  
  
```  
  
 **size() = 0**  
 **x x x x x**  
 **x x x x x**  
 **x x x x x**   
## Requirements  
 **Header:** <cliext/stack>  
  
 **Namespace:** cliext  
  
## See Also  
 [stack (STL/CLR)](../VS_visualcpp/stack--STL-CLR-.md)   
 [stack::assign (STL/CLR)](../VS_visualcpp/stack--assign--STL-CLR-.md)   
 [stack::generic_container (STL/CLR)](../VS_visualcpp/stack--generic_container--STL-CLR-.md)   
 [stack::operator= (STL/CLR)](../VS_visualcpp/stack--operator=--STL-CLR-.md)