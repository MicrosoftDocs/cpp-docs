---
title: "Mutable Data Members (C++)"
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
ms.topic: language-reference
ms.assetid: ebe89746-3d36-43a8-8d69-f426af23f551
caps.latest.revision: 7
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
# Mutable Data Members (C++)
This keyword can only be applied to non-static and non-const data members of a class. If a data member is declared `mutable`, then it is legal to assign a value to this data member from a **const** member function.  
  
## Syntax  
  
```  
  
mutable member-variable-declaration;  
```  
  
## Remarks  
 For example, the following code will compile without error because `m_accessCount` has been declared to be `mutable`, and therefore can be modified by `GetFlag` even though `GetFlag` is a const member function.  
  
```  
// mutable.cpp  
class X  
{  
public:  
   bool GetFlag() const  
   {  
      m_accessCount++;  
      return m_flag;  
   }  
private:  
   bool m_flag;  
   mutable int m_accessCount;  
};  
  
int main()  
{  
}  
```  
  
## See Also  
 [Keywords](../VS_visualcpp/Keywords--C---.md)