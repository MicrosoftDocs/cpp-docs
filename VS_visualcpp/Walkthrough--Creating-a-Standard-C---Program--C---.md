---
title: "Walkthrough: Creating a Standard C++ Program (C++)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: get-started-article
ms.assetid: 48217e35-d892-46b7-93e3-f6f0b7e2da35
caps.latest.revision: 36
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Walkthrough: Creating a Standard C++ Program (C++)
You can use Visual C++ in the Visual Studio integrated development environment (IDE) to create Standard C++ programs. By following the steps in this walkthrough, you can create a project, add a new file to the project, modify the file to add C++ code, and then compile and run the program by using Visual Studio.  
  
 You can type your own C++ program or use one of the sample programs. The sample program in this walkthrough is a console application. This application uses the `set` container in the Standard Template Library (STL).  
  
 Visual C++ complies with the 2003 C++ Standard, with these major exceptions: two-stage name lookup, exception specifications, and export. Additionally, Visual C++ supports several C++0x features, for example, lambdas, auto, static_assert, rvalue references, and extern templates.  
  
> [!NOTE]
>  If compliance with the standard is required, use the **/Za** compiler option to disable Microsoft extensions to the standard. For more information, see [/Za, /Ze (Disable Language Extensions)](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md).  
  
## Prerequisites  
 To complete this walkthrough, you must understand the fundamentals of the C++ language.  
  
### To create a project and add a source file  
  
1.  Create a project by pointing to **New** on the **File** menu, and then clicking **Project**.  
  
2.  In the **Visual C++** project types pane, click **Win32**, and then click **Win32 Console Application**.  
  
3.  Type a name for the project.  
  
     By default, the solution that contains the project has the same name as the project, but you can type a different name. You can also type a different location for the project.  
  
     Click **OK** to create the project.  
  
4.  In the **Win32 Application Wizard**, click **Next**, select **Empty Project**,and then click **Finish**.  
  
5.  If **Solution Explorer** is not displayed, on the **View** menu, click **Solution Explorer**.  
  
6.  Add a new source file to the project, as follows.  
  
    1.  In **Solution Explorer**, right-click the **Source Files** folder, point to **Add**, and then click **New Item**.  
  
    2.  In the **Code** node, click **C++ File (.cpp)**, type a name for the file, and then click **Add**.  
  
     The .cpp file appears in the Source Files folder in **Solution Explorer**, and the file is opened in the Visual Studio editor.  
  
7.  In the file in the editor, type a valid C++ program that uses the Standard C++ Library, or copy one of the sample programs and paste it in the file.  
  
     For example, you can use the [set::find](../Topic/set::find%20\(STL%20Samples\).md) sample program, which is one of the the Standard Template Library samples that are included in Help.  
  
     If you use the sample program, notice the `using namespace std;` directive. This directive enables the program to use `cout` and `endl` without requiring fully qualified names (`std::cout` and `std::endl`).  
  
8.  Save the file.  
  
9. On the **Build** menu, click **Build Solution**.  
  
     The **Output** window displays information about the compilation progress, for example, the location of the build log and a message that indicates the build status.  
  
10. On the **Debug** menu, click **Start without Debugging**.  
  
     If you used the sample program, a command window is displayed and shows whether certain integers are found in the set.  
  
## Next Steps  
 **Previous:** [Creating Command-Line Applications (C++)](assetId:///2505d9ed-aca4-426a-9071-078a2d707254). **Next:**[Walkthrough: Compiling a Native C++ Program on the Command Line](../VS_visualcpp/Walkthrough--Compiling-a-Native-C---Program-on-the-Command-Line.md).  
  
## See Also  
 [Visual C++ Guided Tour](assetId:///499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [C++ Language Reference](../VS_visualcpp/C---Language-Reference.md)   
 [C++ Standard Library](../VS_visualcpp/C---Standard-Library-Reference.md)