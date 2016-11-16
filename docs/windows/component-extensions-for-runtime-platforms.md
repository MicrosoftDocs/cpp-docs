---
title: "Component Extensions for Runtime Platforms | Microsoft Docs"
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
helpviewer_keywords: 
  - "what's new [C++], keywords"
  - "what's new [C++], language features"
  - "Visual C++, keywords"
  - "keywords [C++]"
  - "Managed Extensions for C++, replacement syntax"
ms.assetid: 1e400ee6-3ac9-4910-a608-9d3d5993e423
caps.latest.revision: 77
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
# Component Extensions for Runtime Platforms
Visual C++ provides language extensions to help you program against runtime platforms. By using [!INCLUDE[cppwrt](../build/reference/includes/cppwrt_md.md)] ([!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)]), you can program [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps and components that compile to native code. Although you can create [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps by programming directly against the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] COM interfaces, by using [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)], you can work with constructors, exceptions, and other modern C++ programming idioms. To enable C++ programming in a managed execution environment on the .NET platform, you can use [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)].  
  
 **Two runtimes, one set of extensions**  
  
 [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] is a subset of [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)]. For extensions that are common to [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)] and [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)], the semantics depend on whether you are targeting the common language runtime (CLR) or the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]. To compile your app to run on the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], specify the **/ZW** compiler option. To compile it to run on the CLR, specify the **/clr** compiler option. These switches are set automatically when you use Visual Studio to create a project.  
  
 For more information about how to create [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps in C++, see [Roadmap for Windows Runtime apps using C++](http://msdn.microsoft.com/library/windows/apps/hh700360.aspx).  
  
 [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)] extends the ISO/ANSI C++ standard, and is defined under the Ecma [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)] Standard. For more information, see [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md).  
  
## Data Type Keywords  
 The language extensions include *aggregate keywords*, which are keywords that consist of two tokens separated by white space. The tokens might have one meaning when they are used separately, and another meaning when they are used together. For example, the word "ref" is an ordinary identifier, and the word "class" is a keyword that declares a native class. But when these words are combined to form `ref class`, the resulting aggregate keyword declares an entity that is known as a *runtime class*.  
  
 The extensions also include *context-sensitive* keywords. A keyword is treated as context-sensitive depending on the kind of statement that contains it, and its placement in that statement. For example, the token "property" can be an identifier, or it can declare a special kind of public class member.  
  
 The following table lists keywords in the C++ language extension.  
  
|Keyword|Context sensitive|Purpose|Reference|  
|-------------|-----------------------|-------------|---------------|  
|`ref class`<br /><br /> `ref struct`|No|Declares a class.|[Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)|  
|`value class`<br /><br /> `value struct`|No|Declares a value class.|[Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)|  
|`interface class`<br /><br /> `interface struct`|No|Declares an interface.|[interface class](../windows/interface-class-cpp-component-extensions.md)|  
|`enum class`<br /><br /> `enum struct`|No|Declares an enumeration.|[enum class](../windows/enum-class-cpp-component-extensions.md)|  
|`property`|Yes|Declares a property.|[property](../windows/property-cpp-component-extensions.md)|  
|`delegate`|Yes|Declares a delegate.|[delegate  (C++ Component Extensions)](../windows/delegate-cpp-component-extensions.md)|  
|`event`|Yes|Declares an event.|[event](../windows/event-cpp-component-extensions.md)|  
  
## Override Specifiers  
 You can use the following keywords to qualify override behavior for derivation. Although the `new` keyword is not an extension of C++, it is listed here because it can be used in an additional context. Some specifiers are also valid for native programming. For more information, see [How to: Declare Override Specifiers in Native Compilations (C++/CLI)](../dotnet/how-to-declare-override-specifiers-in-native-compilations-cpp-cli.md).  
  
|Keyword|Context Sensitive|Purpose|Reference|  
|-------------|-----------------------|-------------|---------------|  
|`abstract`|Yes|Indicates that functions or classes are abstract.|[abstract](../windows/abstract-cpp-component-extensions.md)|  
|`new`|No|Indicates that a function is not an override of a base class version.|[new (new slot in vtable)](../windows/new-new-slot-in-vtable-cpp-component-extensions.md)|  
|`override`|Yes|Indicates that a method must be an override of a base-class version.|[override](../windows/override-cpp-component-extensions.md)|  
|`sealed`|Yes|Prevents classes from being used as base classes.|[sealed](../windows/sealed-cpp-component-extensions.md)|  
  
## Keywords for Generics  
 The following keywords have been added to support generic types. For more information, see [Generics](../windows/generics-cpp-component-extensions.md).  
  
|Keyword|Context sensitive|Purpose|  
|-------------|-----------------------|-------------|  
|`generic`|No|Declares a generic type.|  
|`where`|Yes|Specifies the constraints that are applied to a generic type parameter.|  
  
## Miscellaneous Keywords  
 The following keywords have been added to the C++ extensions.  
  
|Keyword|Context sensitive|Purpose|Reference|  
|-------------|-----------------------|-------------|---------------|  
|`finally`|Yes|Indicates default exception handlings behavior.|[Exception Handling](../windows/exception-handling-cpp-component-extensions.md)|  
|`for each, in`|No|Enumerates elements of a collection.|[for each, in](../dotnet/for-each-in.md)|  
|`gcnew`|No|Allocates types on the garbage-collected heap. Use instead of `new` and `delete`.|[ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md)|  
|`ref new`|Yes|Allocates a [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] type. Use instead of `new` and `delete`.|[ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md)|  
|`initonly`|Yes|Indicates that a member can only be initialized at declaration or in a static constructor.|[initonly (C++/CLI)](../dotnet/initonly-cpp-cli.md)|  
|`literal`|Yes|Creates a literal variable.|[literal](../windows/literal-cpp-component-extensions.md)|  
|`nullptr`|No|Indicates that a handle or pointer does not point at an object.|[nullptr](../windows/nullptr-cpp-component-extensions.md)|  
  
