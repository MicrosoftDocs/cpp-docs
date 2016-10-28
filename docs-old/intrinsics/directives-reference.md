---
title: "Directives Reference"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "Directives Reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MASM (Microsoft Macro Assembler), directives reference"
ms.assetid: da6efcd1-18f7-41de-81cd-a002a02f9a22
caps.latest.revision: 11
ms.author: "corob"
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
# Directives Reference
**x64**  
  
||||  
|-|-|-|  
|[.ALLOCSTACK](../intrinsics/.allocstack.md)|[.ENDPROLOG](../intrinsics/.endprolog.md)|[PROC](../intrinsics/proc.md)|  
|[.PUSHFRAME](../intrinsics/.pushframe.md)|[.PUSHREG](../intrinsics/.pushreg.md)|[.SAVEREG](../intrinsics/.savereg.md)|  
|[.SAVEXMM128](../intrinsics/.savexmm128.md)|[.SETFRAME](../intrinsics/.setframe.md)||  
  
### Code Labels  
  
|||  
|-|-|  
|[ALIGN](../intrinsics/align--masm-.md)|[EVEN](../intrinsics/even.md)|  
|[LABEL](../intrinsics/label--masm-.md)|[ORG](../intrinsics/org.md)|  
  
### Conditional Assembly  
  
