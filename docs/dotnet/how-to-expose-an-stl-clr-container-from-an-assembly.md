---
title: "How to: Expose an STL-CLR Container from an Assembly | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "STL/CLR Containers [STL/CLR]"
  - "STL/CLR, cross-assembly issues"
ms.assetid: 87efb41b-3db3-4498-a2e7-f3ef8a99f04d
caps.latest.revision: 10
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
# How to: Expose an STL/CLR Container from an Assembly
STL/CLR containers such as `list` and `map` are implemented as template ref classes. Because C++ templates are instantiated at compile time, two template classes that have exactly the same signature but are in different assemblies are actually different types. This means that template classes cannot be used across assembly boundaries.  
  
 To make cross-assembly sharing possible, STL/CLR containers implement the generic interface <xref:System.Collections.Generic.ICollection%601>. By using this generic interface, all languages that support generics, including C++, C#, and Visual Basic, can access STL/CLR containers.  
  
 This topic shows you how to display the elements of several STL/CLR containers written in a C++ assembly named `StlClrClassLibrary`. We show two assemblies to access `StlClrClassLibrary`. The first assembly is written in C++, and the second in C#.  
  
 If both assemblies are written in C++, you can access the generic interface of a container by using its `generic_container` typedef. For example, if you have a container of type `cliext::vector<int>`, then its generic interface is: `cliext::vector<int>::generic_container`. Similarly, you can get an iterator over the generic interface by using the `generic_iterator` typedef, as in: `cliext::vector<int>::generic_iterator`.  
  
 Since these typedefs are declared in C++ header files, assemblies written in other languages cannot use them. Therefore, to access the generic interface for `cliext::vector<int>` in C# or any other .NET language, use `System.Collections.Generic.ICollection<int>`. To iterate over this collection, use a `foreach` loop.  
  
 The following table lists the generic interface that each STL/CLR container implements:  
  
|STL/CLR container|Generic interface|  
|------------------------|-----------------------|  
|deque<T\>|ICollection<T\>|  
|hash_map<K, V>|IDictionary<K, V>|  
|hash_multimap<K, V>|IDictionary<K, V>|  
|hash_multiset<T\>|ICollection<T\>|  
|hash_set<T\>|ICollection<T\>|  
|list<T\>|ICollection<T\>|  
|map<K, V>|IDictionary<K, V>|  
|multimap<K, V>|IDictionary<K, V>|  
|multiset<T\>|ICollection<T\>|  
|set<T\>|ICollection<T\>|  
|vector<T\>|ICollection<T\>|  
  
> [!NOTE]
>  Because the `queue`, `priority_queue`, and `stack` containers do not support iterators, they do not implement generic interfaces and cannot be accessed cross-assembly.  
  
## Example 1  
  
### Description  
 In this example, we declare a C++ class that contains private STL/CLR member data. We then declare public methods to grant access to the private collections of the class. We do it in two different ways, one for C++ clients and one for other .NET clients.  
  
### Code  
  
<CodeContentPlaceHolder>0</CodeContentPlaceHolder>  
## Example 2  
  
### Description  
 In this example, we implement the class declared in Example 1. In order for clients to use this class library, we use the manifest tool **mt.exe** to embed the manifest file into the DLL. For details, see the code comments.  
  
 For more information on the manifest tool and side-by-side assemblies, see [Building C/C++ Isolated Applications and Side-by-side Assemblies](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md).  
  
### Code  
  
<CodeContentPlaceHolder>1</CodeContentPlaceHolder>  
## Example 3  
  
### Description  
 In this example, we create a C++ client that uses the class library created in Examples 1 and 2. This client uses the `generic_container` typedefs of the STL/CLR containers to iterate over the containers and to display their contents.  
  
### Code  
  
<CodeContentPlaceHolder>2</CodeContentPlaceHolder>  
### Output  
  
<CodeContentPlaceHolder>3</CodeContentPlaceHolder>  
## Example 4  
  
### Description  
 In this example, we create a C# client that uses the class library created in Examples 1 and 2. This client uses the <xref:System.Collections.Generic.ICollection%601> methods of the STL/CLR containers to iterate over the containers and to display their contents.  
  
### Code  
  
```  
// CsConsoleApp.cs  
// compile with: /r:Microsoft.VisualC.STLCLR.dll /r:StlClrClassLibrary.dll /r:System.dll  
  
using System;  
using System.Collections.Generic;  
using StlClrClassLibrary;  
using cliext;  
  
namespace CsConsoleApp  
{  
    class Program  
    {  
        static int Main(string[] args)  
        {  
            StlClrClass theClass = new StlClrClass();  
  
            Console.WriteLine("cliext::deque contents:");  
            ICollection<char> iCollChar = theClass.GetDequeCs();  
            foreach (char c in iCollChar)  
            {  
                Console.WriteLine(c);  
            }  
            Console.WriteLine();  
  
            Console.WriteLine("cliext::list contents:");  
            ICollection<float> iCollFloat = theClass.GetListCs();  
            foreach (float f in iCollFloat)  
            {  
                Console.WriteLine(f);  
            }  
            Console.WriteLine();  
  
            Console.WriteLine("cliext::map contents:");  
            IDictionary<int, string> iDict = theClass.GetMapCs();  
            foreach (KeyValuePair<int, string> kvp in iDict)  
            {  
                Console.WriteLine("{0} {1}", kvp.Key, kvp.Value);  
            }  
            Console.WriteLine();  
  
            Console.WriteLine("cliext::set contents:");  
            ICollection<double> iCollDouble = theClass.GetSetCs();  
            foreach (double d in iCollDouble)  
            {  
                Console.WriteLine(d);  
            }  
            Console.WriteLine();  
  
            Console.WriteLine("cliext::vector contents:");  
            ICollection<int> iCollInt = theClass.GetVectorCs();  
            foreach (int i in iCollInt)  
            {  
                Console.WriteLine(i);  
            }  
            Console.WriteLine();  
  
            return 0;  
        }  
    }  
}  
```  
  
### Output  
  
```  
cliext::deque contents:  
a  
b  
  
cliext::list contents:  
3.14159  
2.71828  
  
cliext::map contents:  
0 Hello  
1 World  
  
cliext::set contents:  
2.71828  
3.14159  
  
cliext::vector contents:  
10  
20  
```  
  
## See Also  
 [STL/CLR Library Reference](../dotnet/stl-clr-library-reference.md)