---
title: "Internal CRT Globals and Functions"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "__acrt_iob_func"
  - "__AdjustPointer"
  - "_assert"
  - "__badioinfo"
  - "__BuildCatchObject"
  - "__BuildCatchObjectHelper"
  - "_calloc_base"
  - "_chkesp"
  - "_chvalidator"
  - "_chvalidator_l"
  - "_CIacos"
  - "_CIasin"
  - "_CIcosh"
  - "_CIsinh"
  - "_CItanh"
  - "__clean_type_info_names_internal"
  - "_commode"
  - "_configure_narrow_argv"
  - "_configure_wide_argv"
  - "__conio_common_vcprintf"
  - "__conio_common_vcprintf_p"
  - "__conio_common_vcprintf_s"
  - "__conio_common_vcscanf"
  - "__conio_common_vcwprintf"
  - "__conio_common_vcwprintf_p"
  - "__conio_common_vcwprintf_s"
  - "__conio_common_vcwscanf"
  - "__CppXcptFilter"
  - "__create_locale"
  - "_crt_at_quick_exit"
  - "_crt_atexit"
  - "_crtAssertBusy"
  - "_crtBreakAlloc"
  - "__crtCompareStringA"
  - "__crtCompareStringEx"
  - "__crtCompareStringW"
  - "__crtCreateEventExW"
  - "__crtCreateSemaphoreExW"
  - "__crtCreateSymbolicLinkW"
  - "__crtEnumSystemLocalesEx"
  - "__crtFlsAlloc"
  - "__crtFlsFree"
  - "__crtFlsGetValue"
  - "__crtFlsSetValue"
  - "_CrtGetCheckCount"
  - "__crtGetDateFormatEx"
  - "__crtGetFileInformationByHandleEx"
  - "__crtGetLocaleInfoEx"
  - "__crtGetShowWindowMode"
  - "__crtGetTickCount64"
  - "__crtGetTimeFormatEx"
  - "__crtGetUserDefaultLocaleName"
  - "__crtInitializeCriticalSectionEx"
  - "__crtIsPackagedApp"
  - "__crtIsValidLocaleName"
  - "__crtLCMapStringA"
  - "__crtLCMapStringEx"
  - "_CrtSetCheckCount"
  - "_CrtSetDbgBlockType"
  - "__crtSetFileInformationByHandle"
  - "__crtSetThreadStackGuarantee"
  - "__crtSetUnhandledExceptionFilter"
  - "__crtSleep"
  - "__crtTerminateProcess"
  - "__crtUnhandledException"
  - "__CxxDetectRethrow"
  - "__CxxExceptionFilter"
  - "__CxxFrameHandler2"
  - "__CxxFrameHandler3"
  - "__CxxLongjmpUnwind"
  - "__CxxQueryExceptionSize"
  - "__CxxRegisterExceptionObject"
  - "__CxxUnregisterExceptionObject"
  - "__daylight"
  - "_dclass"
  - "__DestructExceptionObject"
  - "__doserrno"
  - "_dosmaperr"
  - "_dpcomp"
  - "_dsign"
  - "__dstbias"
  - "_dtest"
  - "_EH_prolog"
  - "_errno"
  - "_except_handler2"
  - "_except_handler4_common"
  - "_except1"
  - "_fdclass"
  - "_fdpcomp"
  - "_fdsign"
  - "_fdtest"
  - "_filbuf"
  - "_FindAndUnlinkFrame"
  - "_flsbuf"
  - "__fpe_flt_rounds"
  - "_FPE_Raise"
  - "__fpecode"
  - "__FrameUnwindFilter"
  - "_fread_nolock_s"
  - "_free_base"
  - "__free_locale"
  - "_freea_s"
  - "_freefls"
  - "_ftol"
  - "__get_current_locale"
  - "__get_flsindex"
  - "_get_initial_narrow_environment"
  - "_get_initial_wide_environment"
  - "_get_narrow_winmain_command_line"
  - "_get_stream_buffer_pointers"
  - "__get_tlsindex"
  - "_get_wide_winmain_command_line"
  - "_Getdays"
  - "_Getmonths"
  - "__GetPlatformExceptionInfo"
  - "_getptd"
  - "_Gettnames"
  - "_global_unwind2"
  - "_inconsistency"
  - "__initenv"
  - "_initialize_lconv_for_unsigned_char"
  - "_initialize_narrow_environment"
  - "_initialize_wide_environment"
  - "_initptd"
  - "_invalid_parameter"
  - "_invoke_watson"
  - "__iob_func"
  - "_IsExceptionObjectToBeDestroyed"
  - "__lconv"
  - "__lconv_init"
  - "_ldclass"
  - "_ldpcomp"
  - "_ldsign"
  - "_ldtest"
  - "__libm_sse2_acos"
  - "_libm_sse2_acos_precise"
  - "__libm_sse2_acosf"
  - "__libm_sse2_asin"
  - "_libm_sse2_asin_precise"
  - "__libm_sse2_asinf"
  - "__libm_sse2_atan"
  - "_libm_sse2_atan_precise"
  - "__libm_sse2_atan2"
  - "__libm_sse2_atanf"
  - "__libm_sse2_cos"
  - "_libm_sse2_cos_precise"
  - "__libm_sse2_cosf"
  - "__libm_sse2_exp"
  - "_libm_sse2_exp_precise"
  - "__libm_sse2_expf"
  - "__libm_sse2_log"
  - "_libm_sse2_log_precise"
  - "__libm_sse2_log10"
  - "_libm_sse2_log10_precise"
  - "__libm_sse2_log10f"
  - "__libm_sse2_logf"
  - "__libm_sse2_pow"
  - "_libm_sse2_pow_precise"
  - "__libm_sse2_powf"
  - "__libm_sse2_sin"
  - "_libm_sse2_sin_precise"
  - "__libm_sse2_sinf"
  - "_libm_sse2_sqrt_precise"
  - "__libm_sse2_tan"
  - "_libm_sse2_tan_precise"
  - "__libm_sse2_tanf"
  - "_local_unwind4"
  - "_lock_locales"
  - "_longjmpex"
  - "_malloc_base"
  - "_mbctype"
  - "_NLG_Dispatch2"
  - "_NLG_Return"
  - "_NLG_Return2"
  - "__p___argc"
  - "__p___argv"
  - "__p___initenv"
  - "__p___wargv"
  - "__p___winitenv"
  - "__p__acmdln"
  - "__p__crtAssertBusy"
  - "__p__crtBreakAlloc"
  - "__p__crtDbgFlag"
  - "__p__daylight"
  - "__p__dstbias"
  - "__p__environ"
  - "__p__iob"
  - "__p__mbcasemap"
  - "__p__mbctype"
  - "__p__pctype"
  - "__p__pgmptr"
  - "__p__pwctype"
  - "__p__timezone"
  - "__p__tzname"
  - "__p__wcmdln"
  - "__p__wenviron"
  - "__p__wpgmptr"
  - "_pctype"
  - "__pioinfo"
  - "_pwctype"
  - "__pwctype_func"
  - "__pxcptinfoptrs"
  - "_realloc_base"
  - "_register_thread_local_exe_atexit_callback"
  - "__report_gsfailure"
  - "__RTCastToVoid"
  - "__RTtypeid"
  - "_seh_filter_dll"
  - "_seh_filter_exe"
  - "_seh_longjmp_unwind"
  - "_seh_longjmp_unwind4"
  - "_set_malloc_crt_max_wait"
  - "__setlc_active"
  - "_SetWinRTOutOfMemoryExceptionCallback"
  - "_sopen_dispatch"
  - "__stdio_common_vfprintf"
  - "__stdio_common_vfprintf_p"
  - "__stdio_common_vfprintf_s"
  - "__stdio_common_vfscanf"
  - "__stdio_common_vfwprintf"
  - "__stdio_common_vfwprintf_p"
  - "__stdio_common_vfwprintf_s"
  - "__stdio_common_vfwscanf"
  - "__stdio_common_vsnprintf_s"
  - "__stdio_common_vsnwprintf_s"
  - "__stdio_common_vsprintf"
  - "__stdio_common_vsprintf_p"
  - "__stdio_common_vsprintf_s"
  - "__stdio_common_vsscanf"
  - "__stdio_common_vswprintf"
  - "__stdio_common_vswprintf_p"
  - "__stdio_common_vswprintf_s"
  - "__stdio_common_vswscanf"
  - "_Strftime"
  - "__STRINGTOLD"
  - "__STRINGTOLD_L"
  - "__strncnt"
  - "__sys_errlist"
  - "__sys_nerr"
  - "__threadhandle"
  - "__threadid"
  - "__timezone"
  - "__TypeMatch"
  - "__tzname"
  - "__unDName"
  - "__unDNameEx"
  - "__unDNameHelper"
  - "__unguarded_readlc_active"
  - "_unloaddll"
  - "_unlock_locales"
  - "_vacopy"
  - "_ValidateExecute"
  - "_ValidateRead"
  - "_ValidateWrite"
  - "_VCrtDbgReportA"
  - "_VCrtDbgReportW"
  - "_W_Getdays"
  - "_W_Getmonths"
  - "_W_Getnames"
  - "_wassert"
  - "_Wcsftime"
  - "__wcsncnt"
  - "__winitenv"
  - "_wsopen_dispatch"
  - "__C_specific_handler"
