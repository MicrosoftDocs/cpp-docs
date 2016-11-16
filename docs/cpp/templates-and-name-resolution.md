---
title: "Templates and Name Resolution | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: 519ba7b5-cd25-4549-865a-9a7b9dffdc28
caps.latest.revision: 6
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
# Templates and Name Resolution
In template definitions, there are three types of names.  
  
-   Locally declared names, including the name of the template itself and any names declared inside the template definition.  
  
-   Names from the enclosing scope outside the template definition.  
  
-   Names that depend in some way on the template arguments, referred to as dependent names.  
  
 While the first two names also pertain to class and function scopes, special rules for name resolution are required in template definitions to deal with the added complexity of dependent names. This is because the compiler knows little about these names until the template is instantiated, because they could be totally different types depending on which template arguments are used. Nondependent names are looked up according to the usual rules and at the point of definition of the template. These names, being independent of the template arguments, are looked up once for all template specializations. Dependent names are not looked up until the template is instantiated and are looked up separately for each specialization.  
  
 A type is dependent if it depends on the template arguments. Specifically, a type is dependent if it is:  
  
-   The template argument itself:  
  
    ```  
    T  
    ```  
  
-   A qualified name with a qualification including a dependent type:  
  
    ```  
    T::myType  
    ```  
  
-   A qualified name if the unqualified part identifies a dependent type:  
  
    ```  
    N::T  
    ```  
  
-   A const or volatile type for which the base type is a dependent type:  
  
    ```  
    const T  
    ```  
  
-   A pointer, reference, array, or function pointer type based on a dependent type:  
  
    ```  
    T *, T &, T [10], T (*)()  
    ```  
  
-   An array whose size is based on a template parameter:  
  
    ```  
    template <int arg> class X {  
    int x[arg] ; // dependent type  
    }  
    ```  
  
-   a template type constructed from a template parameter:  
  
    ```  
    T<int>, MyTemplate<T>  
    ```  
  
## Type Dependence and Value Dependence  
 Names and expressions dependent on a template parameter are categorized as type dependent or value dependent, depending on whether the template parameter is a type parameter or a value parameter. Also, any identifiers declared in a template with a type dependent on the template argument are considered value dependent, as is a integral or enumeration type initialized with a value-dependent expression.  
  
 Type-dependent and value-dependent expressions are expressions that involve variables that are type dependent or value dependent. These expressions can have semantics that differ, depending on the parameters used for the template.  
  
## See Also  
 [Templates](../cpp/templates-cpp.md)