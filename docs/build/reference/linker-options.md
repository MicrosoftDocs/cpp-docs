---
title: "Linker Options | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "linker [C++]"
  - "linker [C++], options listed"
  - "libraries [C++], linking to COFF"
  - "LINK tool [C++], linker options"
ms.assetid: c1d51b8a-bd23-416d-81e4-900e02b2c129
caps.latest.revision: 37
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
# Linker Options
LINK.exe links Common Object File Format (COFF) object files and libraries to create an executable (.exe) file or a dynamic-link library (DLL).  
  
 The following table lists options for LINK.exe. For more information about LINK, see:  
  
-   [Compiler-Controlled LINK Options](../../build/reference/compiler-controlled-link-options.md)  
  
-   [LINK Input Files](../../build/reference/link-input-files.md)  
  
-   [LINK Output](../../build/reference/link-output.md)  
  
-   [Reserved Words](../../build/reference/reserved-words.md)  
  
 On the command line, linker options are not case-sensitive—for example, /base and /BASE mean the same thing. For details on how to specify each option on the command line or in Visual Studio, see the documentation for that option.  
  
 You can use the [comment](../../preprocessor/comment-c-cpp.md) pragma to specify some linker options.  
  
|Option|Purpose|  
|------------|-------------|  
|[@](../../build/reference/at-specify-a-linker-response-file.md)|Specifies a response file.|  
|[/ALIGN](../../build/reference/align-section-alignment.md)|Specifies the alignment of each section.|  
|[/ALLOWBIND](../../build/reference/allowbind-prevent-dll-binding.md)|Specifies that a DLL cannot be bound.|  
|[/ALLOWISOLATION](../../build/reference/allowisolation-manifest-lookup.md)|Specifies behavior for manifest lookup.|  
|[/APPCONTAINER](../../build/reference/appcontainer-windows-store-app.md)|Specifies whether the app must run within an appcontainer process environment.|  
|[/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)|Adds the <xref:System.Diagnostics.DebuggableAttribute> to a managed image.|  
|[/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)|Creates a link to a managed resource.|  
|[/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)|Specifies that a Microsoft intermediate language (MSIL) module should be imported into the assembly.|  
|[/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)|Embeds a managed resource file in an assembly.|  
|[/BASE](../../build/reference/base-base-address.md)|Sets a base address for the program.|  
|[/CGTHREADS](../../build/reference/cgthreads-compiler-threads.md)|Sets number of cl.exe threads to use for optimization and code generation when link-time code generation is specified.|  
|[/CLRIMAGETYPE](../../build/reference/clrimagetype-specify-type-of-clr-image.md)|Sets the type (IJW, pure, or safe) of a CLR image.|  
|[/CLRSUPPORTLASTERROR](../../build/reference/clrsupportlasterror-preserve-last-error-code-for-pinvoke-calls.md)|Preserves the last error code of functions that are called through the P/Invoke mechanism.|  
|[/CLRTHREADATTRIBUTE](../../build/reference/clrthreadattribute-set-clr-thread-attribute.md)|Specifies the threading attribute to apply to the entry point of your CLR program.|  
|[/CLRUNMANAGEDCODECHECK](../../build/reference/clrunmanagedcodecheck-add-supressunmanagedcodesecurityattribute.md)|Specifies whether the linker will apply the SuppressUnmanagedCodeSecurity attribute to linker-generated PInvoke stubs that call from managed code into native DLLs.|  
|[/DEBUG](../../build/reference/debug-generate-debug-info.md)|Creates debugging information.|  
|[/DEBUGTYPE](../../build/reference/debugtype-debug-info-options.md)|Specifies which data to include in debugging information.|  
|[/DEF](../../build/reference/def-specify-module-definition-file.md)|Passes a module-definition (.def) file to the linker.|  
|[/DEFAULTLIB](../../build/reference/defaultlib-specify-default-library.md)|Searches the specified library when external references are resolved.|  
|[/DELAY](../../build/reference/delay-delay-load-import-settings.md)|Controls the delayed loading of DLLs.|  
|[/DELAYLOAD](../../build/reference/delayload-delay-load-import.md)|Causes the delayed loading of the specified DLL.|  
|[/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)|Partially signs an assembly.|  
|[/DLL](../../build/reference/dll-build-a-dll.md)|Builds a DLL.|  
|[/DRIVER](../../build/reference/driver-windows-nt-kernel-mode-driver.md)|Creates a kernel mode driver.|  
|[/DYNAMICBASE](../../build/reference/dynamicbase-use-address-space-layout-randomization.md)|Specifies whether to generate an executable image that can be randomly rebased at load time by using the address space layout randomization (ASLR) feature.|  
|[/ENTRY](../../build/reference/entry-entry-point-symbol.md)|Sets the starting address.|  
|[/errorReport](../../build/reference/errorreport-report-internal-linker-errors.md)|Reports internal linker errors to Microsoft.|  
|[/EXPORT](../../build/reference/export-exports-a-function.md)|Exports a function.|  
|[/FIXED](../../build/reference/fixed-fixed-base-address.md)|Creates a program that can be loaded only at its preferred base address.|  
|[/FORCE](../../build/reference/force-force-file-output.md)|Forces a link to complete even with unresolved symbols or symbols defined more than once.|  
|[/FUNCTIONPADMIN](../../build/reference/functionpadmin-create-hotpatchable-image.md)|Creates an image that can be hot patched.|  
|[/GENPROFILE, /FASTGENPROFILE](../../build/reference/genprofile-fastgenprofile-generate-profiling-instrumented-build.md)|Both of these options specify generation of a .pgd file by the linker to support profile-guided optimization (PGO). /GENPROFILE and /FASTGENPROFILE use different default parameters.|  
|[/GUARD](../../build/reference/guard-enable-guard-checks.md)|Enables Control Flow Guard protection.|  
|[/HEAP](../../build/reference/heap-set-heap-size.md)|Sets the size of the heap, in bytes.|  
|[/HIGHENTROPYVA](../../build/reference/highentropyva-support-64-bit-aslr.md)|Specifies support for high-entropy 64-bit address space layout randomization (ASLR).|  
|[/IDLOUT](../../build/reference/idlout-name-midl-output-files.md)|Specifies the name of the .idl file and other MIDL output files.|  
|[/IGNORE](../../build/reference/ignore-ignore-specific-warnings.md)|Suppresses output of specified linker warnings.|  
|[/IGNOREIDL](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)|Prevents the processing of attribute information into an .idl file.|  
|[/IMPLIB](../../build/reference/implib-name-import-library.md)|Overrides the default import library name.|  
|[/INCLUDE](../../build/reference/include-force-symbol-references.md)|Forces symbol references.|  
|[/INCREMENTAL](../../build/reference/incremental-link-incrementally.md)|Controls incremental linking.|  
|[/INTEGRITYCHECK](../../build/reference/integritycheck-require-signature-check.md)|Specifies that the module requires a signature check at load time.|  
|[/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)|Specifies a key container to sign an assembly.|  
|[/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)|Specifies a key or key pair to sign an assembly.|  
|[/LARGEADDRESSAWARE](../../build/reference/largeaddressaware-handle-large-addresses.md)|Tells the compiler that the application supports addresses larger than two gigabytes|  
|[/LIBPATH](../../build/reference/libpath-additional-libpath.md)|Specifies a path to search before the environmental library path.|  
|[/LTCG](../../build/reference/ltcg-link-time-code-generation.md)|Specifies link-time code generation.|  
|[/MACHINE](../../build/reference/machine-specify-target-platform.md)|Specifies the target platform.|  
|[/MANIFEST](../../build/reference/manifest-create-side-by-side-assembly-manifest.md)|Creates a side-by-side manifest file and optionally embeds it in the binary.|  
|[/MANIFESTDEPENDENCY](../../build/reference/manifestdependency-specify-manifest-dependencies.md)|Specifies a \<dependentAssembly> section in the manifest file.|  
|[/MANIFESTFILE](../../build/reference/manifestfile-name-manifest-file.md)|Changes the default name of the manifest file.|  
|[/MANIFESTINPUT](../../build/reference/manifestinput-specify-manifest-input.md)|Specifies a manifest input file for the linker to process and embed in the binary. You can use this option multiple times to specify more than one manifest input file.|  
|[/MANIFESTUAC](../../build/reference/manifestuac-embeds-uac-information-in-manifest.md)|Specifies whether User Account Control (UAC) information is embedded in the program manifest.|  
|[/MAP](../../build/reference/map-generate-mapfile.md)|Creates a mapfile.|  
|[/MAPINFO](../../build/reference/mapinfo-include-information-in-mapfile.md)|Includes the specified information in the mapfile.|  
|[/MERGE](../../build/reference/merge-combine-sections.md)|Combines sections.|  
|[/MIDL](../../build/reference/midl-specify-midl-command-line-options.md)|Specifies MIDL command-line options.|  
|[/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)|Suppresses the creation of a .NET Framework assembly.|  
|[/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md)|Ignores all (or the specified) default libraries when external references are resolved.|  
|[/NOENTRY](../../build/reference/noentry-no-entry-point.md)|Creates a resource-only DLL.|  
|[/NOLOGO](../../build/reference/nologo-suppress-startup-banner-linker.md)|Suppresses the startup banner.|  
|[/NXCOMPAT](../../build/reference/nxcompat-compatible-with-data-execution-prevention.md)|Marks an executable as verified to be compatible with the Windows Data Execution Prevention feature.|  
|[/OPT](../../build/reference/opt-optimizations.md)|Controls LINK optimizations.|  
|[/ORDER](../../build/reference/order-put-functions-in-order.md)|Places COMDATs into the image in a predetermined order.|  
|[/OUT](../../build/reference/out-output-file-name.md)|Specifies the output file name.|  
|[/PDB](../../build/reference/pdb-use-program-database.md)|Creates a program database (PDB) file.|  
|[/PDBALTPATH](../../build/reference/pdbaltpath-use-alternate-pdb-path.md)|Uses an alternate location to save a PDB file.|  
|[/PDBSTRIPPED](../../build/reference/pdbstripped-strip-private-symbols.md)|Creates a program database (PDB) file that has no private symbols.|  
|[/PGD](../../build/reference/pgd-specify-database-for-profile-guided-optimizations.md)|Specifies a .pgd file for profile-guided optimizations.|  
|[/PROFILE](../../build/reference/profile-performance-tools-profiler.md)|Produces an output file that can be used with the Performance Tools profiler.|  
|[/RELEASE](../../build/reference/release-set-the-checksum.md)|Sets the Checksum in the .exe header.|  
|[/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md)|Specifies that the image will contain a table of safe exception handlers.|  
|[/SECTION](../../build/reference/section-specify-section-attributes.md)|Overrides the attributes of a section.|  
|[/STACK](../../build/reference/stack-stack-allocations.md)|Sets the size of the stack in bytes.|  
|[/STUB](../../build/reference/stub-ms-dos-stub-file-name.md)|Attaches an MS-DOS stub program to a Win32 program.|  
|[/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md)|Tells the operating system how to run the .exe file.|  
|[/SWAPRUN](../../build/reference/swaprun-load-linker-output-to-swap-file.md)|Tells the operating system to copy the linker output to a swap file before it is run.|  
|[/TLBID](../../build/reference/tlbid-specify-resource-id-for-typelib.md)|Specifies the resource ID of the linker-generated type library.|  
|[/TLBOUT](../../build/reference/tlbout-name-dot-tlb-file.md)|Specifies the name of the .tlb file and other MIDL output files.|  
|[/TSAWARE](../../build/reference/tsaware-create-terminal-server-aware-application.md)|Creates an application that is designed specifically to run under Terminal Server.|  
|[/VERBOSE](../../build/reference/verbose-print-progress-messages.md)|Prints linker progress messages.|  
|[/VERSION](../../build/reference/version-version-information.md)|Assigns a version number.|  
|[/WHOLEARCHIVE](../../build/reference/wholearchive-include-all-library-object-files.md)|Includes every object file from specified static libraries.|  
|[/WINMD](../../build/reference/winmd-generate-windows-metadata.md)|Enables generation of a Windows Runtime Metadata file.|  
|[/WINMDFILE](../../build/reference/winmdfile-specify-winmd-file.md)|Specifies the file name for the Windows Runtime Metadata (winmd) output file that's generated by the [/WINMD](../../build/reference/winmd-generate-windows-metadata.md) linker option.|  
|[/WINMDKEYFILE](../../build/reference/winmdkeyfile-specify-winmd-key-file.md)|Specifies a key or key pair to sign a Windows Runtime Metadata file.|  
|[/WINMDKEYCONTAINER](../../build/reference/winmdkeycontainer-specify-key-container.md)|Specifies a key container to sign a Windows Metadata file.|  
|[/WINMDDELAYSIGN](../../build/reference/winmddelaysign-partially-sign-a-winmd.md)|Partially signs a Windows Runtime Metadata (.winmd) file by placing the public key in the winmd file.|  
|[/WX](../../build/reference/wx-treat-linker-warnings-as-errors.md)|Treats linker warnings as errors.|  
  
 For more information, see [Compiler-Controlled LINK Options](../../build/reference/compiler-controlled-link-options.md).  
  
## See Also  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)   
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Frequently Asked Questions on Building](http://msdn.microsoft.com/en-us/56a3bb8f-0181-4989-bab4-a07ba950ab08)