---
title: "Troubleshooting Exceptions: System.BadImageFormatException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "BadImageFormatException class"
ms.assetid: 8d2b385a-3d6d-4dfa-8546-7ece562867e3
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Troubleshooting Exceptions: System.BadImageFormatException
A <xref:System.BadImageFormatException> exception is thrown when the file image of a DLL or executable program is not valid.  
  
## Associated Tips  
 **If your application uses 32-bit components, make sure that it always runs as a 32-bit application.**  
 If the **Platform target** property for your application project is set to `AnyCPU`, the compiled application can be run in either 64-bit or 32-bit mode. When it runs as a 64-bit application, the just-in-time (JIT) compiler produces 64-bit native code. If the application depends on a 32-bit managed or unmanaged component, that component will fail to load in 64-bit mode. To correct this problem, set the project's **Platform target** property to `x86` and recompile.  
  
 **Make sure that you are not using a component that was created with a different version of the .NET Framework.**  
 This exception is thrown when an application or component that was developed by using the [!INCLUDE[net_v10_short](../misc/includes/net_v10_short_md.md)] or the [!INCLUDE[net_v11_short](../misc/includes/net_v11_short_md.md)] attempts to load an assembly that was developed by using the [!INCLUDE[net_v20SP1_short](../misc/includes/net_v20sp1_short_md.md)] or later, or when an application that was developed by using the [!INCLUDE[net_v20SP1_short](../misc/includes/net_v20sp1_short_md.md)] or the [!INCLUDE[net_v35_short](../misc/includes/net_v35_short_md.md)] attempts to load an assembly that was developed by using the [!INCLUDE[net_v40_short](../misc/includes/net_v40_short_md.md)]. The <xref:System.BadImageFormatException> exception may be reported as a compile-time error, or the exception may be thrown at run time. See the <xref:System.BadImageFormatException> class for an example.  
  
 **Make sure that the file image is a valid managed assembly or module.**  
 This exception is thrown when an unmanaged dynamic link library or executable is passed to the <xref:System.Reflection.Assembly.Load%2A> method for loading.  
  
 For more information, Visual Basic users can refer to [Troubleshooting Interoperability](/dotnet/visual-basic/programming-guide/com-interop/troubleshooting-interoperability).  
  
## Remarks  
 Reflecting on C++ executable files may throw this exception. This is most likely caused by the C++ compiler stripping the relocation addresses or the .Reloc section from the executable file. To preserve the .relocation address in a C++ executable file, specify **/fixed:no** when linking.  
  
 For more causes of this exception, see the <xref:System.BadImageFormatException> class.  
  
## See Also  
 <xref:System.BadImageFormatException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)