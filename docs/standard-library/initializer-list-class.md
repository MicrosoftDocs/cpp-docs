---
title: "initializer_list Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 1f2c0ff4-5636-4f79-b008-e75426e3d2ab
caps.latest.revision: 17
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
# initializer_list Class
Provides access to an array of elements in which each member is of the specified type.  
  
## Syntax  
  
```  
template <class Type>  
class initializer_list
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Type`|The element data type to be stored in the `initializer_list`.|  

  
## Remarks  
 An `initializer_list` can be constructed using a braced initializer list:  
  
```cpp  
initializer_list<int> i1{ 1, 2, 3, 4 };  
```  
  
 The compiler transforms braced initializer lists with homogeneous elements into an `initializer_list` whenever the function signature requires an `initializer_list`. For more details on using `initializer_list`, see [Uniform Initialization and Delegating Constructors](../cpp/uniform-initialization-and-delegating-constructors.md)  
  
### Constructors  
  
|||  
|-|-|  
|[initializer_list](../standard-library/forward-list-class.md#forward_list__forward_list)|Constructs an object of type `initializer_list`.|  
  
### Typedefs  
  
|||  
|-|-|  
|value_type|The type of the elements in the `initializer_list`.|  
|reference|A type that provides a reference to an element in the `initializer_list`.|  
|const_reference|A type that provides a constant reference to an element in the `initializer_list`.|  
|size_type|A type that represents the number of elements in the `initializer_list`.|  
|iterator|A type that provides an iterator for the `initializer_list`.|  
|const_iterator|A type that provides a constant iterator for the `initializer_list`.|  
  
### Member Functions  
  
|||  
|-|-|  
|[begin](#initializer_list__begin)|Returns a pointer to the first element in an `initializer_list`.|  
|[end](#initializer_list__end)|Returns a pointer to one past the last element in an `initializer_list`.|  
|[size](#initializer_list__size)|Returns the number of elements in the `initializer_list`.|  
  
## Requirements  
 **Header:** <initializer_list>  
  
 **Namespace:** std  
  
##  <a name="initializer_list__begin"></a>  initializer_list::begin  
 Returns a pointer to the first element in an `initializer_list`.  
  
```  
constexpr const InputIterator* begin() const noexcept;  
```  
  
### Return Value  
 A pointer to the first element of the `initializer_list`. If the list is empty, the pointer is the same for the beginning and end of the list.  
  
### Remarks  
  
##  <a name="initializer_list__end"></a>  initializer_list::end  
 Returns a pointer to one past the last element in an `initializer list`.  
  
```  
constexpr const InputIterator* end() const noexcept;  
```  
  
### Return Value  
 A pointer to one past the last element in the list. If the list is empty, this is the same as the pointer to the first element in the list.  
  
##  <a name="initializer_list__initializer_list"></a>  initializer_list::initializer_list  
 Constructs an object of type `initializer_list`.  
  
```  
constexpr initializer_list() noexcept;
initializer_list(const InputIterator First, const InputIterator Last);
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`First`|The position of the first element in the range of elements to be copied.|  
|`Last`|The position of the first element beyond the range of elements to be copied.|  
  
### Remarks  
 An `initializer_list` is based on an array of objects of the specified type. Copying an `initializer_list` creates a second instance of a list pointing to the same objects; the underlying objects are not copied.  
  
### Example  
  
```cpp  
// initializer_list_class.cpp  
// compile with: /EHsc  
#include <initializer_list>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
    // Create an empty initializer_list c0  
    initializer_list <int> c0;  
  
    // Create an initializer_list c1 with 1 element  
    initializer_list <int> c1{ 3 };  
  
    // Create an initializer_list c2 with 5 elements   
    initializer_list <int> c2{ 5, 4, 3, 2, 1 };  
  
    // Create a copy, initializer_list c3, of initializer_list c2  
    initializer_list <int> c3(c2);  
  
    // Create a initializer_list c4 by copying the range c3[ first,  last)  
    const int* c3_ptr = c3.begin();  
    c3_ptr++;  
    c3_ptr++;  
    initializer_list <int> c4(c3.begin(), c3_ptr);  
  
    // Move initializer_list c4 to initializer_list c5  
    initializer_list <int> c5(move(c4));  
  
    cout << "c1 =";  
    for (auto c : c1)  
        cout << " " << c;  
    cout << endl;  
  
    cout << "c2 =";  
    for (auto c : c2)  
        cout << " " << c;  
    cout << endl;  
  
    cout << "c3 =";  
    for (auto c : c3)  
        cout << " " << c;  
    cout << endl;  
  
    cout << "c4 =";  
    for (auto c : c4)  
        cout << " " << c;  
    cout << endl;  
  
    cout << "c5 =";  
    for (auto c : c5)  
        cout << " " << c;  
    cout << endl;  
}  
```  
  
```Output  
c1 = 3c2 = 5 4 3 2 1c3 = 5 4 3 2 1c4 = 5 4c5 = 5 4  
```  
  
##  <a name="initializer_list__size"></a>  initializer_list::size  
 Returns the number of elements in the list.  
  
```  
constexpr size_t size() const noexcept;  
```  
  
### Return Value  
 The number of elements in the list.  
  
### Remarks  
  
## See Also  
 [<forward_list>](../standard-library/forward-list.md)