apilocation: 
  - "api-ms-win-crt-math-l1-1-0.dll"
  - "api-ms-win-crt-heap-l1-1-0.dll"
  - "api-ms-win-crt-runtime-l1-1-0.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
  - "api-ms-win-crt-locale-l1-1-0.dll"
  - "api-ms-win-core-crt-l1-1-0.dll"
  - "api-ms-win-crt-time-l1-1-0.dll"
  - "api-ms-win-crt-process-l1-1-0.dll"
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
  - "api-ms-win-crt-private-l1-1-0.dll"
  - "api-ms-win-crt-string-l1-1-0.dll"
  - "api-ms-win-crt-conio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__acrt_iob_func"
  - "__AdjustPointer"
  - "_assert"
  - "__badioinfo"
  - "__BuildCatchObject"
  - "__BuildCatchObjectHelper"
  - "_calloc_base"
  - "_chkesp"
  - "_chvalidator"
  - "_chvalidator_l"
  - "_CIacos"
  - "_CIasin"
  - "_CIcosh"
  - "_CIsinh"
  - "_CItanh"
  - "__clean_type_info_names_internal"
  - "_commode"
  - "_configure_narrow_argv"
  - "_configure_wide_argv"
  - "__conio_common_vcprintf"
  - "__conio_common_vcprintf_p"
  - "__conio_common_vcprintf_s"
  - "__conio_common_vcscanf"
  - "__conio_common_vcwprintf"
  - "__conio_common_vcwprintf_p"
  - "__conio_common_vcwprintf_s"
  - "__conio_common_vcwscanf"
  - "__CppXcptFilter"
  - "__create_locale"
  - "_crt_at_quick_exit"
  - "_crt_atexit"
  - "_crtAssertBusy"
  - "_crtBreakAlloc"
  - "__crtCompareStringA"
  - "__crtCompareStringEx"
  - "__crtCompareStringW"
  - "__crtCreateEventExW"
  - "__crtCreateSemaphoreExW"
  - "__crtCreateSymbolicLinkW"
  - "__crtEnumSystemLocalesEx"
  - "__crtFlsAlloc"
  - "__crtFlsFree"
  - "__crtFlsGetValue"
  - "__crtFlsSetValue"
  - "_CrtGetCheckCount"
  - "__crtGetDateFormatEx"
  - "__crtGetFileInformationByHandleEx"
  - "__crtGetLocaleInfoEx"
  - "__crtGetShowWindowMode"
  - "__crtGetTickCount64"
  - "__crtGetTimeFormatEx"
  - "__crtGetUserDefaultLocaleName"
  - "__crtInitializeCriticalSectionEx"
  - "__crtIsPackagedApp"
  - "__crtIsValidLocaleName"
  - "__crtLCMapStringA"
  - "__crtLCMapStringEx"
  - "_CrtSetCheckCount"
  - "_CrtSetDbgBlockType"
  - "__crtSetFileInformationByHandle"
  - "__crtSetThreadStackGuarantee"
  - "__crtSetUnhandledExceptionFilter"
  - "__crtSleep"
  - "__crtTerminateProcess"
  - "__crtUnhandledException"
  - "__CxxDetectRethrow"
  - "__CxxExceptionFilter"
  - "__CxxFrameHandler2"
  - "__CxxFrameHandler3"
  - "__CxxLongjmpUnwind"
  - "__CxxQueryExceptionSize"
  - "__CxxRegisterExceptionObject"
  - "__CxxUnregisterExceptionObject"
  - "__daylight"
  - "_dclass"
  - "__DestructExceptionObject"
  - "__doserrno"
  - "_dosmaperr"
  - "_dpcomp"
  - "_dsign"
  - "__dstbias"
  - "_dtest"
  - "_EH_prolog"
  - "_errno"
  - "_except_handler2"
  - "_except_handler4_common"
  - "_except1"
  - "_fdclass"
  - "_fdpcomp"
  - "_fdsign"
  - "_fdtest"
  - "_filbuf"
  - "_FindAndUnlinkFrame"
  - "_flsbuf"
  - "__fpe_flt_rounds"
  - "_FPE_Raise"
  - "__fpecode"
  - "__FrameUnwindFilter"
  - "_fread_nolock_s"
  - "_free_base"
  - "__free_locale"
  - "_freea_s"
  - "_freefls"
  - "_ftol"
  - "__get_current_locale"
  - "__get_flsindex"
  - "_get_initial_narrow_environment"
  - "_get_initial_wide_environment"
  - "_get_narrow_winmain_command_line"
  - "_get_stream_buffer_pointers"
  - "__get_tlsindex"
  - "_get_wide_winmain_command_line"
  - "_Getdays"
  - "_Getmonths"
  - "__GetPlatformExceptionInfo"
  - "_getptd"
  - "_Gettnames"
  - "_global_unwind2"
  - "_inconsistency"
  - "__initenv"
  - "_initialize_lconv_for_unsigned_char"
  - "_initialize_narrow_environment"
  - "_initialize_wide_environment"
  - "_initptd"
  - "_invalid_parameter"
  - "_invoke_watson"
  - "__iob_func"
  - "_IsExceptionObjectToBeDestroyed"
  - "__lconv"
  - "__lconv_init"
  - "_ldclass"
  - "_ldpcomp"
  - "_ldsign"
  - "_ldtest"
  - "__libm_sse2_acos"
  - "_libm_sse2_acos_precise"
  - "__libm_sse2_acosf"
  - "__libm_sse2_asin"
  - "_libm_sse2_asin_precise"
  - "__libm_sse2_asinf"
  - "__libm_sse2_atan"
  - "_libm_sse2_atan_precise"
  - "__libm_sse2_atan2"
  - "__libm_sse2_atanf"
  - "__libm_sse2_cos"
  - "_libm_sse2_cos_precise"
  - "__libm_sse2_cosf"
  - "__libm_sse2_exp"
  - "_libm_sse2_exp_precise"
  - "__libm_sse2_expf"
  - "__libm_sse2_log"
  - "_libm_sse2_log_precise"
  - "__libm_sse2_log10"
  - "_libm_sse2_log10_precise"
  - "__libm_sse2_log10f"
  - "__libm_sse2_logf"
  - "__libm_sse2_pow"
  - "_libm_sse2_pow_precise"
  - "__libm_sse2_powf"
  - "__libm_sse2_sin"
  - "_libm_sse2_sin_precise"
  - "__libm_sse2_sinf"
  - "_libm_sse2_sqrt_precise"
  - "__libm_sse2_tan"
  - "_libm_sse2_tan_precise"
  - "__libm_sse2_tanf"
  - "_local_unwind4"
  - "_lock_locales"
  - "_longjmpex"
  - "_malloc_base"
  - "_mbctype"
  - "_NLG_Dispatch2"
  - "_NLG_Return"
  - "_NLG_Return2"
  - "__p___argc"
  - "__p___argv"
  - "__p___initenv"
  - "__p___wargv"
  - "__p___winitenv"
  - "__p__acmdln"
  - "__p__crtAssertBusy"
  - "__p__crtBreakAlloc"
  - "__p__crtDbgFlag"
  - "__p__daylight"
  - "__p__dstbias"
  - "__p__environ"
  - "__p__iob"
  - "__p__mbcasemap"
  - "__p__mbctype"
  - "__p__pctype"
  - "__p__pgmptr"
  - "__p__pwctype"
  - "__p__timezone"
  - "__p__tzname"
  - "__p__wcmdln"
  - "__p__wenviron"
  - "__p__wpgmptr"
  - "_pctype"
  - "__pioinfo"
  - "_pwctype"
  - "__pwctype_func"
  - "__pxcptinfoptrs"
  - "_realloc_base"
  - "_register_thread_local_exe_atexit_callback"
  - "__report_gsfailure"
  - "__RTCastToVoid"
  - "__RTtypeid"
  - "_seh_filter_dll"
  - "_seh_filter_exe"
  - "_seh_longjmp_unwind"
  - "_seh_longjmp_unwind4"
  - "_set_malloc_crt_max_wait"
  - "__setlc_active"
  - "_SetWinRTOutOfMemoryExceptionCallback"
  - "_sopen_dispatch"
  - "__stdio_common_vfprintf"
  - "__stdio_common_vfprintf_p"
  - "__stdio_common_vfprintf_s"
  - "__stdio_common_vfscanf"
  - "__stdio_common_vfwprintf"
  - "__stdio_common_vfwprintf_p"
  - "__stdio_common_vfwprintf_s"
  - "__stdio_common_vfwscanf"
  - "__stdio_common_vsnprintf_s"
  - "__stdio_common_vsnwprintf_s"
  - "__stdio_common_vsprintf"
  - "__stdio_common_vsprintf_p"
  - "__stdio_common_vsprintf_s"
  - "__stdio_common_vsscanf"
  - "__stdio_common_vswprintf"
  - "__stdio_common_vswprintf_p"
  - "__stdio_common_vswprintf_s"
  - "__stdio_common_vswscanf"
  - "_Strftime"
  - "__STRINGTOLD"
  - "__STRINGTOLD_L"
  - "__strncnt"
  - "__sys_errlist"
  - "__sys_nerr"
  - "__threadhandle"
  - "__threadid"
  - "__timezone"
  - "__TypeMatch"
  - "__tzname"
  - "__unDName"
  - "__unDNameEx"
  - "__unDNameHelper"
  - "__unguarded_readlc_active"
  - "_unloaddll"
  - "_unlock_locales"
  - "_vacopy"
  - "_ValidateExecute"
  - "_ValidateRead"
  - "_ValidateWrite"
  - "_VCrtDbgReportA"
  - "_VCrtDbgReportW"
  - "_W_Getdays"
  - "_W_Getmonths"
  - "_W_Getnames"
  - "_wassert"
  - "_Wcsftime"
  - "__wcsncnt"
  - "__winitenv"
  - "_wsopen_dispatch"
  - "__C_specific_handler"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__acrt_iob_func"
  - "__AdjustPointer"
  - "_assert"
  - "__badioinfo"
  - "__BuildCatchObject"
  - "__BuildCatchObjectHelper"
  - "_calloc_base"
  - "_chkesp"
  - "_chvalidator"
  - "_chvalidator_l"
  - "_CIacos"
  - "_CIasin"
  - "_CIcosh"
  - "_CIsinh"
  - "_CItanh"
  - "__clean_type_info_names_internal"
  - "_commode"
  - "_configure_narrow_argv"
  - "_configure_wide_argv"
  - "__conio_common_vcprintf"
  - "__conio_common_vcprintf_p"
  - "__conio_common_vcprintf_s"
  - "__conio_common_vcscanf"
  - "__conio_common_vcwprintf"
  - "__conio_common_vcwprintf_p"
  - "__conio_common_vcwprintf_s"
  - "__conio_common_vcwscanf"
  - "__CppXcptFilter"
  - "__create_locale"
  - "_crt_at_quick_exit"
  - "_crt_atexit"
  - "_crtAssertBusy"
  - "_crtBreakAlloc"
  - "__crtCompareStringA"
  - "__crtCompareStringEx"
  - "__crtCompareStringW"
  - "__crtCreateEventExW"
  - "__crtCreateSemaphoreExW"
  - "__crtCreateSymbolicLinkW"
  - "__crtEnumSystemLocalesEx"
  - "__crtFlsAlloc"
  - "__crtFlsFree"
  - "__crtFlsGetValue"
  - "__crtFlsSetValue"
  - "_CrtGetCheckCount"
  - "__crtGetDateFormatEx"
  - "__crtGetFileInformationByHandleEx"
  - "__crtGetLocaleInfoEx"
  - "__crtGetShowWindowMode"
  - "__crtGetTickCount64"
  - "__crtGetTimeFormatEx"
  - "__crtGetUserDefaultLocaleName"
  - "__crtInitializeCriticalSectionEx"
  - "__crtIsPackagedApp"
  - "__crtIsValidLocaleName"
  - "__crtLCMapStringA"
  - "__crtLCMapStringEx"
  - "_CrtSetCheckCount"
  - "_CrtSetDbgBlockType"
  - "__crtSetFileInformationByHandle"
  - "__crtSetThreadStackGuarantee"
  - "__crtSetUnhandledExceptionFilter"
  - "__crtSleep"
  - "__crtTerminateProcess"
  - "__crtUnhandledException"
  - "__CxxDetectRethrow"
  - "__CxxExceptionFilter"
  - "__CxxFrameHandler2"
  - "__CxxFrameHandler3"
  - "__CxxLongjmpUnwind"
  - "__CxxQueryExceptionSize"
  - "__CxxRegisterExceptionObject"
  - "__CxxUnregisterExceptionObject"
  - "__daylight"
  - "_dclass"
  - "__DestructExceptionObject"
  - "__doserrno"
  - "_dosmaperr"
  - "_dpcomp"
  - "_dsign"
  - "__dstbias"
  - "_dtest"
  - "_EH_prolog"
  - "_errno"
  - "_except_handler2"
  - "_except_handler4_common"
  - "_except1"
  - "_fdclass"
  - "_fdpcomp"
  - "_fdsign"
  - "_fdtest"
  - "_filbuf"
  - "_FindAndUnlinkFrame"
  - "_flsbuf"
  - "__fpe_flt_rounds"
  - "_FPE_Raise"
  - "__fpecode"
  - "__FrameUnwindFilter"
  - "_fread_nolock_s"
  - "_free_base"
  - "__free_locale"
  - "_freea_s"
  - "_freefls"
  - "_ftol"
  - "__get_current_locale"
  - "__get_flsindex"
  - "_get_initial_narrow_environment"
  - "_get_initial_wide_environment"
  - "_get_narrow_winmain_command_line"
  - "_get_stream_buffer_pointers"
  - "__get_tlsindex"
  - "_get_wide_winmain_command_line"
  - "_Getdays"
  - "_Getmonths"
  - "__GetPlatformExceptionInfo"
  - "_getptd"
  - "_Gettnames"
  - "_global_unwind2"
  - "_inconsistency"
  - "__initenv"
  - "_initialize_lconv_for_unsigned_char"
  - "_initialize_narrow_environment"
  - "_initialize_wide_environment"
  - "_initptd"
  - "_invalid_parameter"
  - "_invoke_watson"
  - "__iob_func"
  - "_IsExceptionObjectToBeDestroyed"
  - "__lconv"
  - "__lconv_init"
  - "_ldclass"
  - "_ldpcomp"
  - "_ldsign"
  - "_ldtest"
  - "__libm_sse2_acos"
  - "_libm_sse2_acos_precise"
  - "__libm_sse2_acosf"
  - "__libm_sse2_asin"
  - "_libm_sse2_asin_precise"
  - "__libm_sse2_asinf"
  - "__libm_sse2_atan"
  - "_libm_sse2_atan_precise"
  - "__libm_sse2_atan2"
  - "__libm_sse2_atanf"
  - "__libm_sse2_cos"
  - "_libm_sse2_cos_precise"
  - "__libm_sse2_cosf"
  - "__libm_sse2_exp"
  - "_libm_sse2_exp_precise"
  - "__libm_sse2_expf"
  - "__libm_sse2_log"
  - "_libm_sse2_log_precise"
  - "__libm_sse2_log10"
  - "_libm_sse2_log10_precise"
  - "__libm_sse2_log10f"
  - "__libm_sse2_logf"
  - "__libm_sse2_pow"
  - "_libm_sse2_pow_precise"
  - "__libm_sse2_powf"
  - "__libm_sse2_sin"
  - "_libm_sse2_sin_precise"
  - "__libm_sse2_sinf"
  - "_libm_sse2_sqrt_precise"
  - "__libm_sse2_tan"
  - "_libm_sse2_tan_precise"
  - "__libm_sse2_tanf"
  - "_local_unwind4"
  - "_lock_locales"
  - "_longjmpex"
  - "_malloc_base"
  - "_mbctype"
  - "_NLG_Dispatch2"
  - "_NLG_Return"
  - "_NLG_Return2"
  - "__p___argc"
  - "__p___argv"
  - "__p___initenv"
  - "__p___wargv"
  - "__p___winitenv"
  - "__p__acmdln"
  - "__p__crtAssertBusy"
  - "__p__crtBreakAlloc"
  - "__p__crtDbgFlag"
  - "__p__daylight"
  - "__p__dstbias"
  - "__p__environ"
  - "__p__iob"
  - "__p__mbcasemap"
  - "__p__mbctype"
  - "__p__pctype"
  - "__p__pgmptr"
  - "__p__pwctype"
  - "__p__timezone"
  - "__p__tzname"
  - "__p__wcmdln"
  - "__p__wenviron"
  - "__p__wpgmptr"
  - "_pctype"
  - "__pioinfo"
  - "_pwctype"
  - "__pwctype_func"
  - "__pxcptinfoptrs"
  - "_realloc_base"
  - "_register_thread_local_exe_atexit_callback"
  - "__report_gsfailure"
  - "__RTCastToVoid"
  - "__RTtypeid"
  - "_seh_filter_dll"
  - "_seh_filter_exe"
  - "_seh_longjmp_unwind"
  - "_seh_longjmp_unwind4"
  - "_set_malloc_crt_max_wait"
  - "__setlc_active"
  - "_SetWinRTOutOfMemoryExceptionCallback"
  - "_sopen_dispatch"
  - "__stdio_common_vfprintf"
  - "__stdio_common_vfprintf_p"
  - "__stdio_common_vfprintf_s"
  - "__stdio_common_vfscanf"
  - "__stdio_common_vfwprintf"
  - "__stdio_common_vfwprintf_p"
  - "__stdio_common_vfwprintf_s"
  - "__stdio_common_vfwscanf"
  - "__stdio_common_vsnprintf_s"
  - "__stdio_common_vsnwprintf_s"
  - "__stdio_common_vsprintf"
  - "__stdio_common_vsprintf_p"
  - "__stdio_common_vsprintf_s"
  - "__stdio_common_vsscanf"
  - "__stdio_common_vswprintf"
  - "__stdio_common_vswprintf_p"
  - "__stdio_common_vswprintf_s"
  - "__stdio_common_vswscanf"
  - "_Strftime"
  - "__STRINGTOLD"
  - "__STRINGTOLD_L"
  - "__strncnt"
  - "__sys_errlist"
  - "__sys_nerr"
  - "__threadhandle"
  - "__threadid"
  - "__timezone"
  - "__TypeMatch"
  - "__tzname"
  - "__unDName"
  - "__unDNameEx"
  - "__unDNameHelper"
  - "__unguarded_readlc_active"
  - "_unloaddll"
  - "_unlock_locales"
  - "_vacopy"
  - "_ValidateExecute"
  - "_ValidateRead"
  - "_ValidateWrite"
  - "_VCrtDbgReportA"
  - "_VCrtDbgReportW"
  - "_W_Getdays"
  - "_W_Getmonths"
  - "_W_Getnames"
  - "_wassert"
  - "_Wcsftime"
  - "__wcsncnt"
  - "__winitenv"
  - "_wsopen_dispatch"
  - "__C_specific_handler"
