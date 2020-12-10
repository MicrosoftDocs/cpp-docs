---
description: "Learn more about: Reflection (C++/CLI)"
title: "Reflection (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["typeid keyword [C++]", "reflection [C++}, about reflection", "metadata, reflection", "GetType method", ".NET Framework [C++], reflection", "data types [C++], reflection", "reflection [C++}", "plug-ins [C++]", "reflection [C++}, plug-ins", "assemblies [C++], enumerating data types in", "public types [C++]", "reflection [C++], external assemblies", "assemblies [C++]", "data types [C++], enumerating", "public members [C++]"]
ms.assetid: 46b6ff4a-e441-4022-8892-78e69422f230
---
# Reflection (C++/CLI)

Reflection allows known data types to be inspected at runtime. Reflection allows the enumeration of data types in a given assembly, and the members of a given class or value type can be discovered. This is true regardless of whether the type was known or referenced at compile time. This makes reflection a useful feature for development and code management tools.

Note that the assembly name provided is the strong name (see [Creating and Using Strong-Named Assemblies](/dotnet/framework/app-domains/create-and-use-strong-named-assemblies)), which includes the assembly version, culture, and signing information. Note also that the name of the namespace in which the data type is defined can be retrieved, along with the name of the base class.

The most common way to access reflection features is through the <xref:System.Object.GetType%2A> method. This method is provided by <xref:System.Object?displayProperty=nameWithType>, from which all garbage-collected classes derive.

> [!NOTE]
> Reflection on an .exe built with the Microsoft C++ compiler is only allowed if the .exe is built with the **/clr:pure** or **/clr:safe** compiler options. The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unavailable in Visual Studio 2017. See [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md) for more information.

For more information, see <xref:System.Reflection>

## Example: GetType

The `GetType` method returns a pointer to a <xref:System.Type> class object, which describes the type upon when the object is based. (The **Type** object does not contain any instance-specific information.) One such item is the full name of the type, which can be displayed as follows:

Note that the type name includes the full scope in which the type is defined, including the namespace, and that it is displayed in .NET syntax, with a dot as the scope resolution operator.

```cpp
// vcpp_reflection.cpp
// compile with: /clr
using namespace System;
int main() {
   String ^ s = "sample string";
   Console::WriteLine("full type name of '{0}' is '{1}'", s, s->GetType());
}
```

```Output
full type name of 'sample string' is 'System.String'
```

## Example: boxed value types

Value types can be used with the `GetType` function as well, but they must be boxed first.

```cpp
// vcpp_reflection_2.cpp
// compile with: /clr
using namespace System;
int main() {
   Int32 i = 100;
   Object ^ o = i;
   Console::WriteLine("type of i = '{0}'", o->GetType());
}
```

```Output
type of i = 'System.Int32'
```

## Example: typeid

As with the `GetType` method, the [typeid](../extensions/typeid-cpp-component-extensions.md) operator returns a pointer to a **Type** object, so this code indicates the type name **System.Int32**. Displaying type names is the most basic feature of reflection, but a potentially more useful technique is to inspect or discover the valid values for enumerated types. This can be done by using the static **Enum::GetNames** function, which returns an array of strings, each containing an enumeration value in text form.  The following sample retrieves an array of strings that describes the value enumeration values for the **Options** (CLR) enum and displays them in a loop.

If a fourth option is added to the **Options** enumeration, this code will report the new option without recompilation, even if the enumeration is defined in a separate assembly.

```cpp
// vcpp_reflection_3.cpp
// compile with: /clr
using namespace System;

enum class Options {   // not a native enum
   Option1, Option2, Option3
};

int main() {
   array<String^>^ names = Enum::GetNames(Options::typeid);

   Console::WriteLine("there are {0} options in enum '{1}'",
               names->Length, Options::typeid);

   for (int i = 0 ; i < names->Length ; i++)
      Console::WriteLine("{0}: {1}", i, names[i]);

   Options o = Options::Option2;
   Console::WriteLine("value of 'o' is {0}", o);
}
```

```Output
there are 3 options in enum 'Options'
0: Option1
1: Option2
2: Option3
value of 'o' is Option2
```

## Example: GetType members and properties

The `GetType` object supports a number of members and properties that can be used to examine a type. This code retrieves and displays some of this information:

```cpp
// vcpp_reflection_4.cpp
// compile with: /clr
using namespace System;
int main() {
   Console::WriteLine("type information for 'String':");
   Type ^ t = String::typeid;

   String ^ assemblyName = t->Assembly->FullName;
   Console::WriteLine("assembly name: {0}", assemblyName);

   String ^ nameSpace = t->Namespace;
   Console::WriteLine("namespace: {0}", nameSpace);

   String ^ baseType = t->BaseType->FullName;
   Console::WriteLine("base type: {0}", baseType);

   bool isArray = t->IsArray;
   Console::WriteLine("is array: {0}", isArray);

   bool isClass = t->IsClass;
   Console::WriteLine("is class: {0}", isClass);
}
```

