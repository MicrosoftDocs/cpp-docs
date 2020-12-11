---
description: "Learn more about: How to: Compile MFC and ATL Code By Using /clr"
title: "How to: Compile MFC and ATL Code By Using -clr"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC [C++], interoperability", "ATL [C++], interoperability", "mixed assemblies [C++], MFC code", "mixed assemblies [C++], ATL code", "/clr compiler option [C++], compiling ATL and MFC code", "interoperability [C++], /clr compiler option", "regular MFC DLLs [C++], /clr compiler option", "interop [C++], /clr compiler option", "extension DLLs [C++], /clr compiler option"]
ms.assetid: 12464bec-33a4-482c-880a-c078de7f6ea5
---
# How to: Compile MFC and ATL Code By Using /clr

This topic discusses how to compile existing MFC and ATL programs to target the Common Language Runtime.

### To compile an MFC executable or regular MFC DLL by using /clr

1. Right-click the project in **Solution Explorer** and then click **Properties**.

1. In the **Project Properties** dialog box, expand the node next to **Configuration Properties** and select **General**. In the right pane, under **Project Defaults**, set **Common Language Runtime support** to **Common Language Runtime Support (/clr)**.

   In the same pane, make sure that **Use of MFC** is set to **Use MFC in a Shared DLL**.

1. Under **Configuration Properties**, expand the node next to **C/C++** and select **General**. Make sure that **Debug Information Format** is set to **Program Database /Zi** (not **/ZI**).

1. Select the **Code Generation** node. Set **Enable Minimal Rebuild** to **No (/Gm-)**. Also set **Basic Runtime Checks** to **Default**.

1. Under **Configuration Properties**, select **C/C++** and then **Code Generation**. Make sure that **Runtime Library** is set to either **Multi-threaded Debug DLL (/MDd)** or **Multi-threaded DLL (/MD)**.

1. In Stdafx.h, add the following line.

    ```
    #using <System.Windows.Forms.dll>
    ```

### To compile an MFC extension DLL by using /clr

1. Follow the steps in "To compile an MFC executable or regular MFC DLL by using /clr".

1. Under **Configuration Properties**, expand the node next to **C/C++** and select **Precompiled Headers**. Set **Create/Use Precompiled Header** to **Not using Precompiled Headers**.

   As an alternative, in **Solution Explorer**, right-click Stdafx.cpp and then click **Properties**. Under **Configuration Properties**, expand the node next to **C/C++** and select **General**. Set **Compile with Common Language Runtime support** to **No Common Language Runtime support**.

1. For the file that contains DllMain and anything it calls, in **Solution Explorer**, right-click the file and then click **Properties**. Under **Configuration Properties**, expand the node next to **C/C++** and select **General**. In the right pane, under **Project Defaults**, set **Compile with Common Language Runtime support** to **No Common Language Runtime support**.

### To compile an ATL executable by using /clr

1. In **Solution Explorer**, right-click the project and then click **Properties**.

1. In the **Project Properties** dialog box, expand the node next to **Configuration Properties** and select **General**. In the right pane, under **Project Defaults**, set **Common Language Runtime support** to **Common Language Runtime Support (/clr)**.

1. Under **Configuration Properties**, expand the node next to **C/C++** and select **General**. Make sure that **Debug Information Format** is set to **Program Database /Zi** (not **/ZI**).

1. Select the **Code Generation** node. Set **Enable Minimal Rebuild** to **No (/Gm-)**. Also set **Basic Runtime Checks** to **Default**.

1. Under **Configuration Properties**, select **C/C++** and then **Code Generation**. Make sure that **Runtime Library** is set to either **Multi-threaded Debug DLL (/MDd)** or **Multi-threaded DLL (/MD)**.

1. For every MIDL-generated file (C files), right-click the file in **Solution Explorer** and then click **Properties**. Under **Configuration Properties**, expand the node next to **C/C++** and select **General**. Set **Compile with Common Language Runtime support** to **No Common Language Runtime support**.

### To compile an ATL DLL by using /clr

1. Follow the steps in the "To compile an ATL executable by using /clr" section.

1. Under **Configuration Properties**, expand the node next to **C/C++** and select **Precompiled Headers**. Set **Create/Use Precompiled Header** to **Not using Precompiled Headers**.

   As an alternative, in **Solution Explorer**, right-click Stdafx.cpp and then click **Properties**. Under **Configuration Properties**, expand the node next to **C/C++** and select **General**. Set **Compile with Common Language Runtime support** to **No Common Language Runtime support**.

1. For the file that contains DllMain and anything it calls, in **Solution Explorer**, right-click the file and then click **Properties**. Under **Configuration Properties**, expand the node next to **C/C++** and select **General**. In the right pane, under **Project Defaults**, set **Compile with Common Language Runtime support** to **No Common Language Runtime support**.

## See also

[Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)
