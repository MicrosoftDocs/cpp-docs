---
title: "Compiler Support for Type Traits (C++ Component Extensions) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__is_simple_value_class"
  - "__has_trivial_destructor"
  - "__has_assign"
  - "__is_union"
  - "__is_class"
  - "__is_abstract"
  - "__has_trivial_assign"
  - "__has_virtual_destructor"
  - "__is_ref_array"
  - "__is_base_of"
  - "__has_copy"
  - "__is_polymorphic"
  - "__has_nothrow_constructor"
  - "__is_ref_class"
  - "__is_delegate"
  - "__is_convertible_to"
  - "__is_value_class"
  - "__is_interface_class"
  - "__has_nothrow_copy"
  - "__is_sealed"
  - "__has_trivial_constructor"
  - "__has_trivial_copy"
  - "__is_enum"
  - "__has_nothrow_assign"
  - "__has_finalizer"
  - "__is_empty"
  - "__is_pod"
  - "__has_user_destructor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__is_class keyword [C++]"
  - "__is_pod keyword [C++]"
  - "__is_delegate keyword [C++]"
  - "__is_value_class keyword [C++]"
  - "__has_copy keyword [C++]"
  - "__has_nothrow_copy keyword [C++]"
  - "__is_interface_class keyword [C++]"
  - "__is_sealed keyword [C++]"
  - "__is_convertible_to keyword [C++]"
  - "__is_ref_class keyword [C++]"
  - "__has_trivial_copy keyword [C++]"
  - "__has_user_destructor keyword [C++]"
  - "__is_abstract keyword [C++]"
  - "__is_empty keyword [C++]"
  - "__has_trivial_assign keyword [C++]"
  - "__has_nothrow_constructor keyword [C++]"
  - "__is_ref_array keyword [C++]"
  - "__is_base_of keyword [C++]"
  - "__has_nothrow_assign keyword [C++]"
  - "__has_virtual_destructor keyword [C++]"
  - "__has_finalizer keyword [C++]"
  - "__is_union keyword [C++]"
  - "__has_assign keyword [C++]"
  - "__has_trivial_destructor keyword [C++]"
  - "__is_polymorphic keyword [C++]"
  - "__is_enum keyword [C++]"
  - "__is_simple_value_class keyword [C++]"
  - "__has_trivial_constructor keyword [C++]"
ms.assetid: cd440630-0394-48c0-a16b-1580b6ef5844
caps.latest.revision: 27
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
# Compiler Support for Type Traits (C++ Component Extensions)
The compiler supports *type traits*, which indicate various characteristics of a type at compile time.  
  
## All Runtimes  
 **Remarks**  
  
 Type traits are especially useful to programmers who write libraries.  
  
 The following list contains the type traits that are supported by the compiler. All type traits return `false` if the condition specified by the name of the type trait is not met.  
  
 (In the following list, code examples are written only in [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)]. But the corresponding type trait is also supported in [!INCLUDE[cppwrt](../build/reference/includes/cppwrt_md.md)] unless stated otherwise. The term, "platform type" refers to either [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] types or common language runtime types.)  
  
-   `__has_assign(` `type` `)`  
  
     Returns true if the platform or native type has a copy assignment operator.  
  
    ```  
  
    ref struct R {  
    void operator=(R% r) {}  
    };  
  
    int main() {  
    System::Console::WriteLine(__has_assign(R));  
    }  
  
    ```  
  
-   `__has_copy(` `type` `)`  
  
     Returns true if the platform or native type has a copy constructor.  
  
    ```  
  
    ref struct R {  
    R(R% r) {}  
    };  
  
    int main() {  
    System::Console::WriteLine(__has_copy(R));  
    }  
  
    ```  
  
-   `__has_finalizer(` `type` `)`  
  
     (Not supported in [!INCLUDE[cppwrt](../build/reference/includes/cppwrt_md.md)].) Returns true if the CLR type has a finalizer. See [Destructors and finalizers in How to: Define and consume classes and structs (C++/CLI)](../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers) for more information.  
  
    ```  
  
    using namespace System;  
    ref struct R {  
    ~R() {}  
    protected:  
    !R() {}  
    };  
  
    int main() {  
    Console::WriteLine(__has_finalizer(R));  
    }  
  
    ```  
  
