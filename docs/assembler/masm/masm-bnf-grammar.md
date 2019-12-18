---
title: "Microsoft Macro Assembler BNF Grammar"
description: "Formal BNF description of MASM for x64."
ms.date: "12/17/2019"
helpviewer_keywords: ["MASM (Microsoft Macro Assembler), BNF reference"]
---

# Microsoft Macro Assembler BNF Grammar

To illustrate the use of the BNF, Figure B.1 diagrams the definition of the TYPEDEF directive, starting
with the nonterminal typedefDir.

The entries under each horizontal brace in Figure B.1 are terminals (such as NEAR16, NEAR32,
FAR16, and FAR32) or nonterminals (such as qualifier, qualifiedType, distance, and protoSpec) that
can be further defined. Each italicized nonterminal in the typedefDir definition is also an entry in the
BNF. Three vertical dots indicate a branching definition for a nonterminal that, for the sake of
simplicity, this figure does not illustrate.

The BNF grammar allows recursive definitions. For example, the grammar uses qualifiedType as a
possible definition for qualifiedType, which is also a component of the definition for qualifier.

## MASM Nonterminals

*;;*\
&nbsp;&nbsp;&nbsp;&nbsp;*endOfLine* | *comment*

*=Dir*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* = *immExpr* ;;

*addOp*\
&nbsp;&nbsp;&nbsp;&nbsp;+ | -

*aExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;*term* | *aExpr* && *term*

*altId*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*arbitraryText*\
&nbsp;&nbsp;&nbsp;&nbsp;*charList*

*asmInstruction*\
&nbsp;&nbsp;&nbsp;&nbsp;*mnemonic* ⟦ *exprList* ⟧

*assumeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**ASSUME** *assumeList* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;| **ASSUME NOTHING** ;;

*assumeList*\
&nbsp;&nbsp;&nbsp;&nbsp;*assumeRegister* | *assumeList* , *assumeRegister*\

*assumeReg*\
&nbsp;&nbsp;&nbsp;&nbsp;*register* : *assumeVal*

*assumeRegister*\
&nbsp;&nbsp;&nbsp;&nbsp;*assumeSegReg* | *assumeReg*

*assumeSegReg*\
&nbsp;&nbsp;&nbsp;&nbsp;*segmentRegister* : *assumeSegVal*

*assumeSegVal*\
&nbsp;&nbsp;&nbsp;&nbsp;*frameExpr* | **NOTHING** | **ERROR**

*assumeVal*\
&nbsp;&nbsp;&nbsp;&nbsp;*qualifiedType* | **NOTHING** | **ERROR**

*bcdConst*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *sign* ⟧ *decNumber*

*binaryOp*\
&nbsp;&nbsp;&nbsp;&nbsp;== | != | >= | <= | > | < | &

*bitDef*\
&nbsp;&nbsp;&nbsp;&nbsp;*bitFieldId* : *bitFieldSize* ⟦ = *constExpr* ⟧

*bitDefList*\
&nbsp;&nbsp;&nbsp;&nbsp;*bitDef* | *bitDefList* , ⟦ ;; ⟧ *bitDef*

*bitFieldId*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*bitFieldSize*\
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*blockStatements*\
&nbsp;&nbsp;&nbsp;&nbsp;*directiveList*\
&nbsp;&nbsp;&nbsp;&nbsp;| **.CONTINUE** **.IF** *cExpr* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.BREAK** ⟦ **.IF** *cExpr* ⟧

*bool*\
&nbsp;&nbsp;&nbsp;&nbsp;**TRUE** | **FALSE**

*byteRegister*\
&nbsp;&nbsp;&nbsp;&nbsp;AL | AH | CL | CH | DL | DH | BL | BH | R8B | R9B | R10B | R11B | R12B | R13B | R14B | R15B

*cExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;*aExpr* | *cExpr* || *aExpr*

*character*\
&nbsp;&nbsp;&nbsp;&nbsp;Any character with ordinal in the range 0–255 except linefeed (10).

*charList*\
&nbsp;&nbsp;&nbsp;&nbsp;*character* | *charList* character

*className*\
&nbsp;&nbsp;&nbsp;&nbsp;*string*

*commDecl*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *nearfar* ⟧ ⟦ *langType* ⟧ *id* : *commType*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ : *constExpr* ⟧

*commDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**COMM**\
&nbsp;&nbsp;&nbsp;&nbsp;*commList* ;;

*comment*\
&nbsp;&nbsp;&nbsp;&nbsp;; *text* ;;

*commentDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**COMMENT** *delimiter*\
&nbsp;&nbsp;&nbsp;&nbsp;*text*\
&nbsp;&nbsp;&nbsp;&nbsp;*text* *delimiter* *text* ;;

*commList*\
&nbsp;&nbsp;&nbsp;&nbsp;*commDecl* | *commList* , *commDecl*

*commType*\
&nbsp;&nbsp;&nbsp;&nbsp;*type* | *constExpr*

*constant*\
&nbsp;&nbsp;&nbsp;&nbsp;*digits* ⟦ *radixOverride* ⟧

*constExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;*expr*

*contextDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**PUSHCONTEXT** *contextItemList* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;**POPCONTEXT** *contextItemList* ;;

*contextItem*\
&nbsp;&nbsp;&nbsp;&nbsp;**ASSUMES** | **RADIX** | **LISTING** | **CPU** | **ALL**