ms.assetid: 99a27f11-fa5a-449e-bfbb-aab578d1cc4f
caps.latest.revision: 12
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
# Internal CRT Globals and Functions
The C runtime (CRT) library contains functions and global variables that are used only to support the public library interface. Some of them are exposed in public headers as implementation details. Although these functions and global variables are accessible through public exports, they are not intended for use by your code. We recommend that you change any code that uses these functions and variables to use public library equivalents instead. These functions may change from version to version. They are listed here to help you identify them. Links are provided when additional documentation exists, but in general, these implementation details are not documented.  
  
## Internal CRT Globals and Value Macros  
 These global variables and macro definitions are used to implement the CRT.  
  
|Name|  
|----------|  
|__badioinfo|  
|[_acmdln](../crt/_acmdln--_tcmdln--_wcmdln.md)|  
|_commode|  
|_crtAssertBusy|  
|_crtBreakAlloc|  
|__initenv|  
|__lconv|  
|[__mb_cur_max](../crt/___mb_cur_max_func--___mb_cur_max_l_func--__p___mb_cur_max--__mb_cur_max.md)|  
|__pioinfo|  
|__unguarded_readlc_active|  
|[_wcmdln](../crt/_acmdln--_tcmdln--_wcmdln.md)|  
|__winitenv|  
  
