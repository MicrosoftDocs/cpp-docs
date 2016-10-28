---
title: "Component Extensions for Runtime Platforms"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "what's new [C++], keywords"
  - "what's new [C++], language features"
  - "Visual C++, keywords"
  - "keywords [C++]"
  - "Managed Extensions for C++, replacement syntax"
ms.assetid: 1e400ee6-3ac9-4910-a608-9d3d5993e423
caps.latest.revision: 77
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
# Component Extensions for Runtime Platforms
Visual C++ provides language extensions to help you program against runtime platforms. By using [!INCLUDE[cppwrt](../buildref/includes/cppwrt_md.md)] ([!INCLUDE[cppwrt_short](../buildref/includes/cppwrt_short_md.md)]), you can program [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps and components that compile to native code. Although you can create [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps by programming directly against the [!INCLUDE[wrt](../atl/includes/wrt_md.md)] COM interfaces, by using [!INCLUDE[cppwrt_short](../buildref/includes/cppwrt_short_md.md)], you can work with constructors, exceptions, and other modern C++ programming idioms. To enable C++ programming in a managed execution environment on the .NET platform, you can use [!INCLUDE[cppcli](../buildref/includes/cppcli_md.md)].  
  
 **Two runtimes, one set of extensions**  
  
 [!INCLUDE[cppwrt_short](../buildref/includes/cppwrt_short_md.md)] is a subset of [!INCLUDE[cppcli](../buildref/includes/cppcli_md.md)]. For extensions that are common to [!INCLUDE[cppwrt_short](../buildref/includes/cppwrt_short_md.md)] and [!INCLUDE[cppcli](../buildref/includes/cppcli_md.md)], the semantics depend on whether you are targeting the common language runtime (CLR) or the [!INCLUDE[wrt](../atl/includes/wrt_md.md)]. To compile your app to run on the [!INCLUDE[wrt](../atl/includes/wrt_md.md)], specify the **/ZW** compiler option. To compile it to run on the CLR, specify the **/clr** compiler option. These switches are set automatically when you use Visual Studio to create a project.  
  
 For more information about how to create [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps in C++, see [Roadmap for Windows Runtime apps using C++](http://msdn.microsoft.com/library/windows/apps/hh700360.aspx).  
  
 [!INCLUDE[cppcli](../buildref/includes/cppcli_md.md)] extends the ISO/ANSI C++ standard, and is defined under the Ecma [!INCLUDE[cppcli](../buildref/includes/cppcli_md.md)] Standard. For more information, see [.NET Programming with C++/CLI (Visual C++)](../cli/.net-programming-with-c---cli--visual-c---.md).  
  
## Data Type Keywords  
 The language extensions include *aggregate keywords*, which are keywords that consist of two tokens separated by white space. The tokens might have one meaning when they are used separately, and another meaning when they are used together. For example, the word "ref" is an ordinary identifier, and the word "class" is a keyword that declares a native class. But when these words are combined to form `ref class`, the resulting aggregate keyword declares an entity that is known as a *runtime class*.  
  
 The extensions also include *context-sensitive* keywords. A keyword is treated as context-sensitive depending on the kind of statement that contains it, and its placement in that statement. For example, the token "property" can be an identifier, or it can declare a special kind of public class member.  
  
 The following table lists keywords in the C++ language extension.  
  
|Keyword|Context sensitive|Purpose|Reference|  
|-------------|-----------------------|-------------|---------------|  
|`ref class`<br /><br /> `ref struct`|No|Declares a class.|[Classes and Structs](../windows/classes-and-structs---c---component-extensions-.md)|  
|`value class`<br /><br /> `value struct`|No|Declares a value class.|[Classes and Structs](../windows/classes-and-structs---c---component-extensions-.md)|  
|`interface class`<br /><br /> `interface struct`|No|Declares an interface.|[interface class](../windows/interface-class---c---component-extensions-.md)|  
|`enum class`<br /><br /> `enum struct`|No|Declares an enumeration.|[enum class](../windows/enum-class---c---component-extensions-.md)|  
|`property`|Yes|Declares a property.|[property](../windows/property---c---component-extensions-.md)|  
|`delegate`|Yes|Declares a delegate.|[delegate  (C++ Component Extensions)](../windows/delegate---c---component-extensions-.md)|  
|`event`|Yes|Declares an event.|[event](../windows/event---c---component-extensions-.md)|  
  
## Override Specifiers  
 You can use the following keywords to qualify override behavior for derivation. Although the `new` keyword is not an extension of C++, it is listed here because it can be used in an additional context. Some specifiers are also valid for native programming. For more information, see [How to: Declare Override Specifiers in Native Compilations (C++/CLI)](../cli/how-to--declare-override-specifiers-in-native-compilations--c---cli-.md).  
  
|Keyword|Context Sensitive|Purpose|Reference|  
|-------------|-----------------------|-------------|---------------|  
|`abstract`|Yes|Indicates that functions or classes are abstract.|[abstract](../windows/abstract---c---component-extensions-.md)|  
|`new`|No|Indicates that a function is not an override of a base class version.|[new (new slot in vtable)](../windows/new--new-slot-in-vtable----c---component-extensions-.md)|  
|`override`|Yes|Indicates that a method must be an override of a base-class version.|[override](../windows/override---c---component-extensions-.md)|  
|`sealed`|Yes|Prevents classes from being used as base classes.|[sealed](../windows/sealed---c---component-extensions-.md)|  
  
## Keywords for Generics  
 The following keywords have been added to support generic types. For more information, see [Generics](../windows/generics---c---component-extensions-.md).  
  
|Keyword|Context sensitive|Purpose|  
|-------------|-----------------------|-------------|  
|`generic`|No|Declares a generic type.|  
|`where`|Yes|Specifies the constraints that are applied to a generic type parameter.|  
  
## Miscellaneous Keywords  
 The following keywords have been added to the C++ extensions.  
  
|Keyword|Context sensitive|Purpose|Reference|  
|-------------|-----------------------|-------------|---------------|  
|`finally`|Yes|Indicates default exception handlings behavior.|[Exception Handling](../windows/exception-handling---c---component-extensions-.md)|  
|`for each, in`|No|Enumerates elements of a collection.|[for each, in](../cli/for-each--in.md)|  
|`gcnew`|No|Allocates types on the garbage-collected heap. Use instead of `new` and `delete`.|[ref new, gcnew](../windows/ref-new--gcnew---c---component-extensions-.md)|  
|`ref new`|Yes|Allocates a [!INCLUDE[wrt](../atl/includes/wrt_md.md)] type. Use instead of `new` and `delete`.|[ref new, gcnew](../windows/ref-new--gcnew---c---component-extensions-.md)|  
|`initonly`|Yes|Indicates that a member can only be initialized at declaration or in a static constructor.|[initonly (C++/CLI)](../cli/initonly--c---cli-.md)|  
|`literal`|Yes|Creates a literal variable.|[literal](../windows/literal--c---component-extensions-.md)|  
|`nullptr`|No|Indicates that a handle or pointer does not point at an object.|[nullptr](../windows/nullptr---c---component-extensions-.md)|  
  
## Template Constructs  
 The following language constructs are implemented as templates, instead of as keywords. If you specify the **/ZW** compiler option, they are defined in the `lang` namespace. If you specify the **/clr** compiler option, they are defined in the `cli` namespace.  
  
|Keyword|Purpose|Reference|  
|-------------|-------------|---------------|  
|`array`|Declares an array.|[Arrays](../windows/arrays--c---component-extensions-.md)|  
|`interior_ptr`|(CLR only) Points to data in a reference type.|[interior_ptr (C++/CLI)](../windows/interior_ptr--c---cli-.md)|  
|`pin_ptr`|(CLR only) Points to CLR reference types to temporarily suppress the garbage-collection system.|[pin_ptr (C++/CLI)](../windows/pin_ptr--c---cli-.md)|  
|`safe_cast`|Determines and executes the optimal casting method for a runtime type.|[safe_cast](../windows/safe_cast--c---component-extensions-.md)|  
|`typeid`|(CLR only) Retrieves a \<xref:System.Type?displayProperty=fullName> object that describes the given type or object.|[typeid](../windows/typeid---c---component-extensions-.md)|  
  
## Declarators  
 The following type declarators instruct the runtime to automatically manage the lifetime and deletion of allocated objects.  
  
|Operator|Purpose|Reference|  
|--------------|-------------|---------------|  
|`^`|Declares a handle to an object; that is, a pointer to a [!INCLUDE[wrt](../atl/includes/wrt_md.md)] or CLR object that is automatically deleted when it is no longer usable.|[Handle to Object Operator (^)](../windows/handle-to-object-operator--^----c---component-extensions-.md)|  
|`%`|Declares a tracking reference; that is, a reference to a [!INCLUDE[wrt](../atl/includes/wrt_md.md)] or CLR object that is automatically deleted when it is no longer usable.|[Tracking Reference Operator](../windows/tracking-reference-operator--c---component-extensions-.md)|  
  
## Additional Constructs and Related Topics  
 This section lists additional programming constructs, and topics that pertain to the CLR.  
  
|Topic|Description|  
|-----------|-----------------|  
|[__identifier (C++/CLI)](../windows/__identifier--c---cli-.md)|([!INCLUDE[wrt](../atl/includes/wrt_md.md)] and CLR) Enables the use of keywords as identifiers.|  
|[Variable Argument Lists (...) (C++/CLI)](../windows/variable-argument-lists--...---c---cli-.md)|([!INCLUDE[wrt](../atl/includes/wrt_md.md)] and CLR) Enables a function to take a variable number of arguments.|  
|[.NET Framework Equivalents to C++ Native Types (C++/CLI)](../cli/.net-framework-equivalents-to-c---native-types--c---cli-.md)|Lists the CLR types that are used in place of C++ integral types.|  
|[appdomain](../cpp/appdomain.md) `__declspec` modifier|`__declspec` modifier that mandates that static and global variables exist per appdomain.|  
|[C-Style Casts with /clr (C++/CLI)](../windows/c-style-casts-with--clr--c---cli-.md)|Describes how C-style casts are interpreted.|  
|[__clrcall](../cpp/__clrcall.md) calling convention|Indicates the CLR-compliant calling convention.|  
|`__cplusplus_cli`|[Predefined Macros](../c/predefined-macros.md)|  
|[Custom Attributes](../windows/custom-attributes--c---.md)|Describes how to define your own CLR attributes.|  
|[Exception Handling](../windows/exception-handling---c---component-extensions-.md)|Provides an overview of exception handling.|  
|[Explicit Overrides](../windows/explicit-overrides---c---component-extensions-.md)|Demonstrates how member functions can override arbitrary members.|  
|[Friend Assemblies (C++)](../cli/friend-assemblies--c---.md)|Discusses how a client assembly can access all types in an assembly component.|  
|[Boxing](../windows/boxing---c---component-extensions-.md)|Demonstrates the conditions in which values types are boxed.|  
|[Compiler Support for Type Traits](../windows/compiler-support-for-type-traits--c---component-extensions-.md)|Discusses how to detect characteristics of types at compile time.|  
|[managed, unmanaged](../c/managed--unmanaged.md) pragmas|Demonstrates how managed and unmanaged functions can co-exist in the same module.|  
|[process](../cpp/process.md) `__declspec` modifier|`__declspec` modifier that mandates that static and global variables exist per process.|  
|[Reflection (C++/CLI)](../cli/reflection--c---cli-.md)|Demonstrates the CLR version of run-time type information.|  
|[String](../windows/string---c---component-extensions-.md)|Discusses compiler conversion of string literals to \<xref:System.String>.|  
|[Type Forwarding (C++/CLI)](../windows/type-forwarding--c---cli-.md)|Enables the movement of a type in a shipping assembly to another assembly so that client code does not have to be recompiled.|  
|[User-Defined Attributes](../windows/user-defined-attributes---c---component-extensions-.md)|Demonstrates user-defined attributes.|  
|[#using Directive](../c/sharpusing-directive--c---.md)|Imports external assemblies.|  
|[XML Documentation](../ide/xml-documentation--visual-c---.md)|Explains XML-based code documentation by using [/doc (Process Documentation Comments) (C/C++)](../buildref/-doc--process-documentation-comments---c-c---.md)|  
  
## See Also  
 [.NET Programming with C++/CLI (Visual C++)](../cli/.net-programming-with-c---cli--visual-c---.md)   
 [Native and .NET Interoperability](../cli/native-and-.net-interoperability.md)