-   `__has_nothrow_assign(` `type` `)`  
  
     Returns true if a copy assignment operator has an empty exception specification.  
  
    ```  
  
    #include <stdio.h>  
    struct S {  
    void operator=(S& r) throw() {}  
    };  
  
    int main() {  
    __has_nothrow_assign(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_nothrow_constructor(` `type` `)`  
  
     Returns true if the default constructor has an empty exception specification.  
  
    ```  
  
    #include <stdio.h>  
    struct S {  
    S() throw() {}  
    };  
  
    int main() {  
    __has_nothrow_constructor(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_nothrow_copy(` `type` `)`  
  
     Returns true if the copy constructor has an empty exception specification.  
  
    ```  
  
    #include <stdio.h>  
    struct S {  
    S(S& r) throw() {}  
    };  
  
    int main() {  
    __has_nothrow_copy(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_trivial_assign(` `type` `)`  
  
     Returns true if the type has a trivial, compiler-generated assignment operator.  
  
    ```  
  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __has_trivial_assign(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_trivial_constructor(` `type` `)`  
  
     Returns true if the type has a trivial, compiler-generated constructor.  
  
    ```  
  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __has_trivial_constructor(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_trivial_copy(` `type` `)`  
  
     Returns true if the type has a trivial, compiler-generated copy constructor.  
  
    ```  
  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __has_trivial_copy(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_trivial_destructor(` `type` `)`  
  
     Returns true if the type has a trivial, compiler-generated destructor.  
  
    ```  
  
    // has_trivial_destructor.cpp  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __has_trivial_destructor(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__has_user_destructor(` `type` `)`  
  
     Returns true if the platform or native type has a user-declared destructor.  
  
    ```  
  
    // has_user_destructor.cpp  
  
    using namespace System;  
    ref class R {  
    ~R() {}  
    };  
  
    int main() {  
    Console::WriteLine(__has_user_destructor(R));  
    }  
  
    ```  
  
-   `__has_virtual_destructor(` `type` `)`  
  
     Returns true if the type has a virtual destructor.  
  
     `__has_virtual_destructor` also works on platform types, and any user-defined destructor in a platform type is a virtual destructor.  
  
    ```  
  
    // has_virtual_destructor.cpp  
    #include <stdio.h>  
    struct S {  
    virtual ~S() {}  
    };  
  
    int main() {  
    __has_virtual_destructor(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_abstract(` `type` `)`  
  
     Returns true if the type is an abstract type. For more information on native abstract types, see [abstract](../windows/abstract-cpp-component-extensions.md).  
  
     `__is_abstract` also works for platform types. An interface with at least one member is an abstract type, as is a reference type with at least one abstract member. For more information on abstract platform types, see [Abstract Classes](../cpp/abstract-classes-cpp.md)  
  
    ```  
  
    // is_abstract.cpp  
    #include <stdio.h>  
    struct S {  
    virtual void Test() = 0;  
    };  
  
    int main() {  
    __is_abstract(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_base_of(` `base` `,` `derived` `)`  
  
     Returns true if the first type is a base class of the second type, of if both types are the same.  
  
     `__is_base_of` also works on platform types. For example, it will return true if the first type is an [interface class](../windows/interface-class-cpp-component-extensions.md) and the second type implements the interface.  
  
    ```  
  
    // is_base_of.cpp  
    #include <stdio.h>  
    struct S {};  
    struct T : public S {};  
  
    int main() {  
    __is_base_of(S, T) == true ?  
    printf("true\n") : printf("false\n");  
  
    __is_base_of(S, S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_class(` `type` `)`  
  
     Returns true if the type is a native class or struct.  
  
    ```  
  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __is_class(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_convertible_to(` `from` `,`  `to` `)`  
  
     Returns true if the first type can be converted to the second type.  
  
    ```  
  
    #include <stdio.h>  
    struct S {};  
    struct T : public S {};  
  
    int main() {  
    S * s = new S;  
    T * t = new T;  
    s = t;  
    __is_convertible_to(T, S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_delegate(` `type` `)`  
  
     Returns true if `type` is a delegate. For more information, see [delegate  (C++ Component Extensions)](../windows/delegate-cpp-component-extensions.md).  
  
    ```  
  
    delegate void MyDel();  
    int main() {  
    System::Console::WriteLine(__is_delegate(MyDel));  
    }  
  
    ```  
  
-   `__is_empty(` `type` `)`  
  
     Returns true if the type has no instance data members.  
  
    ```  
  
    #include <stdio.h>  
    struct S {  
    int Test() {}  
    static int i;  
    };  
    int main() {  
    __is_empty(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_enum(` `type` `)`  
  
     Returns true if the type is a native enum.  
  
    ```  
  
    // is_enum.cpp  
    #include <stdio.h>  
    enum E { a, b };  
  
    struct S {  
    enum E2 { c, d };  
    };  
  
    int main() {  
    __is_enum(E) == true ?  
    printf("true\n") : printf("false\n");  
  
    __is_enum(S::E2) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_interface_class(` `type` `)`  
  
     Returns true if passed a platform interface. For more information, see [interface class](../windows/interface-class-cpp-component-extensions.md).  
  
    ```  
  
    // is_interface_class.cpp  
  
    using namespace System;  
    interface class I {};  
    int main() {  
    Console::WriteLine(__is_interface_class(I));  
    }  
  
    ```  
  
