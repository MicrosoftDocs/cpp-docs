---
title: "Walkthrough: Creating and Using a Dynamic Link Library (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "libraries [C++], DLLs"
  - "DLLs [C++], walkthroughs"
ms.assetid: 3ae94848-44e7-4955-bbad-7d40f493e941
caps.latest.revision: 36
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# Walkthrough: Creating and Using a Dynamic Link Library (C++)
This step-by-step walkthrough shows how to create a dynamic link library (DLL) for use with a C++ app. Using a library is a great way to reuse code. Rather than re-implementing the same routines in every program that you create, you write them one time and then reference them from apps that require the functionality. By putting code in the DLL, you save space in every app that references it, and you can update the DLL without recompiling all of the apps that use it. For more information about DLLs, see [DLLs in Visual C++](../build/dlls-in-visual-cpp.md).  
  
 This walkthrough covers these tasks:  
  
-   Create a DLL project.  
  
-   Add a class to the DLL that exports static functions.  
  
-   Create a console app project.  
  
-   Use the functions exported by the DLL in the console app.  
  
-   Run the completed app.  
  
 This walkthrough creates a DLL that can be called from apps that use C++ calling conventions. This requires both the DLL and the client app to be built by using the same compiler toolset, so that the internal naming conventions match. It's also possible to create DLLs that can be called from apps written in other languages and built using other compilers by using the C calling convention. For more information about specifying C linkage, see [Exporting C++ Functions for Use in C-Language Executables](../build/exporting-cpp-functions-for-use-in-c-language-executables.md). For information about how to create DLLs for use with other languages, see [Calling DLL Functions from Visual Basic Applications](../build/calling-dll-functions-from-visual-basic-applications.md).  
  
 This simple walkthrough uses a combined solution that contains both the DLL and the client app, and uses implicit linking at load-time to import the DLLs functions. A more common situation involves third-party DLLs that are not built as part of your solution, or that use explicit linkage to load the DLLs at run-time rather than at load-time. For more information about implicit linking and explicit linking, see [Determining Which Linking Method to Use](../build/determining-which-linking-method-to-use.md).  
  
## Prerequisites  
 This topic assumes that you understand the fundamentals of the C++ language and the basics of using the Visual Studio IDE. The Visual C++ components must be installed in Visual Studio to use this walkthrough.  
  
### To create a dynamic link library (DLL) project  
  
1.  On the menu bar, choose **File**, **New**, **Project**.  
  
2.  In the left pane of the **New Project** dialog box, expand **Installed**, **Templates**, **Visual C++**, and then select **Win32**.  
  
3.  In the center pane, select **Win32 Console Application**.  
  
4.  Specify a name for the project—for example, **MathLibrary**—in the **Name** box. Specify a name for the solution—for example, **MathLibraryAndClient**—in the **Solution name** box. Choose the **OK** button.  
  
5.  On the **Overview** page of the **Win32 Application Wizard** dialog box, choose the **Next** button.  
  
6.  On the **Application Settings** page, under **Application type**, select **DLL**.  
  
7.  Choose the **Finish** button to create the project.  
  
### To add a class to the dynamic link library  
  
1.  To create a header file for a new class, on the menu bar, choose **Project**, **Add New Item**. In the **Add New Item** dialog box, in the left pane, select **Visual C++**. In the center pane, select **Header File (.h)**. Specify a name for the header file—for example, **MathLibrary.h**—and then choose the **Add** button. A blank header file is displayed.  
  
2.  Replace the contents of the header file with this code:  
  
    ```cpp  
    // MathLibrary.h - Contains declaration of Function class  
    #pragma once  
  
    #ifdef MATHLIBRARY_EXPORTS  
    #define MATHLIBRARY_API __declspec(dllexport)   
    #else  
    #define MATHLIBRARY_API __declspec(dllimport)   
    #endif  
  
    namespace MathLibrary  
    {  
        // This class is exported from the MathLibrary.dll  
        class Functions  
        {  
        public:  
            // Returns a + b  
            static MATHLIBRARY_API double Add(double a, double b);  
  
            // Returns a * b  
            static MATHLIBRARY_API double Multiply(double a, double b);  
  
            // Returns a + (a * b)  
            static MATHLIBRARY_API double AddMultiply(double a, double b);  
        };  
    }  
    ```  
  
     This code declares a namespace, **MathLibrary**,  that contains a class named **Functions** that contains member functions to perform some mathematical operations.  
  
     Notice the preprocessor statements at the top of the file. By default, the New Project template for a DLL adds `PROJECTNAME`_EXPORTS to the defined preprocessor symbols for the DLL project. In this example, **MATHLIBRARY_EXPORTS** is defined when your **MathLibrary** DLL project is built. When the **MATHLIBRARY_EXPORTS** symbol is defined, the **MATHLIBRARY_API** symbol sets the `__declspec(dllexport)` modifier on the member function declarations in this code. This modifier tells the compiler and linker to export the function or variable from the DLL so that it can be used by other applications. When **MATHLIBRARY_EXPORTS** is undefined—for example, when the header file is included by a client application—**MATHLIBRARY_API** defines the `__declspec(dllimport)` modifier on the member function declarations. This modifier optimizes the import of the function in an application. For more information, see [dllexport, dllimport](../cpp/dllexport-dllimport.md).  
  
    > [!NOTE]
    >  If you are building the DLL project on the command line, use the **/D** compiler option to define the **MATHLIBRARY_EXPORTS** symbol.  
  