```Output
type information for 'String':
assembly name: mscorlib, Version=1.0.5000.0, Culture=neutral,
PublicKeyToken=b77a5c561934e089
namespace: System
base type: System.Object
is array: False
is class: True
```

## Example: enumeration of types

Reflection also allows the enumeration of types within an assembly and the members within classes. To demonstrate this feature, define a simple class:

```cpp
// vcpp_reflection_5.cpp
// compile with: /clr /LD
using namespace System;
public ref class TestClass {
   int m_i;
public:
   TestClass() {}
   void SimpleTestMember1() {}
   String ^ SimpleMember2(String ^ s) { return s; }
   int TestMember(int i) { return i; }
   property int Member {
      int get() { return m_i; }
      void set(int i) { m_i = i; }
   }
};
```

## Example: inspection of assemblies

If the code above is compiled into a DLL called vcpp_reflection_6.dll, you can then use reflection to inspect the contents of this assembly. This involves using the static reflection API function xref:System.Reflection.Assembly.Load%2A?displayProperty=nameWithType to load the assembly. This function returns the address of an **Assembly** object that can then be queried about the modules and types within.

Once the reflection system successfully loads the assembly, an array of **Type** objects is retrieved with the <xref:System.Reflection.Assembly.GetTypes%2A?displayProperty=nameWithType> function. Each array element contains information about a different type, although in this case, only one class is defined. Using a loop, each **Type** in this array is queried about the type members using the **Type::GetMembers** function. This function returns an array of **MethodInfo** objects, each object containing information about the member function, data member, or property in the type.

Note that the list of methods includes the functions explicitly defined in **TestClass** and the functions implicitly inherited from the **System::Object** class. As part of being described in .NET rather than in Visual C++ syntax, properties appear as the underlying data member accessed by the get/set functions. The get/set functions appear in this list as regular methods. Reflection is supported through the common language runtime, not by the Microsoft C++ compiler.

Although you used this code to inspect an assembly that you defined, you can also use this code to inspect .NET assemblies. For example, if you change TestAssembly to mscorlib, then you will see a listing of every type and method defined in mscorlib.dll.

```cpp
// vcpp_reflection_6.cpp
// compile with: /clr
using namespace System;
using namespace System::IO;
using namespace System::Reflection;
int main() {
   Assembly ^ a = nullptr;
   try {
      // load assembly -- do not use file extension
      // will look for .dll extension first
      // then .exe with the filename
      a = Assembly::Load("vcpp_reflection_5");
   }
   catch (FileNotFoundException ^ e) {
      Console::WriteLine(e->Message);
      return -1;
   }

   Console::WriteLine("assembly info:");
   Console::WriteLine(a->FullName);
   array<Type^>^ typeArray = a->GetTypes();

   Console::WriteLine("type info ({0} types):", typeArray->Length);

   int totalTypes = 0;
   int totalMembers = 0;
   for (int i = 0 ; i < typeArray->Length ; i++) {
      // retrieve array of member descriptions
      array<MemberInfo^>^ member = typeArray[i]->GetMembers();

      Console::WriteLine("  members of {0} ({1} members):",
      typeArray[i]->FullName, member->Length);
      for (int j = 0 ; j < member->Length ; j++) {
         Console::Write("       ({0})",
         member[j]->MemberType.ToString() );
         Console::Write("{0}  ", member[j]);
         Console::WriteLine("");
         totalMembers++;
      }
      totalTypes++;
   }
   Console::WriteLine("{0} total types, {1} total members",
   totalTypes, totalMembers);
}
```

## <a name="implement"></a> How to: Implement a Plug-In Component Architecture using Reflection

The following code examples demonstrate the use of reflection to implement a simple "plug-in" architecture. The first listing is the application, and the second is the plug-in. The application is a multiple document form that populates itself using any form-based classes found in the plug-in DLL provided as a command-line argument.

The application attempts to load the provided assembly using the <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName> method. If successful, the types inside the assembly are enumerated using the <xref:System.Reflection.Assembly.GetTypes%2A?displayProperty=fullName> method. Each type is then checked for compatibility using the <xref:System.Type.IsAssignableFrom%2A?displayProperty=fullName> method. In this example, classes found in the provided assembly must be derived from the <xref:System.Windows.Forms.Form> class to qualify as a plug-in.

Compatible classes are then instantiated with the <xref:System.Activator.CreateInstance%2A?displayProperty=fullName> method, which accepts a <xref:System.Type> as an argument and returns a pointer to a new instance. Each new instance is then attached to the form and displayed.

Note that the <xref:System.Reflection.Assembly.Load%2A> method does not accept assembly names that include the file extension. The main function in the application trims any provided extensions, so the following code example works in either case.