## Internal CRT Functions and Function Macros  
 These functions and function macros are used to implement the CRT and the C++ Standard Library (STL).  
  
|Name|  
|----------|  
|__acrt_iob_func|  
|__AdjustPointer|  
|_assert|  
|__BuildCatchObject|  
|__BuildCatchObjectHelper|  
|__C_specific_handler|  
|_calloc_base|  
|_chkesp|  
|_chvalidator|  
|_chvalidator_l|  
|_CIacos|  
|_CIasin|  
|[_CIatan](../crt/_ciatan.md)|  
|[_CIatan2](../crt/_ciatan2.md)|  
|[_CIcos](../crt/_cicos.md)|  
|_CIcosh|  
|[_CIexp](../crt/_ciexp.md)|  
|[_CIfmod](../crt/_cifmod.md)|  
|[_CIlog](../crt/_cilog.md)|  
|[_CIlog10](../crt/_cilog10.md)|  
|[_CIpow](../crt/_cipow.md)|  
|[_CIsin](../crt/_cisin.md)|  
|_CIsinh|  
|[_CIsqrt](../crt/_cisqrt.md)|  
|[_CItan](../crt/_citan.md)|  
|_CItanh|  
|__clean_type_info_names_internal|  
|_configure_narrow_argv|  
|_configure_wide_argv|  
|__conio_common_vcprintf|  
|__conio_common_vcprintf_p|  
|__conio_common_vcprintf_s|  
|__conio_common_vcscanf|  
|__conio_common_vcwprintf|  
|__conio_common_vcwprintf_p|  
|__conio_common_vcwprintf_s|  
|__conio_common_vcwscanf|  
|__CppXcptFilter|  
|__create_locale|  
|_crt_atexit|  
|_crt_at_quick_exit|  
|__crtCompareStringA|  
|__crtCompareStringEx|  
|__crtCompareStringW|  
|__crtCreateEventExW|  
|__crtCreateSemaphoreExW|  
|__crtCreateSymbolicLinkW|  
|__crtEnumSystemLocalesEx|  
|__crtFlsAlloc|  
|__crtFlsFree|  
|__crtFlsGetValue|  
|__crtFlsSetValue|  
|_CrtGetCheckCount|  
|__crtGetDateFormatEx|  
|__crtGetFileInformationByHandleEx|  
|__crtGetLocaleInfoEx|  
|__crtGetShowWindowMode|  
|__crtGetTickCount64|  
|__crtGetTimeFormatEx|  
|__crtGetUserDefaultLocaleName|  
|__crtInitializeCriticalSectionEx|  
|__crtIsPackagedApp|  
|__crtIsValidLocaleName|  
|__crtLCMapStringA|  
|__crtLCMapStringEx|  
|[__crtLCMapStringW](../crt/__crtlcmapstringw.md)|  
|_CrtSetCheckCount|  
|_CrtSetDbgBlockType|  
|__crtSetFileInformationByHandle|  
|__crtSetThreadStackGuarantee|  
|__crtSetUnhandledExceptionFilter|  
|__crtSleep|  
|__crtTerminateProcess|  
|__crtUnhandledException|  
|__CxxDetectRethrow|  
|__CxxExceptionFilter|  
|[__CxxFrameHandler](../crt/__cxxframehandler.md)|  
|__CxxFrameHandler2|  
|__CxxFrameHandler3|  
|__CxxLongjmpUnwind|  
|__CxxQueryExceptionSize|  
|__CxxRegisterExceptionObject|  
|__CxxUnregisterExceptionObject|  
|__daylight|  
|_dclass|  
|__DestructExceptionObject|  
|[__dllonexit](../crt/__dllonexit.md)|  
|__doserrno|  
|_dosmaperr|  
|_dpcomp|  
|_dsign|  
|__dstbias|  
|_dtest|  
|_EH_prolog|  
|_errno|  
|_except_handler2|  
|[_except_handler3](../crt/_except_handler3.md)|  
|_except_handler4_common|  
|_except1|  
|[_execute_onexit_table](../crt/_execute_onexit_table--_initialize_onexit_table--_register_onexit_function.md)|  
|_fdclass|  
|_fdpcomp|  
|_fdsign|  
|_fdtest|  
|_filbuf|  
|_FindAndUnlinkFrame|  
|_flsbuf|  
|__fpe_flt_rounds|  
|_FPE_Raise|  
|__fpecode|  
|__FrameUnwindFilter|  
|_fread_nolock_s|  
|_free_base|  
|__free_locale|  
|_freea_s|  
|_freefls|  
|_ftol|  
|__get_current_locale|  
|__get_flsindex|  
|_get_initial_narrow_environment|  
|_get_initial_wide_environment|  
|_get_narrow_winmain_command_line|  
|_get_stream_buffer_pointers|  
|__get_tlsindex|  
|_get_wide_winmain_command_line|  
|_Getdays|  
|[__getmainargs](../crt/__getmainargs--__wgetmainargs.md)|  
|_Getmonths|  
|__GetPlatformExceptionInfo|  
|_getptd|  
|_Gettnames|  
|_global_unwind2|  
|_inconsistency|  
|_initialize_lconv_for_unsigned_char|  
|_initialize_narrow_environment|  
|[_initialize_onexit_table](../crt/_execute_onexit_table--_initialize_onexit_table--_register_onexit_function.md)|  
|_initialize_wide_environment|  
|_initptd|  
|_invalid_parameter|  
|_invoke_watson|  
|__iob_func|  
|_IsExceptionObjectToBeDestroyed|  
|[___lc_codepage_func](../crt/___lc_codepage_func.md)|  
|[___lc_collate_cp_func](../crt/___lc_collate_cp_func.md)|  
|[___lc_locale_name_func](../crt/___lc_locale_name_func.md)|  
|__lconv_init|  
|_ldclass|  
|_ldpcomp|  
|_ldsign|  
|_ldtest|  
|__libm_sse2_acos|  
|_libm_sse2_acos_precise|  
|__libm_sse2_acosf|  
|__libm_sse2_asin|  
|_libm_sse2_asin_precise|  
|__libm_sse2_asinf|  
|__libm_sse2_atan|  
|_libm_sse2_atan_precise|  
|__libm_sse2_atan2|  
|__libm_sse2_atanf|  
|__libm_sse2_cos|  
|_libm_sse2_cos_precise|  
|__libm_sse2_cosf|  
|__libm_sse2_exp|  
|_libm_sse2_exp_precise|  
|__libm_sse2_expf|  
|__libm_sse2_log|  
|_libm_sse2_log_precise|  
|__libm_sse2_log10|  
|_libm_sse2_log10_precise|  
|__libm_sse2_log10f|  
|__libm_sse2_logf|  
|__libm_sse2_pow|  
|_libm_sse2_pow_precise|  
|__libm_sse2_powf|  
|__libm_sse2_sin|  
|_libm_sse2_sin_precise|  
|__libm_sse2_sinf|  
|_libm_sse2_sqrt_precise|  
|__libm_sse2_tan|  
|_libm_sse2_tan_precise|  
|__libm_sse2_tanf|  
|[_local_unwind2](../crt/_local_unwind2.md)|  
|_local_unwind4|  
|_lock_locales|  
|_longjmpex|  
|_malloc_base|  
|[___mb_cur_max_func](../crt/___mb_cur_max_func--___mb_cur_max_l_func--__p___mb_cur_max--__mb_cur_max.md)|  
|[___mb_cur_max_l_func](../crt/___mb_cur_max_func--___mb_cur_max_l_func--__p___mb_cur_max--__mb_cur_max.md)|  
|_mbctype|  
|_NLG_Dispatch2|  
|_NLG_Return|  
|_NLG_Return2|  
|__p\_\__argc|  
|__p\_\__argv|  
|__p\_\__initenv|  
|[__p\_\__mb_cur_max](../crt/___mb_cur_max_func--___mb_cur_max_l_func--__p___mb_cur_max--__mb_cur_max.md)|  
|__p\_\__wargv|  
|__p\_\__winitenv|  
|__p\__acmdln|  
|[__p\__commode](../crt/__p__commode.md)|  
|__p\__crtAssertBusy|  
|__p\__crtBreakAlloc|  
|__p\__crtDbgFlag|  
|__p\__daylight|  
|__p\__dstbias|  
|__p\__environ|  
|[__p\__fmode](../crt/__p__fmode.md)|  
|__p\__iob|  
|__p\__mbcasemap|  
|__p\__mbctype|  
|__p\__pctype|  
|__p\__pgmptr|  
|__p\__pwctype|  
|__p\__timezone|  
|__p\__tzname|  
|__p\__wcmdln|  
|__p\__wenviron|  
|__p\__wpgmptr|  
|_pctype|  
|[__pctype_func](../crt/__pctype_func.md)|  
|_pwctype|  
|__pwctype_func|  
|__pxcptinfoptrs|  
|_realloc_base|  
|[_register_onexit_function](../crt/_execute_onexit_table--_initialize_onexit_table--_register_onexit_function.md)|  
|_register_thread_local_exe_atexit_callback|  
|__report_gsfailure|  
|__RTCastToVoid|  
|[__RTDynamicCast](../crt/__rtdynamiccast.md)|  
|__RTtypeid|  
|_seh_filter_dll|  
|_seh_filter_exe|  
|_seh_longjmp_unwind|  
|_seh_longjmp_unwind4|  
|[__set_app_type](../crt/__set_app_type.md)|  
|_set_malloc_crt_max_wait|  
|[_setjmp3](../crt/_setjmp3.md)|  
|__setlc_active|  
|[___setlc_active_func](../crt/___setlc_active_func--___unguarded_readlc_active_add_func.md)|  
|[__setusermatherr](../crt/__setusermatherr.md)|  
|_SetWinRTOutOfMemoryExceptionCallback|  
|_sopen_dispatch|  
|__stdio_common_vfprintf|  
|__stdio_common_vfprintf_p|  
|__stdio_common_vfprintf_s|  
|__stdio_common_vfscanf|  
|__stdio_common_vfwprintf|  
|__stdio_common_vfwprintf_p|  
|__stdio_common_vfwprintf_s|  
|__stdio_common_vfwscanf|  
|__stdio_common_vsnprintf_s|  
|__stdio_common_vsnwprintf_s|  
|__stdio_common_vsprintf|  
|__stdio_common_vsprintf_p|  
|__stdio_common_vsprintf_s|  
|__stdio_common_vsscanf|  
|__stdio_common_vswprintf|  
|__stdio_common_vswprintf_p|  
|__stdio_common_vswprintf_s|  
|__stdio_common_vswscanf|  
|_Strftime|  
|__STRINGTOLD|  
|__STRINGTOLD_L|  
|__strncnt|  
|__sys_errlist|  
|__sys_nerr|  
|__threadhandle|  
|__threadid|  
|__timezone|  
|__TypeMatch|  
|__tzname|  
|__unDName|  
|__unDNameEx|  
|__unDNameHelper|  
|__unguarded_readlc_active|  
|[___unguarded_readlc_active_add_func](../crt/___setlc_active_func--___unguarded_readlc_active_add_func.md)|  
|_unloaddll|  
|_unlock_locales|  
|_vacopy|  
|_ValidateExecute|  
|_ValidateRead|  
|_ValidateWrite|  
|_VCrtDbgReportA|  
|_VCrtDbgReportW|  
|_W_Getdays|  
|_W_Getmonths|  
|_W_Getnames|  
|_wassert|  
|_Wcsftime|  
|__wcsncnt|  
|[__wgetmainargs](../crt/__getmainargs--__wgetmainargs.md)|  
|_wsopen_dispatch|  
  
## See Also  
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)