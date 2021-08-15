---
description: "Learn more about: .Xml File Processing"
title: ".Xml File Processing"
ms.date: "11/04/2016"
helpviewer_keywords: ["XML documentation, processing XML file"]
ms.assetid: e70fdeae-80ac-4872-ab24-771c5635cfbf
---
# .Xml File Processing

The compiler generates an ID string for each construct in your code that is tagged to generate documentation. For more information, see [Recommended Tags Documentation Comments](recommended-tags-for-documentation-comments-visual-cpp.md). The ID string uniquely identifies the construct. Programs that process the .xml file can use the ID string to identify the corresponding .NET Framework metadata or reflection item to which the documentation applies.

The .xml file is not a hierarchical representation of your code, it is a flat list with a generated ID for each element.

The compiler observes the following rules when it generates the ID strings:

- No white space is placed in the string.

- The first part of the ID string identifies the kind of member being identified, with a single character followed by a colon. The following member types are used:

  | Character | Description |
  |---------------|-----------------|
  | N | namespace<br /><br /> You cannot add documentation comments to a namespace, cref references to a namespace are possible. |
  | T | type: class, interface, struct, enum, delegate |
  | D | typedef |
  | F | field |
  | P | property (including indexers or other indexed properties) |
  | M | method (including such special methods as constructors, operators, and so forth) |
  | E | event |
  | ! | error string<br /><br /> The rest of the string provides information about the error. The MSVC compiler generates error information for links that cannot be resolved. |

- The second part of the string is the fully qualified name of the item, starting at the root of the namespace. The name of the item, its enclosing type or types, and namespace are separated by periods. If the name of the item itself has periods, they are replaced by the hash-sign ('#'). It is assumed that no item has an hash-sign directly in its name. For example, the fully qualified name of the `String` constructor would be "System.String.#ctor".

- For properties and methods, if there are arguments to the method, the argument list enclosed in parentheses follows. If there are no arguments, no parentheses are present. The arguments are separated by commas. The encoding of each argument follows directly how it is encoded in a .NET Framework signature:

  - Base types. Regular types (ELEMENT_TYPE_CLASS or ELEMENT_TYPE_VALUETYPE) are represented as the fully qualified name of the type.

  - Intrinsic types (for example, ELEMENT_TYPE_I4, ELEMENT_TYPE_OBJECT, ELEMENT_TYPE_STRING, ELEMENT_TYPE_TYPEDBYREF. and ELEMENT_TYPE_VOID) are represented as the fully qualified name of the corresponding full type, for example, **System.Int32** or **System.TypedReference**.

  - ELEMENT_TYPE_PTR is represented as a '*' following the modified type.

  - ELEMENT_TYPE_BYREF is represented as a '\@' following the modified type.

  - ELEMENT_TYPE_PINNED is represented as a '^' following the modified type. The MSVC compiler never generates this.

  - ELEMENT_TYPE_CMOD_REQ is represented as a '&#124;' and the fully qualified name of the modifier class, following the modified type. The MSVC compiler never generates this.

  - ELEMENT_TYPE_CMOD_OPT is represented as a '!' and the fully qualified name of the modifier class, following the modified type.

  - ELEMENT_TYPE_SZARRAY is represented as "[]" following the element type of the array.

  - ELEMENT_TYPE_GENERICARRAY is represented as "[?]" following the element type of the array. The MSVC compiler never generates this.

  - ELEMENT_TYPE_ARRAY is represented as [*lowerbound*:`size`,*lowerbound*:`size`] where the number of commas is the rank - 1, and the lower bounds and size of each dimension, if known, are represented in decimal. If a lower bound or size is not specified, it is simply omitted. If the lower bound and size for a particular dimension are omitted, the ':' is omitted as well. For example, a 2-dimensional array with 1 as the lower bounds and unspecified sizes is [1:,1:].

  - ELEMENT_TYPE_FNPTR is represented as "=FUNC:`type`(*signature*)", where `type` is the return type, and *signature* is the arguments of the method. If there are no arguments, the parentheses are omitted. The MSVC compiler never generates this.

  The following signature components are not represented because they are never used for differentiating overloaded methods:

  - calling convention

  - return type

  - ELEMENT_TYPE_SENTINEL

- For conversion operators only, the return value of the method is encoded as a '~' followed by the return type, as previously encoded.

- For generic types, the name of the type will be followed by a back tick and then a number that indicates the number of generic type parameters.  For example,

    ```xml
    <member name="T:MyClass`2">
    ```

  For a type that is defined as `public class MyClass<T, U>`.

  For methods taking generic types as parameters, the generic type parameters are specified as numbers prefaced with back ticks (for example \`0, \`1).  Each number representing a zero-based array notation for the type's generic parameters.

## Example

The following examples show how the ID strings for a class and its members would be generated.

```cpp
// xml_id_strings.cpp
// compile with: /clr /doc /LD
///
namespace N {
// "N:N"

   /// <see cref="System" />
   //  <see cref="N:System"/>
   ref class X {
   // "T:N.X"

   protected:
      ///
      !X(){}
      // "M:N.X.Finalize", destructor's representation in metadata

   public:
      ///
      X() {}
      // "M:N.X.#ctor"

      ///
      static X() {}
      // "M:N.X.#cctor"

      ///
      X(int i) {}
      // "M:N.X.#ctor(System.Int32)"

      ///
      ~X() {}
      // "M:N.X.Dispose", Dispose function representation in metadata

      ///
      System::String^ q;
      // "F:N.X.q"

      ///
      double PI;
      // "F:N.X.PI"

      ///
      int f() { return 1; }
      // "M:N.X.f"

      ///
      int bb(System::String ^ s, int % y, void * z) { return 1; }
      // "M:N.X.bb(System.String,System.Int32@,System.Void*)"

      ///
      int gg(array<short> ^ array1, array< int, 2 >^ IntArray) { return 0; }
      // "M:N.X.gg(System.Int16[], System.Int32[0:,0:])"

      ///
      static X^ operator+(X^ x, X^ xx) { return x; }
     // "M:N.X.op_Addition(N.X,N.X)"

      ///
      property int prop;
      // "M:N.X.prop"

      ///
      property int prop2 {
      // "P:N.X.prop2"

         ///
         int get() { return 0; }
         // M:N.X.get_prop2

         ///
         void set(int i) {}
         // M:N.X.set_prop2(System.Int32)
      }

      ///
      delegate void D(int i);
      // "T:N.X.D"

      ///
      event D ^ d;
      // "E:N.X.d"

      ///
      ref class Nested {};
      // "T:N.X.Nested"

      ///
      static explicit operator System::Int32 (X x) { return 1; }
      // "M:N.X.op_Explicit(N.X!System.Runtime.CompilerServices.IsByValue)~System.Int32"
   };
}
```

## See also

[XML Documentation](xml-documentation-visual-cpp.md)