## Template Constructs  
 The following language constructs are implemented as templates, instead of as keywords. If you specify the **/ZW** compiler option, they are defined in the `lang` namespace. If you specify the **/clr** compiler option, they are defined in the `cli` namespace.  
  
|Keyword|Purpose|Reference|  
|-------------|-------------|---------------|  
|`array`|Declares an array.|[Arrays](../windows/arrays-cpp-component-extensions.md)|  
|`interior_ptr`|(CLR only) Points to data in a reference type.|[interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)|  
|`pin_ptr`|(CLR only) Points to CLR reference types to temporarily suppress the garbage-collection system.|[pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)|  
|`safe_cast`|Determines and executes the optimal casting method for a runtime type.|[safe_cast](../windows/safe-cast-cpp-component-extensions.md)|  
|`typeid`|(CLR only) Retrieves a <xref:System.Type?displayProperty=fullName> object that describes the given type or object.|[typeid](../windows/typeid-cpp-component-extensions.md)|  
  
## Declarators  
 The following type declarators instruct the runtime to automatically manage the lifetime and deletion of allocated objects.  
  
|Operator|Purpose|Reference|  
|--------------|-------------|---------------|  
|`^`|Declares a handle to an object; that is, a pointer to a [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] or CLR object that is automatically deleted when it is no longer usable.|[Handle to Object Operator (^)](../windows/handle-to-object-operator-hat-cpp-component-extensions.md)|  
|`%`|Declares a tracking reference; that is, a reference to a [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] or CLR object that is automatically deleted when it is no longer usable.|[Tracking Reference Operator](../windows/tracking-reference-operator-cpp-component-extensions.md)|  
  
## Additional Constructs and Related Topics  
 This section lists additional programming constructs, and topics that pertain to the CLR.  
  
|Topic|Description|  
|-----------|-----------------|  
|[__identifier (C++/CLI)](../windows/identifier-cpp-cli.md)|([!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] and CLR) Enables the use of keywords as identifiers.|  
|[Variable Argument Lists (...) (C++/CLI)](../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md)|([!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] and CLR) Enables a function to take a variable number of arguments.|  
|[.NET Framework Equivalents to C++ Native Types (C++/CLI)](../dotnet/dotnet-framework-equivalents-to-cpp-native-types-cpp-cli.md)|Lists the CLR types that are used in place of C++ integral types.|  
|[appdomain](../cpp/appdomain.md) `__declspec` modifier|`__declspec` modifier that mandates that static and global variables exist per appdomain.|  
|[C-Style Casts with /clr (C++/CLI)](../windows/c-style-casts-with-clr-cpp-cli.md)|Describes how C-style casts are interpreted.|  
|[__clrcall](../cpp/clrcall.md) calling convention|Indicates the CLR-compliant calling convention.|  
|`__cplusplus_cli`|[Predefined Macros](../preprocessor/predefined-macros.md)|  
|[Custom Attributes](../windows/custom-attributes-cpp.md)|Describes how to define your own CLR attributes.|  
|[Exception Handling](../windows/exception-handling-cpp-component-extensions.md)|Provides an overview of exception handling.|  
|[Explicit Overrides](../windows/explicit-overrides-cpp-component-extensions.md)|Demonstrates how member functions can override arbitrary members.|  
|[Friend Assemblies (C++)](../dotnet/friend-assemblies-cpp.md)|Discusses how a client assembly can access all types in an assembly component.|  
|[Boxing](../windows/boxing-cpp-component-extensions.md)|Demonstrates the conditions in which values types are boxed.|  
|[Compiler Support for Type Traits](../windows/compiler-support-for-type-traits-cpp-component-extensions.md)|Discusses how to detect characteristics of types at compile time.|  
|[managed, unmanaged](../preprocessor/managed-unmanaged.md) pragmas|Demonstrates how managed and unmanaged functions can co-exist in the same module.|  
|[process](../cpp/process.md) `__declspec` modifier|`__declspec` modifier that mandates that static and global variables exist per process.|  
|[Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)|Demonstrates the CLR version of run-time type information.|  
|[String](../windows/string-cpp-component-extensions.md)|Discusses compiler conversion of string literals to <xref:System.String>.|  
|[Type Forwarding (C++/CLI)](../windows/type-forwarding-cpp-cli.md)|Enables the movement of a type in a shipping assembly to another assembly so that client code does not have to be recompiled.|  
|[User-Defined Attributes](../windows/user-defined-attributes-cpp-component-extensions.md)|Demonstrates user-defined attributes.|  
|[#using Directive](../preprocessor/hash-using-directive-cpp.md)|Imports external assemblies.|  
|[XML Documentation](../ide/xml-documentation-visual-cpp.md)|Explains XML-based code documentation by using [/doc (Process Documentation Comments) (C/C++)](../build/reference/doc-process-documentation-comments-c-cpp.md)|  
  
## See Also  
 [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)   
 [Native and .NET Interoperability](../dotnet/native-and-dotnet-interoperability.md)