||||  
|-|-|-|  
|[ELSE](../intrinsics/else--masm-.md)|[ELSEIF](../intrinsics/elseif--masm-.md)|[ELSEIF2](../intrinsics/elseif2.md)|  
|[IF](../intrinsics/if--masm-.md)|[IF2](../intrinsics/if2.md)|[IFB](../intrinsics/ifb.md)/[IFNB](../intrinsics/ifnb.md)|  
|[IFDEF](../intrinsics/ifdef.md)/[IFNDEF](../intrinsics/ifndef.md)|[IFDIF](../intrinsics/ifdif].md)/[IFDIF&#91;&#91;I&#93;&#93;](../intrinsics/ifdif].md)|[IFE](../intrinsics/ife.md)|  
|[IFIDN](../intrinsics/ifidn].md)/[IFIDN&#91;&#91;I&#93;&#93;](../intrinsics/ifidn].md)|||  
  
### Conditional Control Flow  
  
||||  
|-|-|-|  
|[.BREAK](../intrinsics/.break.md)|[.CONTINUE](../intrinsics/.continue.md)|[.ELSE](../intrinsics/.else.md)|  
|[.ELSEIF](../intrinsics/.if.md)|[.ENDIF](../intrinsics/.endif.md)|[.ENDW](../intrinsics/.endw.md)|  
|[.IF](../intrinsics/.if.md)|[.REPEAT](../intrinsics/.repeat.md)|[.UNTIL](../intrinsics/.until.md)|  
|[.UNTILCXZ](../intrinsics/.untilcxz.md)|[.WHILE](../intrinsics/.while.md)||  
  
### Conditional Error  
  
||||  
|-|-|-|  
|[.ERR](../intrinsics/.err.md)|[.ERR2](../intrinsics/.err2.md)|[.ERRB](../intrinsics/.errb.md)|  
|[.ERRDEF](../intrinsics/.errdef.md)|[.ERRDIF](../intrinsics/.errdif]].md)/[.ERRDIF&#91;&#91;I&#93;&#93;&#93;](../intrinsics/.errdif]].md)|[.ERRE](../intrinsics/.erre.md)|  
|[.ERRIDN](../intrinsics/.erridn].md)/[.ERRIDN&#91;&#91;I&#93;&#93;](../intrinsics/.erridn].md)|[.ERRNB](../intrinsics/.errnb.md)|[.ERRNDEF](../intrinsics/.errndef.md)|  
|[.ERRNZ](../intrinsics/.errnz.md)|||  
  
### Data Allocation  
  
||||  
|-|-|-|  
|[ALIGN](../intrinsics/align--masm-.md)|[BYTE](../intrinsics/byte--masm-.md)/[SBYTE](../intrinsics/sbyte--masm-.md)|[DWORD](../intrinsics/dword.md)/[SDWORD](../intrinsics/sdword.md)|  
|[EVEN](../intrinsics/even.md)|[FWORD](../intrinsics/fword.md)|[LABEL](../intrinsics/label--masm-.md)|  
|[ORG](../intrinsics/org.md)|[QWORD](../intrinsics/qword.md)|[REAL4](../intrinsics/real4.md)|  
|[REAL8](../intrinsics/real8.md)|[REAL10](../intrinsics/real10.md)|[TBYTE](../intrinsics/tbyte.md)|  
|[WORD](../intrinsics/word.md)/[SWORD](../intrinsics/sword.md)|||  
  
### Equates  
  
||  
|-|  
|[=](../intrinsics/=.md)|  
|[EQU](../intrinsics/equ.md)|  
|[TEXTEQU](../intrinsics/textequ.md)|  
  
### Listing Control  
  
||||  
|-|-|-|  
|[.CREF](../intrinsics/.cref.md)|[.LIST](../intrinsics/.list.md)|[.LISTALL](../intrinsics/.listall.md)|  
|[.LISTIF](../intrinsics/.listif.md)|[.LISTMACRO](../intrinsics/.listmacro.md)|[.LISTMACROALL](../intrinsics/.listmacroall.md)|  
|[.NOCREF](../intrinsics/.nocref.md)|[.NOLIST](../intrinsics/.nolist.md)|[.NOLISTIF](../intrinsics/.nolistif.md)|  
|[.NOLISTMACRO](../intrinsics/.nolistmacro.md)|[PAGE](../intrinsics/page.md)|[SUBTITLE](../intrinsics/subtitle.md)|  
|[.TFCOND](../intrinsics/.tfcond.md)|[TITLE](../intrinsics/title.md)||  
  
### Macros  
  
||||  
|-|-|-|  
|[ENDM](../intrinsics/endm.md)|[EXITM](../intrinsics/exitm.md)|[GOTO](../intrinsics/goto--masm-.md)|  
|[LOCAL](../intrinsics/local--masm-.md)|[MACRO](../intrinsics/macro.md)|[PURGE](../intrinsics/purge.md)|  
  
### Miscellaneous  
  
||||  
|-|-|-|  
|[ALIAS](../intrinsics/alias--masm-.md)|[ASSUME](../intrinsics/assume.md)|[COMMENT](../intrinsics/comment--masm-.md)|  
|[ECHO](../intrinsics/echo.md)|[END](../intrinsics/end--masm-.md)|[.FPO](../intrinsics/.fpo.md)|  
|[INCLUDE](../intrinsics/include--masm-.md)|[INCLUDELIB](../intrinsics/includelib--masm-.md)|[MMWORD](../intrinsics/mmword.md)|  
|[OPTION](../intrinsics/option--masm-.md)|[POPCONTEXT](../intrinsics/popcontext.md)|[PUSHCONTEXT](../intrinsics/pushcontext.md)|  
|[.RADIX](../intrinsics/.radix.md)|[.SAFESEH](../intrinsics/.safeseh.md)|[XMMWORD](../intrinsics/xmmword.md)|  
|[YMMWORD](../intrinsics/ymmword.md)|||  
  
### Procedures  
  
||||  
|-|-|-|  
|[ENDP](../intrinsics/endp.md)|[INVOKE](../intrinsics/invoke.md)|[PROC](../intrinsics/proc.md)|  
|[PROTO](../intrinsics/proto.md)|||  
  
### Processor  
  
||||  
|-|-|-|  
|[.386](../intrinsics/.386.md)|[.386P](../intrinsics/.386p.md)|[.387](../intrinsics/.387.md)|  
|[.486](../intrinsics/.486.md)|[.486P](../intrinsics/.486p.md)|[.586](../intrinsics/.586.md)|  
|[.586P](../intrinsics/.586p.md)|[.686](../intrinsics/.686.md)|[.686P](../intrinsics/.686p.md)|  
|[.K3D](../intrinsics/.k3d.md)|[.MMX](../intrinsics/.mmx.md)|[.XMM](../intrinsics/.xmm.md)|  
  
### Repeat Blocks  
  
||||  
|-|-|-|  
|[ENDM](../intrinsics/endm.md)|[FOR](../intrinsics/for--masm-.md)|[FORC](../intrinsics/forc.md)|  
|[GOTO](../intrinsics/goto--masm-.md)|[REPEAT](../intrinsics/repeat.md)|[WHILE](../intrinsics/while--masm-.md)|  
  
### Scope  
  
||||  
|-|-|-|  
|[COMM](../intrinsics/comm.md)|[EXTERN](../intrinsics/extern--masm-.md)|[EXTERNDEF](../intrinsics/externdef.md)|  
|[INCLUDELIB](../intrinsics/includelib--masm-.md)|[PUBLIC](../intrinsics/public--masm-.md)||  
  
### Segment  
  
||||  
|-|-|-|  
|[.ALPHA](../intrinsics/.alpha.md)|[ASSUME](../intrinsics/assume.md)|[.DOSSEG](../intrinsics/.dosseg.md)|  
|[END](../intrinsics/end--masm-.md)|[ENDS](../intrinsics/ends--masm-.md)|[GROUP](../intrinsics/group.md)|  
|[SEGMENT](../intrinsics/segment.md)|[.SEQ](../intrinsics/.seq.md)||  
  
### Simplified Segment  
  
||||  
|-|-|-|  
|[.CODE](../intrinsics/.code.md)|[.CONST](../intrinsics/.const.md)|[.DATA](../intrinsics/.data.md)|  
|[.DATA?](../intrinsics/.data-.md)|[.DOSSEG](../intrinsics/.dosseg.md)|[.EXIT](../intrinsics/.exit.md)|  
|[.FARDATA](../intrinsics/.fardata.md)|[.FARDATA?](../intrinsics/.fardata-.md)|[.MODEL](../intrinsics/.model.md)|  
|[.STACK](../intrinsics/.stack.md)|[.STARTUP](../intrinsics/.startup.md)||  
  
### String  
  
|||  
|-|-|  
|[CATSTR](../intrinsics/catstr.md)|[INSTR](../intrinsics/instr.md)|  
|[SIZESTR](../intrinsics/sizestr.md)|[SUBSTR](../intrinsics/substr.md)|  
  
### Structure and Record  
  
||||  
|-|-|-|  
|[ENDS](../intrinsics/ends--masm-.md)|[RECORD](../intrinsics/record--masm-.md)|[STRUCT](../intrinsics/struct--masm-.md)|  
|[TYPEDEF](../intrinsics/typedef--masm-.md)|[UNION](../intrinsics/union.md)||  
  
## See Also  
 [Microsoft Macro Assembler Reference](../intrinsics/microsoft-macro-assembler-reference.md)