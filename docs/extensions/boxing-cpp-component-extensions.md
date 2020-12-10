---
description: "Learn more about: Boxing  (C++/CLI and C++/CX)"
title: "Boxing  (C++/CLI and C++/CX)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["boxing, C++"]
ms.assetid: b5fd2c98-c578-4f83-8257-6dd663478665
---
# Boxing  (C++/CLI and C++/CX)

The conversion of value types to objects is called *boxing*, and the conversion of objects to value types is called *unboxing*.

## All Runtimes

(There are no remarks for this language feature that apply to all runtimes.)

## Windows Runtime

C++/CX supports a shorthand syntax for boxing value types and unboxing reference types. A value type is boxed when it is assigned to a variable of type `Object`. An `Object` variable is unboxed when it is assigned to a value type variable and the unboxed type is specified in parentheses; that is, when the object variable is cast to a value type.

```cpp
  Platform::Object^
  object_variable  = value_variable;
value_variable = (value_type) object_variable;
```

### Requirements

Compiler option: `/ZW`

### Examples

The following code example boxes and unboxes a `DateTime` value. First, the example obtains a `DateTime` value that represents the current date and time and assigns it to a `DateTime` variable. Then the `DateTime` is boxed by assigning it to an `Object` variable. Finally, the boxed value is unboxed by assigning it to another `DateTime` variable.

To test the example, create a `BlankApplication` project, replace the `BlankPage::OnNavigatedTo()` method, and then specify breakpoints at the closing bracket and the assignment to variable `str1`. When the example reaches the closing bracket, examine `str1`.

```cpp
void BlankPage::OnNavigatedTo(NavigationEventArgs^ e)
{
    using namespace Windows::Globalization::DateTimeFormatting;

    Windows::Foundation::DateTime dt, dtAnother;
    Platform::Object^ obj1;

    Windows::Globalization::Calendar^ c =
        ref new Windows::Globalization::Calendar;
    c->SetToNow();
    dt = c->GetDateTime();
    auto dtf = ref new DateTimeFormatter(
                           YearFormat::Full,
                           MonthFormat::Numeric,
                           DayFormat::Default,
                           DayOfWeekFormat::None);
    String^ str1 = dtf->Format(dt);
    OutputDebugString(str1->Data());
    OutputDebugString(L"\r\n");

    // Box the value type and assign to a reference type.
    obj1 = dt;
    // Unbox the reference type and assign to a value type.
    dtAnother = (Windows::Foundation::DateTime) obj1;

    // Format the DateTime for display.
    String^ str2 = dtf->Format(dtAnother);
    OutputDebugString(str2->Data());
}
```

For more information, see [Boxing (C++/CX)](../cppcx/boxing-c-cx.md).

## Common Language Runtime

The compiler boxes value types to <xref:System.Object>. This is possible because of a compiler-defined conversion to convert value types to <xref:System.Object>.

Boxing and unboxing enable value types to be treated as objects. Value types, including both struct types and built-in types such as int, can be converted to and from the type <xref:System.Object>.

For more information, see:

- [How to: Explicitly Request Boxing](../dotnet/how-to-explicitly-request-boxing.md)

- [How to: Use gcnew to Create Value Types and Use Implicit Boxing](../dotnet/how-to-use-gcnew-to-create-value-types-and-use-implicit-boxing.md)

- [How to: Unbox](../dotnet/how-to-unbox.md)

- [Standard Conversions and Implicit Boxing](../dotnet/standard-conversions-and-implicit-boxing.md)

### Requirements

Compiler option: `/clr`

### Examples

The following sample shows how implicit boxing works.

```cpp
// vcmcppv2_explicit_boxing2.cpp
// compile with: /clr
using namespace System;

ref class A {
public:
   void func(System::Object^ o){Console::WriteLine("in A");}
};

value class V {};

interface struct IFace {
   void func();
};

value class V1 : public IFace {
public:
   virtual void func() {
      Console::WriteLine("Interface function");
   }
};

value struct V2 {
   // conversion operator to System::Object
   static operator System::Object^(V2 v2) {
      Console::WriteLine("operator System::Object^");
      return (V2^)v2;
   }
};

void func1(System::Object^){Console::WriteLine("in void func1(System::Object^)");}
void func1(V2^){Console::WriteLine("in func1(V2^)");}

void func2(System::ValueType^){Console::WriteLine("in func2(System::ValueType^)");}
void func2(System::Object^){Console::WriteLine("in func2(System::Object^)");}

int main() {
   // example 1 simple implicit boxing
   Int32^ bi = 1;
   Console::WriteLine(bi);

   // example 2 calling a member with implicit boxing
   Int32 n = 10;
   Console::WriteLine("xx = {0}", n.ToString());

   // example 3 implicit boxing for function calls
   A^ a = gcnew A;
   a->func(n);

   // example 4 implicit boxing for WriteLine function call
   V v;
   Console::WriteLine("Class {0} passed using implicit boxing", v);
   Console::WriteLine("Class {0} passed with forced boxing", (V^)(v));   // force boxing

   // example 5 casting to a base with implicit boxing
   V1 v1;
   IFace ^ iface = v1;
   iface->func();

   // example 6 user-defined conversion preferred over implicit boxing for function-call parameter matching
   V2 v2;
   func1(v2);   // user defined conversion from V2 to System::Object preferred over implicit boxing
                // Will call void func1(System::Object^);

   func2(v2);   // OK: Calls "static V2::operator System::Object^(V2 v2)"
   func2((V2^)v2);   // Using explicit boxing: calls func2(System::ValueType^)
}
```

```Output
1

xx = 10

in A

Class V passed using implicit boxing

Class V passed with forced boxing

Interface function

in func1(V2^)

in func2(System::ValueType^)

in func2(System::ValueType^)
```

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)
