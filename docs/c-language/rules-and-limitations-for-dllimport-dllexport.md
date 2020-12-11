---
description: "Learn more about: Rules and Limitations for dllimport/dllexport"
title: "Rules and Limitations for dllimport-dllexport"
ms.date: "11/04/2016"
helpviewer_keywords: ["dllexport attribute [C++], limitations and rules", "dllimport attribute [C++], limitations and rules", "dllexport attribute [C++]"]
ms.assetid: 274b735f-ab9c-4b07-8d0e-fdb65d664634
---
# Rules and Limitations for dllimport/dllexport

**Microsoft Specific**

- If you declare a function without the **`dllimport`** or `dllexport` attribute, the function is not considered part of the DLL interface. Therefore, the definition of the function must be present in that module or in another module of the same program. To make the function part of the DLL interface, you must declare the definition of the function in the other module as `dllexport`. Otherwise, a linker error is generated when the client is built.

- If a single module in your program contains **`dllimport`** and `dllexport` declarations for the same function, the `dllexport` attribute takes precedence over the **`dllimport`** attribute. However, a compiler warning is generated. For example:

    ```
    #define DllImport   __declspec( dllimport )
    #define DllExport   __declspec( dllexport )

       DllImport void func1( void );
       DllExport void func1( void );   /* Warning; dllexport */
                                       /* takes precedence. */

    ```

- You cannot initialize a static data pointer with the address of a data object declared with the **`dllimport`** attribute. For example, the following code generates errors:

    ```
    #define DllImport   __declspec( dllimport )
    #define DllExport   __declspec( dllexport )

       DllImport int i;
       .
       .
       .
       int *pi = &i;                           /* Error */

       void func2()
       {
          static int *pi = &i;                   /* Error */
       }

    ```

- Initializing a static function pointer with the address of a function declared with **`dllimport`** sets the pointer to the address of the DLL import thunk (a code stub that transfers control to the function) rather than the address of the function. This assignment does not generate an error message:

    ```
    #define DllImport   __declspec( dllimport )
    #define DllExport   __declspec( dllexport )

       DllImport void func1( void
       .
       .
       .
       static void ( *pf )( void ) = &func1;   /* No Error */

       void func2()
       {
          static void ( *pf )( void ) = &func1;  /* No Error */
       }

    ```

- Because a program that includes the `dllexport` attribute in the declaration of an object must provide the definition for that object, you can initialize a global or local static function pointer with the address of a `dllexport` function. Similarly, you can initialize a global or local static data pointer with the address of a `dllexport` data object. For example:

    ```
    #define DllImport   __declspec( dllimport )
    #define DllExport   __declspec( dllexport )

       DllImport void func1( void );
       DllImport int i;

       DllExport void func1( void );
       DllExport int i;
       .
       .
       .
       int *pi = &i;                            /* Okay */
       static void ( *pf )( void ) = &func1;    /* Okay */

       void func2()
       {
          static int *pi = i;                     /* Okay */
          static void ( *pf )( void ) = &func1;   /* Okay */
       }

    ```

**END Microsoft Specific**

## See also

[DLL Import and Export Functions](../c-language/dll-import-and-export-functions.md)