3.  In the **MathLibrary** project in **Solution Explorer**, in the **Source Files** folder, open **MathLibrary.cpp**.  
  
4.  Implement the members of the **Functions** class in the source file. Replace the contents of the **MathLibrary.cpp** file with the following code:  
  
    ```cpp  
    // MathLibrary.cpp : Defines the exported functions for the DLL application.  
    // Compile by using: cl /EHsc /DMATHLIBRARY_EXPORTS /LD MathLibrary.cpp  
  
    #include "stdafx.h"  
    #include "MathLibrary.h"  
  
    namespace MathLibrary  
    {  
        double Functions::Add(double a, double b)  
        {  
            return a + b;  
        }  
  
        double Functions::Multiply(double a, double b)  
        {  
            return a * b;  
        }  
  
        double Functions::AddMultiply(double a, double b)  
        {  
            return a + (a * b);  
        }  
    }  
    ```  
  
5.  To verify that everything is working so far, compile the dynamic link library by choosing **Build**, **Build Solution** on the menu bar.  The output should look something like this:  
  
    ```Output  
    1>------ Build started: Project: MathLibrary, Configuration: Debug Win32 ------  
    1>  stdafx.cpp  
    1>  dllmain.cpp  
    1>  MathLibrary.cpp  
    1>     Creating library c:\users\username\documents\visual studio 2015\Projects\MathLibraryAndClient\Debug\MathLibrary.lib and object c:\users\username\documents\visual studio 2015\Projects\MathLibraryAndClient\Debug\MathLibrary.exp  
    1>  MathLibrary.vcxproj -> c:\users\username\documents\visual studio 2015\Projects\MathLibraryAndClient\Debug\MathLibrary.dll  
    ========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========  
    ```  
  
    > [!NOTE]
    >  If you are using an Express edition that does not display a **Build** menu, on the menu bar, choose **Tools**, **Settings**, **Expert Settings** to enable it, and then choose **Build**, **Build Solution**.  
  
    > [!NOTE]
    >  If you are building a project on the command line, use the **/D** compiler option to define your project's `PROJECTNAME`_EXPORTS preprocessor symbol. Use the **/LD** compiler option to specify that the output file is to be a DLL. For more information, see [/MD, /MT, /LD (Use Run-Time Library)](../build/reference/md-mt-ld-use-run-time-library.md). Use the **/EHsc** compiler option to enable C++ exception handling. For more information, see [/EH (Exception Handling Model)](../build/reference/eh-exception-handling-model.md).  
  
     Congratulations, you've created a DLL using Visual C++! Next, you'll create a client app that uses the functions exported by the DLL.  
  
### To create an app that references the DLL  
  
1.  To create a C++ app that uses the DLL that you just created, on the menu bar, choose **File**, **New**, **Project**.  
  
2.  In the left pane of the **New Project** dialog, expand **Installed**, **Templates**, **Visual C++**, and then select **Win32**.  
  
3.  In the center pane, select **Win32 Console Application**.  
  
4.  Specify a name for the project—for example, **MathClient**—in the **Name** box.  
  
5.  Choose the drop-down button at the end of the **Solution** control, and then select **Add to Solution** from the drop-down list. This adds the new project to the same solution that contains the DLL. Choose the **OK** button.  
  
6.  On the **Overview** page of the **Win32 Application Wizard** dialog box, choose the **Next** button.  
  
7.  On the **Application Settings** page, under **Application type**, select **Console application**.  
  
8.  Choose the **Finish** button to create the project.  
  
### To use the functionality from the class library in the app  
  
1.  When the Win32 Application Wizard finishes, a minimal console application project is created for you. The name for the main source file is the same as the project name that you chose earlier. In this example, it is named **MathClient.cpp**.  
  
2.  To use the math routines that you created in the DLL, you must reference the DLL in your app. To do this, under the **MathClient** project in **Solution Explorer**, select the **References** item. On the menu bar, choose **Project**, **Add Reference**.  
  
    > [!NOTE]
    >  In older versions of Visual Studio, references are added to your project in a different way. Select the **MathClient** project in **Solution Explorer**, and then on the menu bar, choose **Project**, **References**. In the **Property Pages** dialog box, expand the **Common Properties** node, select **Framework and References**, and then choose the **Add New Reference** button. For more information about the **References** dialog box, see [Adding references](../ide/adding-references-in-visual-cpp-projects.md).  
  