### Example

The following code defines the application that accepts plug-ins. An assembly name must be provided as the first argument. This assembly should contain at least one public <xref:System.Windows.Forms.Form> derived type.

```cpp
// plugin_application.cpp
// compile with: /clr /c
#using <system.dll>
#using <system.drawing.dll>
#using <system.windows.forms.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Reflection;

ref class PluggableForm : public Form  {
public:
   PluggableForm() {}
   PluggableForm(Assembly^ plugAssembly) {
      Text = "plug-in example";
      Size = Drawing::Size(400, 400);
      IsMdiContainer = true;

      array<Type^>^ types = plugAssembly->GetTypes( );
      Type^ formType = Form::typeid;

      for (int i = 0 ; i < types->Length ; i++) {
         if (formType->IsAssignableFrom(types[i])) {
            // Create an instance given the type description.
            Form^ f = dynamic_cast<Form^> (Activator::CreateInstance(types[i]));
            if (f) {
               f->Text = types[i]->ToString();
               f->MdiParent = this;
               f->Show();
            }
         }
      }
   }
};

int main() {
   Assembly^ a = Assembly::LoadFrom("plugin_application.exe");
   Application::Run(gcnew PluggableForm(a));
}
```

### Example

The following code defines three classes derived from <xref:System.Windows.Forms.Form>. When the name of the resulting assembly name is passed to the executable in the previous listing, each of these three classes will be discovered and instantiated, despite the fact that they were all unknown to the hosting application at compile time.

```cpp
// plugin_assembly.cpp
// compile with: /clr /LD
#using <system.dll>
#using <system.drawing.dll>
#using <system.windows.forms.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Reflection;
using namespace System::Drawing;

public ref class BlueForm : public Form {
public:
   BlueForm() {
      BackColor = Color::Blue;
   }
};

public ref class CircleForm : public Form {
protected:
   virtual void OnPaint(PaintEventArgs^ args) override {
      args->Graphics->FillEllipse(Brushes::Green, ClientRectangle);
   }
};

public ref class StarburstForm : public Form {
public:
   StarburstForm(){
      BackColor = Color::Black;
   }
protected:
   virtual void OnPaint(PaintEventArgs^ args) override {
      Pen^ p = gcnew Pen(Color::Red, 2);
      Random^ r = gcnew Random( );
      Int32 w = ClientSize.Width;
      Int32 h = ClientSize.Height;
      for (int i=0; i<100; i++) {
         float x1 = w / 2;
         float y1 = h / 2;
         float x2 = r->Next(w);
         float y2 = r->Next(h);
         args->Graphics->DrawLine(p, x1, y1, x2, y2);
      }
   }
};
```

## <a name="enumerate"></a> How to: Enumerate Data Types in Assemblies using Reflection

The following code demonstrates the enumeration of public types and members using <xref:System.Reflection>.

Given the name of an assembly, either in the local directory or in the GAC, the code below attempts to open the assembly and retrieve descriptions. If successful, each type is displayed with its public members.

Note that <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName> requires that no file extension is used. Therefore, using "mscorlib.dll" as a command-line argument will fail, while using just "mscorlib" will result the display of the .NET Framework types. If no assembly name is provided, the code will detect and report the types within the current assembly (the EXE resulting from this code).

### Example

```cpp
// self_reflection.cpp
// compile with: /clr
using namespace System;
using namespace System::Reflection;
using namespace System::Collections;

public ref class ExampleType {
public:
   ExampleType() {}
   void Func() {}
};

int main() {
   String^ delimStr = " ";
   array<Char>^ delimiter = delimStr->ToCharArray( );
   array<String^>^ args = Environment::CommandLine->Split( delimiter );

// replace "self_reflection.exe" with an assembly from either the local
// directory or the GAC
   Assembly^ a = Assembly::LoadFrom("self_reflection.exe");
   Console::WriteLine(a);

   int count = 0;
   array<Type^>^ types = a->GetTypes();
   IEnumerator^ typeIter = types->GetEnumerator();

   while ( typeIter->MoveNext() ) {
      Type^ t = dynamic_cast<Type^>(typeIter->Current);
      Console::WriteLine("   {0}", t->ToString());

      array<MemberInfo^>^ members = t->GetMembers();
      IEnumerator^ memberIter = members->GetEnumerator();
      while ( memberIter->MoveNext() ) {
         MemberInfo^ mi = dynamic_cast<MemberInfo^>(memberIter->Current);
         Console::Write("      {0}", mi->ToString( ) );
         if (mi->MemberType == MemberTypes::Constructor)
            Console::Write("   (constructor)");

         Console::WriteLine();
      }
      count++;
   }
   Console::WriteLine("{0} types found", count);
}
```

## See also

- [.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
