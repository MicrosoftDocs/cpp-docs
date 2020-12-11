---
description: "Learn more about: Using dllimport and dllexport in C++ Classes"
title: "Using dllimport and dllexport in C++ Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["exporting classes [C++]", "declarations [C++], class", "exportable classes [C++]", "classes [C++], declaring", "classes [C++], exportable and inheritance", "inheritance [C++], exportable classes [C++]", "dllimport attribute [C++], classes", "declaring classes [C++]", "dllexport attribute [C++]", "dllexport attribute [C++], classes [C++]"]
ms.assetid: 8d7d1303-b9e9-47ca-96cc-67bf444a08a9
---
# Using dllimport and dllexport in C++ Classes

**Microsoft Specific**

You can declare C++ classes with the **`dllimport`** or **`dllexport`** attribute. These forms imply that the entire class is imported or exported. Classes exported this way are called exportable classes.

The following example defines an exportable class. All its member functions and static data are exported:

```cpp
#define DllExport   __declspec( dllexport )

class DllExport C {
   int i;
   virtual int func( void ) { return 1; }
};
```

Note that explicit use of the **`dllimport`** and **`dllexport`** attributes on members of an exportable class is prohibited.

## <a name="_pluslang_using_dllimport_and_dllexport_in_c2b2bdllexportclasses"></a> dllexport Classes

When you declare a class **`dllexport`**, all its member functions and static data members are exported. You must provide the definitions of all such members in the same program. Otherwise, a linker error is generated. The one exception to this rule applies to pure virtual functions, for which you need not provide explicit definitions. However, because a destructor for an abstract class is always called by the destructor for the base class, pure virtual destructors must always provide a definition. Note that these rules are the same for nonexportable classes.

If you export data of class type or functions that return classes, be sure to export the class.

## <a name="_pluslang_dllexport_classesdllexportclasses"></a> dllimport Classes

When you declare a class **`dllimport`**, all its member functions and static data members are imported. Unlike the behavior of **`dllimport`** and **`dllexport`** on nonclass types, static data members cannot specify a definition in the same program in which a **`dllimport`** class is defined.

## <a name="_pluslang_using_dllimport_and_dllexport_in_c2b2binheritanceandexportableclasses"></a> Inheritance and Exportable Classes

All base classes of an exportable class must be exportable. If not, a compiler warning is generated. Moreover, all accessible members that are also classes must be exportable. This rule permits a **`dllexport`** class to inherit from a **`dllimport`** class, and a **`dllimport`** class to inherit from a **`dllexport`** class (though the latter is not recommended). As a rule, everything that is accessible to the DLL's client (according to C++ access rules) should be part of the exportable interface. This includes private data members referenced in inline functions.

## <a name="_pluslang_using_dllimport_and_dllexport_in_c2b2bselectivememberimportexport"></a> Selective Member Import/Export

Because member functions and static data within a class implicitly have external linkage, you can declare them with the **`dllimport`** or **`dllexport`** attribute, unless the entire class is exported. If the entire class is imported or exported, the explicit declaration of member functions and data as **`dllimport`** or **`dllexport`** is prohibited. If you declare a static data member within a class definition as **`dllexport`**, a definition must occur somewhere within the same program (as with nonclass external linkage).

Similarly, you can declare member functions with the **`dllimport`** or **`dllexport`** attributes. In this case, you must provide a **`dllexport`** definition somewhere within the same program.

It is worthwhile to note several important points regarding selective member import and export:

- Selective member import/export is best used for providing a version of the exported class interface that is more restrictive; that is, one for which you can design a DLL that exposes fewer public and private features than the language would otherwise allow. It is also useful for fine-tuning the exportable interface: when you know that the client, by definition, is unable to access some private data, you need not export the entire class.

- If you export one virtual function in a class, you must export all of them, or at least provide versions that the client can use directly.

- If you have a class in which you are using selective member import/export with virtual functions, the functions must be in the exportable interface or defined inline (visible to the client).

- If you define a member as **`dllexport`** but do not include it in the class definition, a compiler error is generated. You must define the member in the class header.

- Although the definition of class members as **`dllimport`** or **`dllexport`** is permitted, you cannot override the interface specified in the class definition.

- If you define a member function in a place other than the body of the class definition in which you declared it, a warning is generated if the function is defined as **`dllexport`** or **`dllimport`** (if this definition differs from that specified in the class declaration).

**END Microsoft Specific**

## See also

[dllexport, dllimport](../cpp/dllexport-dllimport.md)