*contextItemList*\
&nbsp;&nbsp;&nbsp;&nbsp;*contextItem* | *contextItemList* , *contextItem*

*controlBlock*\
&nbsp;&nbsp;&nbsp;&nbsp;*whileBlock* | *repeatBlock*

*controlDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*controlIf* | *controlBlock*

*controlElseif*\
&nbsp;&nbsp;&nbsp;&nbsp;**.ELSEIF**
&nbsp;&nbsp;&nbsp;&nbsp;*cExpr* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*directiveList* \
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *controlElseif* ⟧

*controlIf*\
&nbsp;&nbsp;&nbsp;&nbsp;**.IF**
&nbsp;&nbsp;&nbsp;&nbsp;*cExpr* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*directiveList*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *controlElseif* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ **.ELSE** ;;\
&nbsp;&nbsp;&nbsp;&nbsp;[*directiveList*⟧\
&nbsp;&nbsp;&nbsp;&nbsp;**.ENDIF** ;;

*coprocessor*\
&nbsp;&nbsp;&nbsp;&nbsp;.8087 | .287 | .387 | .NO87

*crefDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*crefOption* ;;

*crefOption*\
&nbsp;&nbsp;&nbsp;&nbsp;**.CREF**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.XCREF**  ⟦ *idList* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.NOCREF** ⟦ *idList* ⟧

*cxzExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;*expr*\
&nbsp;&nbsp;&nbsp;&nbsp;| ! *expr*\
&nbsp;&nbsp;&nbsp;&nbsp;| *expr* == expr\
&nbsp;&nbsp;&nbsp;&nbsp;| *expr* != expr

*dataDecl*\
&nbsp;&nbsp;&nbsp;&nbsp;DB | DW | DD | DF | DQ | DT | *dataType* | *typeId*

*dataDir*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *id* ⟧ *dataItem* ;;

*dataItem*\
&nbsp;&nbsp;&nbsp;&nbsp;*dataDecl* *scalarInstList*\
&nbsp;&nbsp;&nbsp;&nbsp;| *structTag* *structInstList*\
&nbsp;&nbsp;&nbsp;&nbsp;| *typeId* *structInstList*\
&nbsp;&nbsp;&nbsp;&nbsp;| *unionTag* *structInstList*\
&nbsp;&nbsp;&nbsp;&nbsp;| *recordTag* *recordInstList*

*dataType*\
&nbsp;&nbsp;&nbsp;&nbsp;BYTE | SBYTE | WORD | SWORD | DWORD | SDWORD | FWORD | QWORD | SQWORD | TBYTE | OWORD | REAL4 | REAL8 | REAL10 | MMWORD | XMMWORD | YMMWORD

*decdigit*\
&nbsp;&nbsp;&nbsp;&nbsp;0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9

*decNumber*\
&nbsp;&nbsp;&nbsp;&nbsp;*decdigit*\
&nbsp;&nbsp;&nbsp;&nbsp;| *decNumber* *decdigit*

*delimiter*\
&nbsp;&nbsp;&nbsp;&nbsp;Any character except *whiteSpaceCharacter*

*digits*\
&nbsp;&nbsp;&nbsp;&nbsp;*decdigit*\
&nbsp;&nbsp;&nbsp;&nbsp;| *digits* *decdigit*\
&nbsp;&nbsp;&nbsp;&nbsp;| *digits* hexdigit

*directive*\
&nbsp;&nbsp;&nbsp;&nbsp;*generalDir* | *segmentDef*

*directiveList*\
&nbsp;&nbsp;&nbsp;&nbsp;*directive* | *directiveList* *directive*

*distance*\
&nbsp;&nbsp;&nbsp;&nbsp;*nearfar* | **NEAR16** | **NEAR32** | **FAR16** | **FAR32**

*e01*\
&nbsp;&nbsp;&nbsp;&nbsp;e01 *orOp* *e02* | *e02*

*e02*\
&nbsp;&nbsp;&nbsp;&nbsp;e02 **AND** *e03* | *e03*

*e03*\
&nbsp;&nbsp;&nbsp;&nbsp;**NOT** *e04* | *e04*

*e04*\
&nbsp;&nbsp;&nbsp;&nbsp;*e04* *relOp* *e05* | *e05*

*e05*\
&nbsp;&nbsp;&nbsp;&nbsp;*e05* *addOp* *e06* | *e06*

*e06*\
&nbsp;&nbsp;&nbsp;&nbsp;*e06* *mulOp* *e07* | *e06* *shiftOp* *e07* | *e07*

*e07*\
&nbsp;&nbsp;&nbsp;&nbsp;*e07* *addOp* *e08* | *e08*

*e08*\
&nbsp;&nbsp;&nbsp;&nbsp;**HIGH** *e09*\
&nbsp;&nbsp;&nbsp;&nbsp;| **LOW** *e09*\
&nbsp;&nbsp;&nbsp;&nbsp;| **HIGHWORD** *e09*\
&nbsp;&nbsp;&nbsp;&nbsp;| **LOWWORD** *e09*\
&nbsp;&nbsp;&nbsp;&nbsp;| *e09*

*e09*\
&nbsp;&nbsp;&nbsp;&nbsp;**OFFSET** *e10*\
&nbsp;&nbsp;&nbsp;&nbsp;| **SEG** *e10*\
&nbsp;&nbsp;&nbsp;&nbsp;| **LROFFSET** *e10*\
&nbsp;&nbsp;&nbsp;&nbsp;| **TYPE**\
&nbsp;&nbsp;&nbsp;&nbsp;e10\\
&nbsp;&nbsp;&nbsp;&nbsp;| **THIS**\
&nbsp;&nbsp;&nbsp;&nbsp;e10\
&nbsp;&nbsp;&nbsp;&nbsp;| *e09* **PTR** *e10*\
&nbsp;&nbsp;&nbsp;&nbsp;| *e09* : *e10*\
&nbsp;&nbsp;&nbsp;&nbsp;| *e10*

*e10*\
e10 . *e11*\
&nbsp;&nbsp;&nbsp;&nbsp;| *e10* ⟦ *expr* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| *e11*

*e11*\
( *expr* )\
&nbsp;&nbsp;&nbsp;&nbsp;| ⟦ *expr* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **WIDTH** *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| **MASK** *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| **SIZE** *sizeArg*\
&nbsp;&nbsp;&nbsp;&nbsp;| **SIZEOF** *sizeArg*\
&nbsp;&nbsp;&nbsp;&nbsp;| **LENGTH** *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| **LENGTHOF** *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| *recordConst*\
&nbsp;&nbsp;&nbsp;&nbsp;| *string*\
&nbsp;&nbsp;&nbsp;&nbsp;| *constant*\
&nbsp;&nbsp;&nbsp;&nbsp;| *type*\
&nbsp;&nbsp;&nbsp;&nbsp;| *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| **$**\
&nbsp;&nbsp;&nbsp;&nbsp;| *segmentRegister*\
&nbsp;&nbsp;&nbsp;&nbsp;| *register*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ST**\
&nbsp;&nbsp;&nbsp;&nbsp;| **ST** ( *expr* )

*echoDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**ECHO**\
&nbsp;&nbsp;&nbsp;&nbsp;*arbitraryText* ;;\
%**OUT** *arbitraryText* ;;\

*elseifBlock*\
&nbsp;&nbsp;&nbsp;&nbsp;*elseifStatement* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*directiveList*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *elseifBlock* ⟧\

*elseifStatement*\
&nbsp;&nbsp;&nbsp;&nbsp;**ELSEIF** *constExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFE** *constExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFB** *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFNB** *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFDEF** *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFNDEF** *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFDIF** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFDIFI** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFIDN** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFIDNI** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIF1**\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIF2**

*endDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**END** ⟦ *immExpr* ⟧ ;;

*endpDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*procId* **ENDP** ;;

*endsDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* **ENDS** ;;

*equDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*textMacroId* **EQU** *equType* ;;

*equType*\
&nbsp;&nbsp;&nbsp;&nbsp;*immExpr* | *textLiteral*

*errorDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*errorOpt* ;;

*errorOpt*\
&nbsp;&nbsp;&nbsp;&nbsp;**.ERR** ⟦ *textItem* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRE** *constExpr* ⟦ *optText* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRNZ** *constExpr* ⟦ *optText* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRB** *textItem* ⟦ *optText* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRNB** *textItem* ⟦ *optText* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRDEF** *id* ⟦ *optText* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRNDEF** *id* ⟦ *optText* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRDIF** *textItem* , *textItem* ⟦ *optText* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRDIFI** *textItem* , *textItem* ⟦ *optText* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRIDN** *textItem* , *textItem* ⟦ *optText* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRIDNI** *textItem* , *textItem* ⟦ *optText* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERR1** ⟦ *textItem* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERR2** ⟦ *textItem* ⟧

*exitDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**.EXIT**
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *expr* ⟧ ;;

*exitmDir*\
&nbsp;&nbsp;&nbsp;&nbsp;: EXITM | EXITM *textItem*

*exponent*\
&nbsp;&nbsp;&nbsp;&nbsp;E ⟦ *sign* ⟧ *decNumber*

*expr*\
&nbsp;&nbsp;&nbsp;&nbsp;**SHORT** *e05*\
&nbsp;&nbsp;&nbsp;&nbsp;| **.TYPE** e01\
&nbsp;&nbsp;&nbsp;&nbsp;| **OPATTR** *e01*\
&nbsp;&nbsp;&nbsp;&nbsp;| *e01*

*exprList*\
&nbsp;&nbsp;&nbsp;&nbsp;*expr* | *exprList* , *expr*

*externDef*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *langType* ⟧ *id* ⟦ ( *altId* ) ⟧ : *externType*

*externDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*externKey* *externList* ;;

*externKey*\
&nbsp;&nbsp;&nbsp;&nbsp;**EXTRN** | **EXTERN** | **EXTERNDEF**

*externList*\
&nbsp;&nbsp;&nbsp;&nbsp;*externDef* | *externList* , ⟦ ;; ⟧ *externDef*

*externType*\
&nbsp;&nbsp;&nbsp;&nbsp;**ABS** | *qualifiedType*

*fieldAlign*\
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*fieldInit*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *initValue* ⟧ | *structInstance*

*fieldInitList*\
&nbsp;&nbsp;&nbsp;&nbsp;*fieldInit* | *fieldInitList* , ⟦ ;; ⟧ *fieldInit*

*fileChar*\
&nbsp;&nbsp;&nbsp;&nbsp;*delimiter*

*fileCharList*\
&nbsp;&nbsp;&nbsp;&nbsp;*fileChar* | *fileCharList* *fileChar*

*fileSpec*\
&nbsp;&nbsp;&nbsp;&nbsp;*fileCharList* | *textLiteral*

*flagName*\
&nbsp;&nbsp;&nbsp;&nbsp;**ZERO?** | **CARRY?** | **OVERFLOW?** | **SIGN?** | **PARITY?**

*floatNumber*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *sign* ⟧ *decNumber* . ⟦ *decNumber* ⟧ ⟦ *exponent* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| *digits* R | *digits* r

*forcDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**FORC** | **IRPC**

*forDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**FOR** | **IRP**

*forParm*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* ⟦ : *forParmType* ⟧

*forParmType*\
&nbsp;&nbsp;&nbsp;&nbsp;**REQ** | = *textLiteral*

*fpuRegister*\
&nbsp;&nbsp;&nbsp;&nbsp;**ST** *expr*

*frameExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;**SEG** *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| **DGROUP** : *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| *segmentRegister* : *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| *id*

*generalDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*modelDir* | *segOrderDir* | *nameDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *includeLibDir* | *commentDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *groupDir* | *assumeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *structDir* | *recordDir* | *typedefDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *externDir* | *publicDir* | *commDir* | *protoTypeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *equDir* | =Dir | *textDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *contextDir* | *optionDir* | *processorDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *radixDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *titleDir* | *pageDir* | *listDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *crefDir* | *echoDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *ifDir* | *errorDir* | *includeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *macroDir* | *macroCall* | *macroRepeat* | *purgeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *macroWhile* | *macroFor* | *macroForc*\
&nbsp;&nbsp;&nbsp;&nbsp;| *aliasDir*

*gpRegister*\
&nbsp;&nbsp;&nbsp;&nbsp;AX | EAX | CX | ECX | DX | EDX | BX | EBX | DI | EDI | SI | ESI | BP | EBP | SP | ESP | RSP | R8W | R8D | R9W | R9D | R12D | R13W | R13D | R14W | R14D

*groupDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*groupId* **GROUP** *segIdList*

*groupId*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*hexdigit*\
&nbsp;&nbsp;&nbsp;&nbsp;a | b | c | d | e | f | A | B | C | D | E | F

*id*\
&nbsp;&nbsp;&nbsp;&nbsp;The first character of the identifier can be an upper or lower-case alphabetic character (`[A–Za-z]`) or any of these four characters: `@ _ $ ?` The remaining characters can be any of those same characters or a decimal digit (`[0–9]`). Maximum length is 247 characters.

*idList*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* | *idList* , *id*

*ifDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*ifStatement* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*directiveList*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *elseifBlock* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ **ELSE** ;; \
&nbsp;&nbsp;&nbsp;&nbsp;*directiveList* ⟧ ;;\

*ifStatement*\
&nbsp;&nbsp;&nbsp;&nbsp;**IF** *constExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFE** *constExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFB** *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFNB** *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFDEF** *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFNDEF** *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFDIF** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFDIFI** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFIDN** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFIDNI** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IF1**\
&nbsp;&nbsp;&nbsp;&nbsp;| **IF2**

*immExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;*expr*

*includeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**INCLUDE** *fileSpec* ;;

*includeLibDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**INCLUDELIB** *fileSpec* ;;

*initValue*\
&nbsp;&nbsp;&nbsp;&nbsp;*immExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| *string*\
&nbsp;&nbsp;&nbsp;&nbsp;| ?\
&nbsp;&nbsp;&nbsp;&nbsp;| *constExpr* **DUP** ( *scalarInstList* )\
&nbsp;&nbsp;&nbsp;&nbsp;| *floatNumber*\
&nbsp;&nbsp;&nbsp;&nbsp;| *bcdConst*

*inSegDir*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *labelDef* ⟧ *inSegmentDir*

*inSegDirList*\
&nbsp;&nbsp;&nbsp;&nbsp;*inSegDir* | *inSegDirList* *inSegDir*

*inSegmentDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*instruction*\
&nbsp;&nbsp;&nbsp;&nbsp;| *dataDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *controlDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *startupDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *exitDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *offsetDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *labelDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *procDir* ⟦ *localDirList* ⟧ ⟦ *inSegDirList* ⟧ *endpDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *invokeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *generalDir*

*instrPrefix*\
&nbsp;&nbsp;&nbsp;&nbsp;**REP** | **REPE** | **REPZ** | **REPNE** | **REPNZ** | **LOCK**

*instruction*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *instrPrefix* ⟧ *asmInstruction*

*invokeArg*\
&nbsp;&nbsp;&nbsp;&nbsp;*register* :: *register* | *expr* | **ADDR** *expr*

*invokeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**INVOKE** *expr* ⟦ , ⟦ ;; ⟧ *invokeList* ⟧ ;;

*invokeList*\
&nbsp;&nbsp;&nbsp;&nbsp;*invokeArg* | *invokeList* , ⟦ ;; ⟧ *invokeArg*

*keyword*\
&nbsp;&nbsp;&nbsp;&nbsp;Any reserved word.

*keywordList*\
&nbsp;&nbsp;&nbsp;&nbsp;*keyword* | *keyword* *keywordList*

*labelDef*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* : | *id* :: | @@:

*labelDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* **LABEL** *qualifiedType* ;;

*langType*\
&nbsp;&nbsp;&nbsp;&nbsp;**C** | **PASCAL** | **FORTRAN** | **BASIC** | **SYSCALL** | **STDCALL**

*listDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*listOption* ;;

*listOption*\
&nbsp;&nbsp;&nbsp;&nbsp;**.LIST**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.NOLIST**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.XLIST**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.LISTALL**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.LISTIF**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.LFCOND**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.NOLISTIF**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.SFCOND**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.TFCOND**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.LISTMACROALL** | **.LALL**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.NOLISTMACRO** | **.SALL**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.LISTMACRO** | **.XALL**\

*localDef*\
&nbsp;&nbsp;&nbsp;&nbsp;**LOCAL** *idList* ;;

*localDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**LOCAL** *parmList* ;;

*localDirList*\
&nbsp;&nbsp;&nbsp;&nbsp;*localDir* | *localDirList* *localDir*

*localList*\
&nbsp;&nbsp;&nbsp;&nbsp;*localDef* | *localList* *localDef*

*macroArg*\
 % *constExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| % *textMacroId*\
&nbsp;&nbsp;&nbsp;&nbsp;| %*macroFuncId* ( *macroArgList* )\
&nbsp;&nbsp;&nbsp;&nbsp;| *string*\
&nbsp;&nbsp;&nbsp;&nbsp;| *arbitraryText*\
&nbsp;&nbsp;&nbsp;&nbsp;| < *arbitraryText* >

*macroArgList*\
&nbsp;&nbsp;&nbsp;&nbsp;*macroArg* | *macroArgList* , *macroArg*

*macroBody*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *localList* ⟧ *macroStmtList*

*macroCall*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* *macroArgList* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;| *id* ( *macroArgList* )

*macroDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* **MACRO** ⟦ *macroParmList* ⟧ ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

*macroFor*\
&nbsp;&nbsp;&nbsp;&nbsp;*forDir* *forParm* , < *macroArgList* > ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

*macroForc*\
&nbsp;&nbsp;&nbsp;&nbsp;*forcDir* *id* , *textLiteral* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

*macroFuncId*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*macroId*\
&nbsp;&nbsp;&nbsp;&nbsp;*macroProcId* | *macroFuncId*

*macroIdList*\
&nbsp;&nbsp;&nbsp;&nbsp;*macroId* | *macroIdList* , *macroId*

*macroLabel*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*macroParm*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* ⟦ : *parmType* ⟧

*macroParmList*\
&nbsp;&nbsp;&nbsp;&nbsp;*macroParm* | *macroParmList* , ⟦ ;; ⟧ *macroParm*

*macroProcId*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*macroRepeat*\
&nbsp;&nbsp;&nbsp;&nbsp;*repeatDir* *constExpr* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

*macroStmt*\
&nbsp;&nbsp;&nbsp;&nbsp;*directive* \
&nbsp;&nbsp;&nbsp;&nbsp;| *exitmDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| : *macroLabel*\
&nbsp;&nbsp;&nbsp;&nbsp;| **GOTO**\
&nbsp;&nbsp;&nbsp;&nbsp;*macroLabel*

*macroStmtList*\
&nbsp;&nbsp;&nbsp;&nbsp;*macroStmt* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;| *macroStmtList* *macroStmt* ;;\

*macroWhile*\
&nbsp;&nbsp;&nbsp;&nbsp;**WHILE** *constExpr* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

*mapType*\
&nbsp;&nbsp;&nbsp;&nbsp;**ALL** | **NONE** | **NOTPUBLIC**

*memOption*\
&nbsp;&nbsp;&nbsp;&nbsp;**TINY** | **SMALL** | **MEDIUM** | **COMPACT** | **LARGE** | **HUGE** | **FLAT**

*mnemonic*\
&nbsp;&nbsp;&nbsp;&nbsp;Instruction name.

*modelDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**.MODEL**\
&nbsp;&nbsp;&nbsp;&nbsp;*memOption* ⟦ , *modelOptlist* ⟧ ;;

*modelOpt*\
&nbsp;&nbsp;&nbsp;&nbsp;*langType* | *stackOption*

*modelOptlist*\
&nbsp;&nbsp;&nbsp;&nbsp;*modelOpt* | *modelOptlist* , *modelOpt*

*module*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *directiveList* ⟧ *endDir*

*mulOp*\
&nbsp;&nbsp;&nbsp;&nbsp;\* | / | **MOD**

*nameDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**NAME**\
&nbsp;&nbsp;&nbsp;&nbsp;*id* ;;\

*nearfar*\
&nbsp;&nbsp;&nbsp;&nbsp;**NEAR** | **FAR**

*nestedStruct*\
&nbsp;&nbsp;&nbsp;&nbsp;*structHdr* ⟦ *id* ⟧ ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*structBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDS** ;;\

*offsetDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*offsetDirType* ;;

*offsetDirType*\
&nbsp;&nbsp;&nbsp;&nbsp;**EVEN** | **ORG** *immExpr* | **ALIGN** ⟦ *constExpr* ⟧

*offsetType*\
&nbsp;&nbsp;&nbsp;&nbsp;**GROUP** | **SEGMENT** | **FLAT**

*oldRecordFieldList*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *constExpr* ⟧ | *oldRecordFieldList* , ⟦ *constExpr* ⟧

*optionDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**OPTION** *optionList* ;;

*optionItem*\
&nbsp;&nbsp;&nbsp;&nbsp;**CASEMAP** : *mapType*\
&nbsp;&nbsp;&nbsp;&nbsp;| **DOTNAME** | **NODOTNAME**\
&nbsp;&nbsp;&nbsp;&nbsp;| **EMULATOR** | **NOEMULATOR**\
&nbsp;&nbsp;&nbsp;&nbsp;| **EPILOGUE** : *macroId*\
&nbsp;&nbsp;&nbsp;&nbsp;| **EXPR16** | **EXPR32**\
&nbsp;&nbsp;&nbsp;&nbsp;| **LANGUAGE** : *langType*\
&nbsp;&nbsp;&nbsp;&nbsp;| **LJMP**
| **NOLJMP**\
&nbsp;&nbsp;&nbsp;&nbsp;| **M510** | **NOM510**\
&nbsp;&nbsp;&nbsp;&nbsp;| **NOKEYWORD** : < *keywordList* >\
&nbsp;&nbsp;&nbsp;&nbsp;| **NOSIGNEXTEND**\
&nbsp;&nbsp;&nbsp;&nbsp;| **OFFSET** : *offsetType*\
&nbsp;&nbsp;&nbsp;&nbsp;| **OLDMACROS** | **NOOLDMACROS**\
&nbsp;&nbsp;&nbsp;&nbsp;| **OLDSTRUCTS** | **NOOLDSTRUCTS**\
&nbsp;&nbsp;&nbsp;&nbsp;| **PROC** : *oVisibility*\
&nbsp;&nbsp;&nbsp;&nbsp;| **PROLOGUE** : *macroId*\
&nbsp;&nbsp;&nbsp;&nbsp;| **READONLY** | **NOREADONLY**\
&nbsp;&nbsp;&nbsp;&nbsp;| **SCOPED** | **NOSCOPED**\
&nbsp;&nbsp;&nbsp;&nbsp;| **SEGMENT** : *segSize*\
&nbsp;&nbsp;&nbsp;&nbsp;| **SETIF2** : bool

*optionList*\
&nbsp;&nbsp;&nbsp;&nbsp;*optionItem* | *optionList* , ⟦ ;; ⟧ *optionItem*

*optText*\
&nbsp;&nbsp;&nbsp;&nbsp;, *textItem*

*orOp*\
&nbsp;&nbsp;&nbsp;&nbsp;**OR** | **XOR**

*oVisibility*\
&nbsp;&nbsp;&nbsp;&nbsp;**PUBLIC** | **PRIVATE** | **EXPORT**

*pageDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**PAGE** ⟦ *pageExpr* ⟧ ;;

*pageExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;\+ | ⟦ *pageLength* ⟧ ⟦ , *pageWidth* ⟧

*pageLength*\
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*pageWidth*\
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*parm*\
&nbsp;&nbsp;&nbsp;&nbsp;*parmId* ⟦ : *qualifiedType* ⟧ | *parmId* ⟦ *constExpr* ⟧ ⟦ : *qualifiedType* ⟧

*parmId*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*parmList*\
&nbsp;&nbsp;&nbsp;&nbsp;*parm* | *parmList* , ⟦ ;; ⟧ *parm*

*parmType*\
&nbsp;&nbsp;&nbsp;&nbsp;**REQ** | = *textLiteral* | **VARARG**

*pOptions*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *distance* ⟧ ⟦ *langType* ⟧ ⟦ *oVisibility* ⟧

*primary*\
&nbsp;&nbsp;&nbsp;&nbsp;*expr* *binaryOp* *expr* | *flagName* | *expr*

*procDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*procId* **PROC**\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *pOptions* ⟧ ⟦ < *macroArgList* > ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *usesRegs* ⟧ ⟦ *procParmList* ⟧

*processor*\
 .8086\
&nbsp;&nbsp;&nbsp;&nbsp;| .186\
&nbsp;&nbsp;&nbsp;&nbsp;| .286 | .286C | .286P\
&nbsp;&nbsp;&nbsp;&nbsp;| .386 | .386C | .386P\
&nbsp;&nbsp;&nbsp;&nbsp;| .486 | .486P

*processorDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*processor* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;| *coprocessor* ;;

*procId*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*procItem*\
&nbsp;&nbsp;&nbsp;&nbsp;*instrPrefix* | *dataDir* | *labelDir* | *offsetDir* | *generalDir*

*procParmList*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ , ⟦ ;; ⟧ *parmList* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ , ⟦ ;; ⟧ *parmId* :VARARG⟧

*protoArg*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *id* ⟧ : *qualifiedType*

*protoArgList*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ , ⟦ ;; ⟧ *protoList* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ , ⟦ ;; ⟧ ⟦ *id* ⟧ :VARARG ⟧

*protoList*\
&nbsp;&nbsp;&nbsp;&nbsp;*protoArg*\
&nbsp;&nbsp;&nbsp;&nbsp;| *protoList* , ⟦ ;; ⟧ *protoArg*

*protoSpec*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *distance* ⟧ ⟦ *langType* ⟧ ⟦ *protoArgList* ⟧ | *typeId*

*protoTypeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* **PROTO** *protoSpec*

*pubDef*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *langType* ⟧ *id*

*publicDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**PUBLIC** *pubList* ;;

*pubList*\
&nbsp;&nbsp;&nbsp;&nbsp;*pubDef* | *pubList* , ⟦ ;; ⟧ *pubDef*

*purgeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**PURGE** *macroIdList*

*qualifiedType*\
&nbsp;&nbsp;&nbsp;&nbsp;*type* | ⟦ *distance* ⟧ **PTR** ⟦ *qualifiedType* ⟧

*qualifier*\
&nbsp;&nbsp;&nbsp;&nbsp;*qualifiedType* | **PROTO** *protoSpec*

*quote*\
&nbsp;&nbsp;&nbsp;&nbsp;“ | ‘

*qwordRegister*\
&nbsp;&nbsp;&nbsp;&nbsp;RAX | RCX | RDX | RBX | RDI | RSI | RBP | R8 | R9 | R10 | R11 | R12 | R13 | R14 | R15

*radixDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**.RADIX** *constExpr* ;;

*radixOverride*\
&nbsp;&nbsp;&nbsp;&nbsp;h | o | q | t | y | H | O | Q | T | Y

*recordConst*\
&nbsp;&nbsp;&nbsp;&nbsp;*recordTag* { *oldRecordFieldList* } | *recordTag* < *oldRecordFieldList* >

*recordDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*recordTag* **RECORD** *bitDefList* ;;

*recordFieldList*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *constExpr* ⟧ | *recordFieldList* , ⟦ ;; ⟧ ⟦ *constExpr* ⟧

*recordInstance*\
 { ⟦ ;; ⟧ *recordFieldList* ⟦ ;; ⟧ }\
&nbsp;&nbsp;&nbsp;&nbsp;| < *oldRecordFieldList* >\
&nbsp;&nbsp;&nbsp;&nbsp;| *constExpr* **DUP** ( *recordInstance* )

*recordInstList*\
&nbsp;&nbsp;&nbsp;&nbsp;*recordInstance* | *recordInstList* , ⟦ ;; ⟧ *recordInstance*

*recordTag*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*register*\
&nbsp;&nbsp;&nbsp;&nbsp;*specialRegister* | *gpRegister* | *byteRegister* | *qwordRegister* |  *fpuRegister* | *SIMDRegister* | *segmentRegister*

*regList*\
&nbsp;&nbsp;&nbsp;&nbsp;*register* | *regList* *register*

*relOp*\
&nbsp;&nbsp;&nbsp;&nbsp;EQ | NE | LT | LE | GT | GE

*repeatBlock*\
&nbsp;&nbsp;&nbsp;&nbsp;**.REPEAT** ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*blockStatements* ;;
untilDir ;;

*repeatDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**REPEAT** | **REPT**

*scalarInstList*\
&nbsp;&nbsp;&nbsp;&nbsp;*initValue* | *scalarInstList* , ⟦ ;; ⟧ *initValue*

*segAlign*\
&nbsp;&nbsp;&nbsp;&nbsp;**BYTE** | **WORD** | **DWORD** | **PARA** | **PAGE**

*segAttrib*\
&nbsp;&nbsp;&nbsp;&nbsp;**PUBLIC** | **STACK** | **COMMON** | **MEMORY** | **AT** *constExpr* | **PRIVATE**

*segDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**.CODE**\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *segId* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.DATA**\
&nbsp;&nbsp;&nbsp;&nbsp;|  **.DATA?**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.CONST**\
&nbsp;&nbsp;&nbsp;&nbsp;| **.FARDATA**⟦ *segId* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;|  **.FARDATA?** ⟦ *segId* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **.STACK** ⟦ *constExpr* ⟧

*segId*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*segIdList*\
&nbsp;&nbsp;&nbsp;&nbsp;*segId*\
&nbsp;&nbsp;&nbsp;&nbsp;| *segIdList* , *segId*

*segmentDef*\
&nbsp;&nbsp;&nbsp;&nbsp;*segmentDir* ⟦ *inSegDirList* ⟧ *endsDir* | *simpleSegDir* ⟦ *inSegDirList* ⟧ ⟦ *endsDir* ⟧

*segmentDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*segId* **SEGMENT** ⟦ *segOptionList* ⟧ ;;

*segmentRegister*\
&nbsp;&nbsp;&nbsp;&nbsp;**CS** | **DS** | **ES** | **FS** | **GS** | **SS**

*segOption*\
&nbsp;&nbsp;&nbsp;&nbsp;*segAlign*\
&nbsp;&nbsp;&nbsp;&nbsp;| *segRO*\
&nbsp;&nbsp;&nbsp;&nbsp;| *segAttrib*\
&nbsp;&nbsp;&nbsp;&nbsp;| *segSize*\
&nbsp;&nbsp;&nbsp;&nbsp;| *className*

*segOptionList*\
&nbsp;&nbsp;&nbsp;&nbsp;*segOption* | *segOptionList* *segOption*

*segOrderDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**.ALPHA** | **.SEQ** | **.DOSSEG** | **DOSSEG**

*segRO*\
&nbsp;&nbsp;&nbsp;&nbsp;**READONLY**

*segSize*\
&nbsp;&nbsp;&nbsp;&nbsp;**USE16** | **USE32** | **FLAT**

*shiftOp*\
&nbsp;&nbsp;&nbsp;&nbsp;**SHR** | **SHL**

*sign*\
 - | +

*simdRegister*\
&nbsp;&nbsp;&nbsp;&nbsp;MM0 | MM1 | MM2 | MM3 | MM4 | MM5 | MM6 | MM7 | xmmRegister | YMM0 | YMM1 | YMM2 | YMM3 | YMM4 | YMM5 | YMM6 | YMM7 | YMM8 | YMM9 | YMM10 | YMM11 | YMM12 | YMM13 | YMM14 | YMM15

*simpleExpr*\
 ( *cExpr* ) | *primary*

*simpleSegDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*segDir* ;;

*sizeArg*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* | *type* | *e10*

*specialChars*\
 : | . | ⟦ | ⟧ | ( | ) | < | > | { | }\
&nbsp;&nbsp;&nbsp;&nbsp;| + | - | / | * | & | % | !\
&nbsp;&nbsp;&nbsp;&nbsp;| ’ | \ | = | ; | , | “\
&nbsp;&nbsp;&nbsp;&nbsp;| *whiteSpaceCharacter*\
&nbsp;&nbsp;&nbsp;&nbsp;| *endOfLine*

*specialRegister*\
&nbsp;&nbsp;&nbsp;&nbsp;CR0 | CR2 | CR3 | DR0 | DR1 | DR2 | DR3 | DR6 | DR7 | TR3 | TR4 | TR5 | TR6 | TR7

*stackOption*\
&nbsp;&nbsp;&nbsp;&nbsp;**NEARSTACK** | **FARSTACK**

*startupDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**.STARTUP** ;;

*stext*\
&nbsp;&nbsp;&nbsp;&nbsp;*stringChar* | *stext* *stringChar*

*string*\
&nbsp;&nbsp;&nbsp;&nbsp;*quote* ⟦ *stext* ⟧ *quote*

*stringChar*\
&nbsp;&nbsp;&nbsp;&nbsp;*quote* *quote* | Any character except quote.

*structBody*\
&nbsp;&nbsp;&nbsp;&nbsp;*structItem* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;| *structBody* *structItem* ;;

*structDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*structTag* *structHdr* ⟦ *fieldAlign* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;⟦, **NONUNIQUE** ⟧ ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*structBody*\
&nbsp;&nbsp;&nbsp;&nbsp;*structTag*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDS** ;;

*structHdr*\
&nbsp;&nbsp;&nbsp;&nbsp;**STRUC** | **STRUCT** | **UNION**

*structInstance*\
 < ⟦ *fieldInitList* ⟧ >\
&nbsp;&nbsp;&nbsp;&nbsp;| { ⟦ ;; ⟧ ⟦ *fieldInitList* ⟧ ⟦ ;; ⟧ }\
&nbsp;&nbsp;&nbsp;&nbsp;| *constExpr* **DUP** ( *structInstList* )\

*structInstList*\
&nbsp;&nbsp;&nbsp;&nbsp;*structInstance* | *structInstList* , ⟦ ;; ⟧ *structInstance*

*structItem*\
&nbsp;&nbsp;&nbsp;&nbsp;*dataDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *generalDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *offsetDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *nestedStruct*

*structTag*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*term*\
&nbsp;&nbsp;&nbsp;&nbsp;*simpleExpr* | ! *simpleExpr*

*text*\
&nbsp;&nbsp;&nbsp;&nbsp;*textLiteral* | *text* character | ! *character* *text* | *character* | !*character*

*textDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* *textMacroDir* ;;

*textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;*textLiteral* | *textMacroId* | % *constExpr*

*textLen*\
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*textList*\
&nbsp;&nbsp;&nbsp;&nbsp;*textItem* | *textList* , ⟦ ;; ⟧ *textItem*

*textLiteral*\
&nbsp;&nbsp;&nbsp;&nbsp;< *text* >;;

*textMacroDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**CATSTR** ⟦ *textList* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **TEXTEQU** ⟦ *textList* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **SIZESTR** *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **SUBSTR** *textItem* , *textStart* ⟦ , *textLen* ⟧\
&nbsp;&nbsp;&nbsp;&nbsp;| **INSTR** ⟦ *textStart* , ⟧ *textItem* , *textItem*

*textMacroId*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*textStart*\
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*titleDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*titleType* *arbitraryText* ;;

*titleType*\
&nbsp;&nbsp;&nbsp;&nbsp;**TITLE** | **SUBTITLE** | **SUBTTL**

*type*\
&nbsp;&nbsp;&nbsp;&nbsp;*structTag*\
&nbsp;&nbsp;&nbsp;&nbsp;| *unionTag*\
&nbsp;&nbsp;&nbsp;&nbsp;| *recordTag*\
&nbsp;&nbsp;&nbsp;&nbsp;| *distance*\
&nbsp;&nbsp;&nbsp;&nbsp;| *dataType*\
&nbsp;&nbsp;&nbsp;&nbsp;| *typeId*

*typedefDir*\
&nbsp;&nbsp;&nbsp;&nbsp;*typeId* **TYPEDEF** qualifier

*typeId*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*unionTag*\
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*untilDir*\
&nbsp;&nbsp;&nbsp;&nbsp;**.UNTIL**\
&nbsp;&nbsp;&nbsp;&nbsp;*cExpr* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;**.UNTILCXZ** ⟦ *cxzExpr* ⟧ ;;

*usesRegs*\
&nbsp;&nbsp;&nbsp;&nbsp;**USES** *regList*

*whileBlock*\
&nbsp;&nbsp;&nbsp;&nbsp;**.WHILE**\
&nbsp;&nbsp;&nbsp;&nbsp;*cExpr* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;*blockStatements* ;;\
&nbsp;&nbsp;&nbsp;&nbsp;**.ENDW**

*whiteSpaceCharacter*\
&nbsp;&nbsp;&nbsp;&nbsp;ASCII 8, 9, 11–13, 26, 32

*xmmRegister*\
&nbsp;&nbsp;&nbsp;&nbsp;XMM0 | XMM1 | XMM2 | XMM3 | XMM4 | XMM5 | XMM6 | XMM7 | XMM8 | XMM9 | XMM10 | XMM11 | XMM12 | XMM13 | XMM14 | XMM15\

