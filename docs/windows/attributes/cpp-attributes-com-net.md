---
description: "Learn more about: C++ Attributes for COM and .NET"
title: "C++ Attributes for COM and .NET"
ms.custom: "index-page"
ms.date: "11/19/2018"
ms.topic: "conceptual"
helpviewer_keywords: ["attributes [C++/CLI], reference topics"]
ms.assetid: 613a3611-b3eb-4347-aa38-99b654600e1c
---
# C++ Attributes for COM and .NET

Microsoft defines a set of C++ attributes that simplify COM programming and .NET Framework common language runtime development. When you include attributes in your source files, the compiler works with provider DLLs to insert code or modify the code in the generated object files. These attributes aid in the creation of .idl files, interfaces, type libraries, and other COM elements. In the integrated development environment (IDE), attributes are supported by the wizards and by the Properties window.

While attributes eliminate some of the detailed coding needed to write COM objects, you need a background in [COM fundamentals](/windows/win32/com/the-component-object-model) to best use them.

> [!NOTE]
> If you are looking for C++ standard attributes, see [Attributes](../../cpp/attributes.md).

## Purpose of Attributes

Attributes extend C++ in directions not currently possible without breaking the classic structure of the language. Attributes allow providers (separate DLLs) to extend language functionality dynamically. The primary goal of attributes is to simplify the authoring of COM components, in addition to increasing the productivity level of the component developer. Attributes can be applied to nearly any C++ construct, such as classes, data members, or member functions. The following is a highlight of benefits provided by this new technology:

- Exposes a familiar and simple calling convention.

- Uses inserted code, which, unlike macros, is recognized by the debugger.

- Allows easy derivation from base classes without burdensome implementation details.

- Replaces the large amount of IDL code required by a COM component with a few concise attributes.

For example, to implement a simple event sink for a generic ATL class, you could apply the [event_receiver](event-receiver.md) attribute to a specific class such as `CMyReceiver`. The `event_receiver` attribute is then compiled by the Microsoft C++ compiler, which inserts the proper code into the object file.

```cpp
[event_receiver(com)]
class CMyReceiver
{
   void handler1(int i) { ... }
   void handler2(int i, float j) { ... }
}
```

You can then set up the `CMyReceiver` methods `handler1` and `handler2` to handle events (using the intrinsic function [__hook](../../cpp/hook.md)) from an event source, which you can create using [event_source](event-source.md).

## Basic Mechanics of Attributes

There are three ways to insert attributes into your project. First, you can insert them manually into your source code. Second, you can insert them using the property grid of an object in your project. Finally, you can insert them using the various wizards. For more information on using the **Properties** window and the various wizards, see [Visual Studio Projects - C++](../../build/creating-and-managing-visual-cpp-projects.md).

As before, when the project is built, the compiler parses each C++ source file, producing an object file. However, when the compiler encounters an attribute, it is parsed and syntactically verified. The compiler then dynamically calls an attribute provider to insert code or make other modifications at compile time. The implementation of the provider differs depending on the type of attribute. For example, ATL-related attributes are implemented by Atlprov.dll.

The following figure demonstrates the relationship between the compiler and the attribute provider.

![Component attribute communication](../media/vccompattrcomm.gif "Component attribute communication")

> [!NOTE]
> Attribute usage does not alter the contents of the source file. The only time the generated attribute code is visible is during debugging sessions. In addition, for each source file in the project, you can generate a text file that displays the results of the attribute substitution. For more information on this procedure, see [/Fx (Merge Injected Code)](../../build/reference/fx-merge-injected-code.md) and [Debugging Injected Code](/visualstudio/debugger/how-to-debug-injected-code).

Like most C++ constructs, attributes have a set of characteristics that defines their proper usage. This is referred to as the context of the attribute and is addressed in the attribute context table for each attribute reference topic. For example, the [coclass](coclass.md) attribute can only be applied to an existing class or structure, as opposed to the [cpp_quote](cpp-quote.md) attribute, which can be inserted anywhere within a C++ source file.

## Building an Attributed Program

After you put Visual C++ attributes into your source code, you may want the Microsoft C++ compiler to produce a type library and .idl file for you. The following linker options help you build .tlb and .idl files:

- [/IDLOUT](../../build/reference/idlout-name-midl-output-files.md)

- [/IGNOREIDL](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)

- [/MIDL](../../build/reference/midl-specify-midl-command-line-options.md)

- [/TLBOUT](../../build/reference/tlbout-name-dot-tlb-file.md)

Some projects contain multiple independent .idl files. These are used to produce two or more .tlb files and optionally bind them into the resource block. This scenario is not currently supported in Visual C++.

In addition, the Visual C++ linker will output all IDL-related attribute information to a single MIDL file. There will be no way to generate two type libraries from a single project.

## <a name="contexts"></a> Attribute Contexts

C++ attributes can be described using four basic fields: the target they can be applied to (**Applies To**), if they are repeatable or not (**Repeatable**), the required presence of other attributes (**Required Attributes**), and incompatibilities with other attributes (**Invalid Attributes**). These fields are listed in an accompanying table in each attribute's reference topic. Each of these fields is described below.

### Applies To

This field describes the different C++ language elements that are legal targets for the specified attribute. For instance, if an attribute specifies "class" in the **Applies To** field, this indicates that the attribute can only be applied to a legal C++ class. If the attribute is applied to a member function of a class, a syntax error would result.

For more information, see [Attributes by Usage](attributes-by-usage.md).

### Repeatable

This field states whether the attribute can be repeatedly applied to the same target. The majority of attributes are not repeatable.

### Required Attributes

This field lists other attributes that need to be present (that is, applied to the same target) for the specified attribute to function properly. It is uncommon for an attribute to have any entries for this field.

### Invalid Attributes

This field lists other attributes that are incompatible with the specified attribute. It is uncommon for an attribute to have any entries for this field.

## In This Section

[Attribute Programming FAQ](attribute-programming-faq.md)<br/>
[Attributes by Group](attributes-by-group.md)<br/>
[Attributes by Usage](attributes-by-usage.md)<br/>
[Attributes Alphabetical Reference](attributes-alphabetical-reference.md)