3.  The **Add Reference** dialog box lists the libraries that you can reference. The **Projects** tab lists the projects in the current solution and any libraries that they contain. On the **Projects** tab, select the check box next to **MathLibrary**, and then choose the **OK** button.  
  
4.  You need the definitions in the MathLibrary.h file to call the DLLs functions from your app. You could copy the header file into your client app project, but that might lead to changes in one copy that are not reflected in the other. To avoid this issue when you reference the header files of the DLL, you can change the included directories path in your project to include the original header. To do this, open the **Property Pages** dialog box for the **MathClient** project. In the left pane, expand **Configuration Properties**, **C/C++** node, and then select **General**. In the center pane, select the drop-down control next to the **Additional Include Directories** edit box, and then choose **\<Edit...>**. Select the top pane of the **Additional Include Directories** dialog box to enable an edit control. In the edit control, specify the path to the location of the **MathLibrary.h** header file. Because typing the complete path may be difficult, you can use the browse control (**...**) at the end of the edit box to bring up a **Select Directory** dialog box. In the dialog, navigate up one folder level to the **MathLibraryAndClient** folder, then select the **MathLibrary** folder, and then choose the **Select Folder** button. Once you've entered the path to the header file in the **Additional Include Directories** dialog box, choose the **OK** button to go back to the **Property Pages** dialog box, and then choose the **OK** button to save your changes.  
  
5.  You can now include the **MathLibrary.h** file and use the **Functions** class in your client application. Replace the contents of **MathClient.cpp** by using the following code:  
  
    ```cpp  
    // MathClient.cpp : Defines the entry point for the console application.  
    // Compile by using: cl /EHsc /link MathLibrary.lib MathClient.cpp  
  
    #include "stdafx.h"  
    #include <iostream>  
    #include "MathLibrary.h"  
  
    using namespace std;  
  
    int main()  
    {  
        double a = 7.4;  
        int b = 99;  
  
        cout << "a + b = " <<  
            MathLibrary::Functions::Add(a, b) << endl;  
        cout << "a * b = " <<  
            MathLibrary::Functions::Multiply(a, b) << endl;  
        cout << "a + (a * b) = " <<  
            MathLibrary::Functions::AddMultiply(a, b) << endl;  
  
        return 0;  
    }  
    ```  
  
6.  Build the application by choosing **Build**, **Build Solution** on the menu bar. The Output window in Visual Studio might contain something like this:  
  
    ```Output  
    1>------ Build started: Project: MathLibrary, Configuration: Debug Win32 ------  
    1>  MathLibrary.cpp  
    1>  MathLibrary.vcxproj -> c:\users\username\documents\visual studio 2015\Projects\MathLibraryAndClient\Debug\MathLibrary.dll  
    2>------ Build started: Project: MathClient, Configuration: Debug Win32 ------  
    2>  stdafx.cpp  
    2>  MathClient.cpp  
    2>  MathClient.vcxproj -> c:\users\username\documents\visual studio 2015\Projects\MathLibraryAndClient\Debug\MathClient.exe  
    ========== Build: 2 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========  
  
    ```  
  
     Congratulations, you've created an application that calls functions in a DLL. Next, you'll run your application to see what it does.  
  
### To run the application  
  
1.  Since you can't run a DLL, make sure that **MathClient** is selected as the default project. This is the project that Visual Studio runs when you choose the **Start Debugging** or **Start Without Debugging** commands. In **Solution Explorer**, select **MathClient**, and then on the menu bar, choose **Project**, **Set As StartUp Project**.  
  
2.  To run the **MathClient** project, on the menu bar, choose **Debug**, **Start Without Debugging**. Visual Studio opens a command window for the program to run in. The output should resemble this:  
  
    ```Output  
    a + b = 106.4  
    a * b = 732.6  
    a + (a * b) = 740  
    Press any key to continue . . .  
    ```  
  
     You can press any key to dismiss the command window.  
  
     Now that you've created a DLL and a client application, you can experiment. Try setting breakpoints in the code of the client app or in the library, and run the app in the debugger. Add other members to the Functions class, or add a new class.  
  
## See Also  
 [Visual C++ Guided Tour](http://msdn.microsoft.com/en-us/499cb66f-7df1-45d6-8b6b-33d94fd1f17c)   
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)   
 [Deploying Desktop Applications](../ide/deploying-native-desktop-applications-visual-cpp.md)   
 [Walkthrough: Deploying Your Program (C++)](../ide/walkthrough-deploying-your-program-cpp.md)   
 [Calling DLL Functions from Visual Basic Applications](../build/calling-dll-functions-from-visual-basic-applications.md)