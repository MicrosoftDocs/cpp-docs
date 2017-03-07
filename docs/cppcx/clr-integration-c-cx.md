---
title: "CLR integration (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 76e213cf-2f3d-4181-b35b-9fd25d5b307c
caps.latest.revision: 10
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# CLR integration (C++/CX)
Some [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] types receive special handling in C++/CX and the languages that are based on the common language runtime (CLR). This article discusses how several types in one language map to another language. For example, the CLR maps Windows.Foundation.IVector to System.Collections.IList, Windows.Foundation.IMap to System.Collections.IDictionary, and so on. Similarly, C++/CX specially maps types such as Platform::Delegate and Platform::String.  
  
## Mapping the [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] to C++/CX  
 When C++/CX reads a Windows metadata (.winmd) file, the compiler automatically maps common [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] namespaces and types to C++/CX namespaces and types. For example, the numeric [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] type `UInt32` is automatically mapped to `default::uint32`.  
  
 C++/CX maps several other [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] types to the **Platform** namespace. For example, the **Windows::Foundation** HSTRING handle, which represents a read-only Unicode text string, is mapped to the C++/CX`Platform::String` class. When a [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] operation returns an error HRESULT, it's mapped to a C++/CX`Platform::Exception`. For more information, see [Built-in Types](http://msdn.microsoft.com/en-us/acc196fd-09da-4882-b554-6c94685ec75f).  
  
 The C++/CX also maps certain types in [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] namespaces to enhance the functionality of the type. For these types, C++/CX provides helper constructors and methods that are specific to C++ and are not available in the type's standard .winmd file.  
  
 The following lists show value structs that support new constructors and helper methods. If you have previously written code that uses struct initialization lists, change it to use the newly added constructors.  
  
 **Windows::Foundation**  
  
-   Point  
  
-   Rect  
  
-   Size  
  
 **Windows::UI**  
  
-   Color  
  
 **Windows::UI::Xaml**  
  
-   CornerRadius  
  
-   Duration  
  
-   GridLength  
  
-   Thickness  
  
 **Windows::UI::Xaml::Interop**  
  
1.  TypeName  
  
 **Windows::UI::Xaml::Media**  
  
-   Matrix  
  
 **Windows::UI::Xaml::Media::Animation**  
  
-   KeyTime  
  
-   RepeatBehavior  
  
 **Windows::UI::Xaml::Media::Media3D**  
  
-   Matrix3D  
  
## Mapping the CLR to C++/CX  
 When the Visual C++ or C# compilers read a .winmd file, they automatically map certain types in the metadata file to appropriate C++/CX or CLR types. For example, in the CLR, the IVector\<T> interface is mapped to IList\<T>. But in C++/CX, the IVector\<T> interface is not mapped to another type.  
  
 IReference\<T> in the [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] maps to Nullable\<T> in .NET.  
  
## See Also  
 [Interoperating with Other Languages](../cppcx/interoperating-with-other-languages-c-cx.md)