-   `__is_pod(` `type` `)`  
  
     Returns true if the type is a class or union with no constructor or private or protected non-static members, no base classes, and no virtual functions. See the C++ standard, sections 8.5.1/1, 9/4, and 3.9/10 for more information on PODs.  
  
     `__is_pod` will return false on fundamental types.  
  
    ```  
  
    #include <stdio.h>  
    struct S {};  
  
    int main() {  
    __is_pod(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_polymorphic(` `type` `)`  
  
     Returns true if a native type has virtual functions.  
  
    ```  
  
    #include <stdio.h>  
    struct S {  
    virtual void Test(){}  
    };  
  
    int main() {  
    __is_polymorphic(S) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_ref_array(` `type` `)`  
  
     Returns true if passed a platform array. For more information, see [Arrays](../windows/arrays-cpp-component-extensions.md).  
  
    ```  
  
    using namespace System;  
    int main() {  
    array<int>^ x = gcnew array<int>(10);  
    Console::WriteLine(__is_ref_array(array<int>));  
    }  
  
    ```  
  
-   `__is_ref_class(` `type` `)`  
  
     Returns true if passed a reference class. For more information on user-defined reference types, see [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md).  
  
    ```  
  
    using namespace System;  
    ref class R {};  
    int main() {  
    Console::WriteLine(__is_ref_class(Buffer));  
    Console::WriteLine(__is_ref_class(R));  
    }  
  
    ```  
  
-   `__is_sealed(` `type` `)`  
  
     Returns true if passed a platform or native type marked sealed. For more information, see [sealed](../windows/sealed-cpp-component-extensions.md).  
  
    ```  
  
    ref class R sealed{};  
    int main() {  
    System::Console::WriteLine(__is_sealed(R));  
    }  
  
    ```  
  
-   `__is_simple_value_class(` `type` `)`  
  
     Returns true if passed a value type that contains no references to the garbage-collected heap. For more information on user-defined value types, see [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md).  
  
    ```  
  
    using namespace System;  
    ref class R {};  
    value struct V {};  
    value struct V2 {  
    R ^ r;   // not a simnple value type  
    };  
  
    int main() {  
    Console::WriteLine(__is_simple_value_class(V));  
    Console::WriteLine(__is_simple_value_class(V2));  
    }  
  
    ```  
  
-   `__is_union(` `type` `)`  
  
     Returns true if a type is a union.  
  
    ```  
  
    #include <stdio.h>  
    union A {  
    int i;  
    float f;  
    };  
  
    int main() {  
    __is_union(A) == true ?  
    printf("true\n") : printf("false\n");  
    }  
  
    ```  
  
-   `__is_value_class(` `type` `)`  
  
     Returns true if passed a value type. For more information on user-defined value types, see [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md).  
  
    ```  
  
    value struct V {};  
  
    int main() {  
    System::Console::WriteLine(__is_value_class(V));  
    }  
  
    ```  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 **Remarks**  
  
 The `__has_finalizer(`*type*`)` type trait is not supported because this platform does not support finalizers.  
  
### Requirements  
 Compiler option: **/ZW**  
  
## [!INCLUDE[clr_for_headings](../dotnet/includes/clr_for_headings_md.md)]  
 **Remarks**  
  
 (There are no platform-specific remarks for this feature.)  
  
### Requirements  
 Compiler option: **/clr**  
  
### Examples  
 **Example**  
  
 The following code example shows how to use a class template to expose a compiler type trait for a **/clr** compilation. For more information, see [Windows Runtime and Managed Templates](../windows/windows-runtime-and-managed-templates-cpp-component-extensions.md).  
  
```  
// compiler_type_traits.cpp  
// compile with: /clr  
using namespace System;  
  
template <class T>  
ref struct is_class {  
   literal bool value = __is_ref_class(T);  
};  
  
ref class R {};  
  
int main () {  
   if (is_class<R>::value)  
      Console::WriteLine("R is a ref class");  
   else  
      Console::WriteLine("R is not a ref class");  
}  
```  
  
 **Output**  
  
```Output  
R is a ref class  
```  
  
## See Also  
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)