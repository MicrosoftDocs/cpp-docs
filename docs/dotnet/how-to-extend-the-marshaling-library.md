---
description: "Learn more about: How to: Extend the Marshaling Library"
title: "How to: Extend the Marshaling Library"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["Marshaling Library, extending"]
ms.assetid: 4c4a56d7-1d44-4118-b85f-f9686515e6e9
---
# How to: Extend the Marshaling Library

This topic explains how to extend the marshaling library to provide more conversions between data types. Users can extend the marshaling library for any data conversions not currently supported by the library.

You can extend the marshaling library in one of two ways - with or without a [marshal_context Class](../dotnet/marshal-context-class.md). Review the [Overview of Marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md) topic to determine whether a new conversion requires a context.

In both cases, you first create a file for new marshaling conversions. You do so to preserve the integrity of the standard marshaling library files. If you want to port a project to another computer or to another programmer, you must copy the new marshaling file together with the rest of the project. In this manner, the user receiving the project will be guaranteed to receive the new conversions and will not have to modify any library files.

### To Extend the Marshaling Library with a Conversion that does not Require a Context

1. Create a file to store the new marshaling functions, for example, MyMarshal.h.

1. Include one or more of the marshal library files:

   - marshal.h for base types.

   - marshal_windows.h for windows data types.

   - marshal_cppstd.h for C++ Standard Library data types.

   - marshal_atl.h for ATL data types.

1. Use the code at the end of these steps to write the conversion function. In this code, TO is the type to convert to, FROM is the type to convert from, and `from` is the parameter to be converted.

1. Replace the comment about conversion logic with code to convert the `from` parameter into an object of TO type and return the converted object.

```
namespace msclr {
   namespace interop {
      template<>
      inline TO marshal_as<TO, FROM> (const FROM& from) {
         // Insert conversion logic here, and return a TO parameter.
      }
   }
}
```

### To Extend the Marshaling Library with a Conversion that Requires a Context

1. Create a file to store the new marshaling functions, for example, MyMarshal.h

1. Include one or more of the marshal library files:

   - marshal.h for base types.

   - marshal_windows.h for windows data types.

   - marshal_cppstd.h for C++ Standard Library data types.

   - marshal_atl.h for ATL data types.

1. Use the code at the end of these steps to write the conversion function. In this code, TO is the type to convert to, FROM is the type to convert from, `toObject` is a pointer in which to store the result, and `fromObject` is the parameter to be converted.

1. Replace the comment about initializing with code to initialize the `toPtr` to the appropriate empty value. For example, if it is a pointer, set it to `NULL`.

1. Replace the comment about conversion logic with code to convert the `from` parameter into an object of *TO* type. This converted object will be stored in `toPtr`.

1. Replace the comment about setting `toObject` with code to set `toObject` to your converted object.

1. Replace the comment about cleaning up native resources with code to free any memory allocated by `toPtr`. If `toPtr` allocated memory by using **`new`**, use **`delete`** to free the memory.

```
namespace msclr {
   namespace interop {
      template<>
      ref class context_node<TO, FROM> : public context_node_base
      {
      private:
         TO toPtr;
      public:
         context_node(TO& toObject, FROM fromObject)
         {
            // (Step 4) Initialize toPtr to the appropriate empty value.
            // (Step 5) Insert conversion logic here.
            // (Step 6) Set toObject to the converted parameter.
         }
         ~context_node()
         {
            this->!context_node();
         }
      protected:
         !context_node()
         {
            // (Step 7) Clean up native resources.
         }
      };
   }
}
```

## Example: Extend marshaling library

The following example extends the marshaling library with a conversion that does not require a context. In this example, the code converts the employee information from a native data type to a managed data type.

```cpp
// MyMarshalNoContext.cpp
// compile with: /clr
#include <msclr/marshal.h>

value struct ManagedEmp {
   System::String^ name;
   System::String^ address;
   int zipCode;
};

struct NativeEmp {
   char* name;
   char* address;
   int zipCode;
};

namespace msclr {
   namespace interop {
      template<>
      inline ManagedEmp^ marshal_as<ManagedEmp^, NativeEmp> (const NativeEmp& from) {
         ManagedEmp^ toValue = gcnew ManagedEmp;
         toValue->name = marshal_as<System::String^>(from.name);
         toValue->address = marshal_as<System::String^>(from.address);
         toValue->zipCode = from.zipCode;
         return toValue;
      }
   }
}

using namespace System;
using namespace msclr::interop;

int main() {
   NativeEmp employee;

   employee.name = "Jeff Smith";
   employee.address = "123 Main Street";
   employee.zipCode = 98111;

   ManagedEmp^ result = marshal_as<ManagedEmp^>(employee);

   Console::WriteLine("Managed name: {0}", result->name);
   Console::WriteLine("Managed address: {0}", result->address);
   Console::WriteLine("Managed zip code: {0}", result->zipCode);

   return 0;
}
```

In the previous example, the `marshal_as` function returns a handle to the converted data. This was done in order to prevent creating an additional copy of the data. Returning the variable directly would have an unnecessary performance cost associated with it.

```Output
Managed name: Jeff Smith
Managed address: 123 Main Street
Managed zip code: 98111
```

## Example: Convert employee information

The following example converts the employee information from a managed data type to a native data type. This conversion requires a marshaling context.

```cpp
// MyMarshalContext.cpp
// compile with: /clr
#include <stdlib.h>
#include <string.h>
#include <msclr/marshal.h>

value struct ManagedEmp {
   System::String^ name;
   System::String^ address;
   int zipCode;
};

struct NativeEmp {
   const char* name;
   const char* address;
   int zipCode;
};

namespace msclr {
   namespace interop {
      template<>
      ref class context_node<NativeEmp*, ManagedEmp^> : public context_node_base
      {
      private:
         NativeEmp* toPtr;
         marshal_context context;
      public:
         context_node(NativeEmp*& toObject, ManagedEmp^ fromObject)
         {
            // Conversion logic starts here
            toPtr = NULL;

            const char* nativeName;
            const char* nativeAddress;

            // Convert the name from String^ to const char*.
            System::String^ tempValue = fromObject->name;
            nativeName = context.marshal_as<const char*>(tempValue);

            // Convert the address from String^ to const char*.
            tempValue = fromObject->address;
            nativeAddress = context.marshal_as<const char*>(tempValue);

            toPtr = new NativeEmp();
            toPtr->name = nativeName;
            toPtr->address = nativeAddress;
            toPtr->zipCode = fromObject->zipCode;

            toObject = toPtr;
         }
         ~context_node()
         {
            this->!context_node();
         }
      protected:
         !context_node()
         {
            // When the context is deleted, it will free the memory
            // allocated for toPtr->name and toPtr->address, so toPtr
            // is the only memory that needs to be freed.
            if (toPtr != NULL) {
               delete toPtr;
               toPtr = NULL;
            }
         }
      };
   }
}

using namespace System;
using namespace msclr::interop;

int main() {
   ManagedEmp^ employee = gcnew ManagedEmp();

   employee->name = gcnew String("Jeff Smith");
   employee->address = gcnew String("123 Main Street");
   employee->zipCode = 98111;

   marshal_context context;
   NativeEmp* result = context.marshal_as<NativeEmp*>(employee);

   if (result != NULL) {
      printf_s("Native name: %s\nNative address: %s\nNative zip code: %d\n",
         result->name, result->address, result->zipCode);
   }

   return 0;
}
```

```Output
Native name: Jeff Smith
Native address: 123 Main Street
Native zip code: 98111
```

## See also

[Overview of Marshaling in C++](../dotnet/overview-of-marshaling-in-cpp.md)
