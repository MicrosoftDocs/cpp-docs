---
title: "_com_ptr_t Extractors"
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
ms.assetid: 194b9e0e-123c-49ff-a187-0a7fcd68145a
caps.latest.revision: 6
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
# _com_ptr_t Extractors
**Microsoft Specific**  
  
 Extract the encapsulated COM interface pointer.  
  
## Syntax  
  
```  
  
      operator Interface*( ) const throw( );   
operator Interface&( ) const;   
Interface& operator*( ) const;   
Interface* operator->( ) const;   
Interface** operator&( ) throw( );   
operator bool( ) const throw( );  
```  
  
## Remarks  
  
-   **operator Interface\*** Returns the encapsulated interface pointer, which may be **NULL**.  
  
-   **operator Interface&** Returns a reference to the encapsulated interface pointer, and issues an error if the pointer is **NULL**.  
  
-   **operator\*** Allows a smart pointer object to act as though it were the actual encapsulated interface when dereferenced.  
  
-   **operator->** Allows a smart pointer object to act as though it were the actual encapsulated interface when dereferenced.  
  
-   **operator&** Releases any encapsulated interface pointer, replacing it with **NULL**, and returns the address of the encapsulated pointer. This allows the smart pointer to be passed by address to a function that has an **out** parameter through which it returns an interface pointer.  
  
-   **operator bool** Allows a smart pointer object to be used in a conditional expression. This operator returns **true** if the pointer is not **NULL**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_ptr_t Class](../VS_visualcpp/_com_ptr_t-Class.md)