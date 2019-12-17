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

*;;*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*endOfLine* | *comment*

*=Dir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* = *immExpr* ;;

*addOp*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;+ | -

*aExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*term* | *aExpr* && *term*

*altId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*arbitraryText*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*charList*

*asmInstruction*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*mnemonic* ⟦ *exprList* ⟧

*assumeDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ASSUME** *assumeList* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ASSUME NOTHING** ;;

*assumeList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assumeRegister* | *assumeList* , *assumeRegister*<br/>

*assumeReg*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*register* : *assumeVal*

*assumeRegister*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*assumeSegReg* | *assumeReg*

*assumeSegReg*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*segmentRegister* : *assumeSegVal*

*assumeSegVal*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*frameExpr* | **NOTHING** | **ERROR**

*assumeVal*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*qualifiedType* | **NOTHING** | **ERROR**

*bcdConst*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *sign* ⟧ *decNumber*

*binaryOp*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;== | != | >= | <= | > | < | &

*bitDef*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*bitFieldId* : *bitFieldSize* ⟦ = *constExpr* ⟧

*bitDefList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*bitDef* | *bitDefList* , ⟦ ;; ⟧ *bitDef*

*bitFieldId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*bitFieldSize*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*blockStatements*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*directiveList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.CONTINUE** **.IF** *cExpr* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.BREAK** ⟦ **.IF** *cExpr* ⟧

*bool*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**TRUE** | **FALSE**

*byteRegister*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;AL | AH | CL | CH | DL | DH | BL | BH | R8B | R9B | R10B | R11B | R12B | R13B | R14B | R15B

*cExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*aExpr* | *cExpr* || *aExpr*

*character*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Any character with ordinal in the range 0–255 except linefeed (10).

*charList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*character* | *charList* character

*className*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*string*

*commDecl*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *nearfar* ⟧ ⟦ *langType* ⟧ *id* : *commType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ : *constExpr* ⟧

*commDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**COMM**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*commList* ;;

*comment*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;; *text* ;;

*commentDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**COMMENT** *delimiter*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*text*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*text* *delimiter* *text* ;;

*commList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*commDecl* | *commList* , *commDecl*

*commType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type* | *constExpr*

*constant*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*digits* ⟦ *radixOverride* ⟧

*constExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expr*

*contextDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**PUSHCONTEXT** *contextItemList* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**POPCONTEXT** *contextItemList* ;;

*contextItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ASSUMES** | **RADIX** | **LISTING** | **CPU** | **ALL**

*contextItemList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*contextItem* | *contextItemList* , *contextItem*

*controlBlock*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*whileBlock* | *repeatBlock*

*controlDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*controlIf* | *controlBlock*

*controlElseif*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.ELSEIF**
&nbsp;&nbsp;&nbsp;&nbsp;*cExpr* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*directiveList* <br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *controlElseif* ⟧

*controlIf*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.IF**
&nbsp;&nbsp;&nbsp;&nbsp;*cExpr* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;[directiveList]#(directive_list)<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *controlElseif* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ **.ELSE** ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;[directiveList]#(directive_list) ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.ENDIF** ;;

*coprocessor*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;.8087 | .287 | .387 | .NO87

*crefDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*crefOption* ;;

*crefOption*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.CREF**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.XCREF**  ⟦ *idList* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.NOCREF** ⟦ *idList* ⟧

*cxzExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| ! *expr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *expr* == expr<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *expr* != expr

*dataDecl*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;DB | DW | DD | DF | DQ | DT | *dataType* | *typeId*

*dataDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *id* ⟧ *dataItem* ;;

*dataItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*dataDecl* *scalarInstList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *structTag* *structInstList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *typeId* *structInstList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *unionTag* *structInstList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *recordTag* *recordInstList*

*dataType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;BYTE | SBYTE | WORD | SWORD | DWORD | SDWORD | FWORD | QWORD | SQWORD | TBYTE | OWORD | REAL4 | REAL8 | REAL10 | MMWORD | XMMWORD | YMMWORD

*decdigit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9

*decNumber*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*decdigit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *decNumber* *decdigit*

*delimiter*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Any character except *whiteSpaceCharacter*

*digits*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*decdigit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *digits* *decdigit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *digits* hexdigit

*directive*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*generalDir* | *segmentDef*

*directiveList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*directive* | *directiveList* *directive*

*distance*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*nearfar* | **NEAR16** | **NEAR32** | **FAR16** | **FAR32**

*e01*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;e01 *orOp* *e02* | *e02*

*e02*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;e02 **AND** *e03* | *e03*

*e03*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**NOT** *e04* | *e04*

*e04*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*e04* *relOp* *e05* | *e05*

*e05*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*e05* *addOp* *e06* | *e06*

*e06*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*e06* *mulOp* *e07* | *e06* *shiftOp* *e07* | *e07*

*e07*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*e07* *addOp* *e08* | *e08*

*e08*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**HIGH** *e09*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **LOW** *e09*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **HIGHWORD** *e09*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **LOWWORD** *e09*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *e09*

*e09*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**OFFSET** *e10*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **SEG** *e10*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **LROFFSET** *e10*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **TYPE**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;e10<br/><br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **THIS**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;e10<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *e09* **PTR** *e10*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *e09* : *e10*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *e10*

*e10*<br/>
e10 . *e11*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *e10* ⟦ *expr* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *e11*

*e11*<br/>
( *expr* )<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| ⟦ *expr* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **WIDTH** *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **MASK** *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **SIZE** *sizeArg*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **SIZEOF** *sizeArg*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **LENGTH** *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **LENGTHOF** *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *recordConst*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *string*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *constant*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *type*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **$**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *segmentRegister*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *register*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ST**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ST** ( *expr* )

*echoDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ECHO**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*arbitraryText* ;;<br/>
%**OUT** *arbitraryText* ;;<br/>

*elseifBlock*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*elseifStatement* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*directiveList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *elseifBlock* ⟧<br/>

*elseifStatement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ELSEIF** *constExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFE** *constExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFB** *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFNB** *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFDEF** *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFNDEF** *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFDIF** *textItem* , *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFDIFI** *textItem* , *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFIDN** *textItem* , *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFIDNI** *textItem* , *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIF1**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIF2**

*endDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**END** ⟦ *immExpr* ⟧ ;;

*endpDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*procId* **ENDP** ;;

*endsDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* **ENDS** ;;

*equDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*textMacroId* **EQU** *equType* ;;

*equType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*immExpr* | *textLiteral*

*errorDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*errorOpt* ;;

*errorOpt*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.ERR** ⟦ *textItem* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRE** *constExpr* ⟦ *optText* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRNZ** *constExpr* ⟦ *optText* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRB** *textItem* ⟦ *optText* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRNB** *textItem* ⟦ *optText* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRDEF** *id* ⟦ *optText* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRNDEF** *id* ⟦ *optText* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRDIF** *textItem* , *textItem* ⟦ *optText* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRDIFI** *textItem* , *textItem* ⟦ *optText* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRIDN** *textItem* , *textItem* ⟦ *optText* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERRIDNI** *textItem* , *textItem* ⟦ *optText* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERR1** ⟦ *textItem* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.ERR2** ⟦ *textItem* ⟧

*exitDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.EXIT**
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *expr* ⟧ ;;

*exitmDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;: EXITM | EXITM *textItem*

*exponent*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;E ⟦ *sign* ⟧ *decNumber*

*expr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**SHORT** *e05*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.TYPE** e01<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **OPATTR** *e01*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *e01*

*exprList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expr* | *exprList* , *expr*

*externDef*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *langType* ⟧ *id* ⟦ ( *altId* ) ⟧ : *externType*

*externDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*externKey* *externList* ;;

*externKey*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**EXTRN** | **EXTERN** | **EXTERNDEF**

*externList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*externDef* | *externList* , ⟦ ;; ⟧ *externDef*

*externType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ABS** | *qualifiedType*

*fieldAlign*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*fieldInit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *initValue* ⟧ | *structInstance*

*fieldInitList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*fieldInit* | *fieldInitList* , ⟦ ;; ⟧ *fieldInit*

*fileChar*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*delimiter*

*fileCharList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*fileChar* | *fileCharList* *fileChar*

*fileSpec*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*fileCharList* | *textLiteral*

*flagName*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ZERO?** | **CARRY?** | **OVERFLOW?** | **SIGN?** | **PARITY?**

*floatNumber*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *sign* ⟧ *decNumber* . ⟦ *decNumber* ⟧ ⟦ *exponent* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *digits* R | *digits* r

*forcDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**FORC** | **IRPC**

*forDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**FOR** | **IRP**

*forParm*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* ⟦ : *forParmType* ⟧

*forParmType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**REQ** | = *textLiteral*

*fpuRegister*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ST** *expr*

*frameExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**SEG** *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **DGROUP** : *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *segmentRegister* : *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *id*

*generalDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*modelDir* | *segOrderDir* | *nameDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *includeLibDir* | *commentDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *groupDir* | *assumeDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *structDir* | *recordDir* | *typedefDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *externDir* | *publicDir* | *commDir* | *protoTypeDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *equDir* | =Dir | *textDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *contextDir* | *optionDir* | *processorDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *radixDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *titleDir* | *pageDir* | *listDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *crefDir* | *echoDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *ifDir* | *errorDir* | *includeDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *macroDir* | *macroCall* | *macroRepeat* | *purgeDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *macroWhile* | *macroFor* | *macroForc*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *aliasDir*

*gpRegister*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;AX | EAX | CX | ECX | DX | EDX | BX | EBX | DI | EDI | SI | ESI | BP | EBP | SP | ESP | RSP | R8W | R8D | R9W | R9D | R12D | R13W | R13D | R14W | R14D

*groupDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*groupId* **GROUP** *segIdList*

*groupId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*hexdigit*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;a | b | c | d | e | f | A | B | C | D | E | F

*id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;The first character of the identifier can be an upper or lower-case alphabetic character (`[A–Za-z]`) or any of these four characters: `@ _ $ ?` The remaining characters can be any of those same characters or a decimal digit (`[0–9]`). Maximum length is 247 characters.

*idList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* | *idList* , *id*

*ifDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*ifStatement* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*directiveList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *elseifBlock* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ **ELSE** ;; <br/>
&nbsp;&nbsp;&nbsp;&nbsp;*directiveList* ⟧ ;;<br/>

*ifStatement*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**IF** *constExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **IFE** *constExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **IFB** *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **IFNB** *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **IFDEF** *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **IFNDEF** *id*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **IFDIF** *textItem* , *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **IFDIFI** *textItem* , *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **IFIDN** *textItem* , *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **IFIDNI** *textItem* , *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **IF1**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **IF2**

*immExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expr*

*includeDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**INCLUDE** *fileSpec* ;;

*includeLibDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**INCLUDELIB** *fileSpec* ;;

*initValue*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*immExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *string*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| ?<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *constExpr* **DUP** ( *scalarInstList* )<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *floatNumber*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *bcdConst*

*inSegDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *labelDef* ⟧ *inSegmentDir*

*inSegDirList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*inSegDir* | *inSegDirList* *inSegDir*

*inSegmentDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*instruction*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *dataDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *controlDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *startupDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *exitDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *offsetDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *labelDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *procDir* ⟦ *localDirList* ⟧ ⟦ *inSegDirList* ⟧ *endpDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *invokeDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *generalDir*

*instrPrefix*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**REP** | **REPE** | **REPZ** | **REPNE** | **REPNZ** | **LOCK**

*instruction*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *instrPrefix* ⟧ *asmInstruction*

*invokeArg*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*register* :: *register* | *expr* | **ADDR** *expr*

*invokeDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**INVOKE** *expr* ⟦ , ⟦ ;; ⟧ *invokeList* ⟧ ;;

*invokeList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*invokeArg* | *invokeList* , ⟦ ;; ⟧ *invokeArg*

*keyword*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Any reserved word.

*keywordList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*keyword* | *keyword* *keywordList*

*labelDef*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* : | *id* :: | @@:

*labelDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* **LABEL** *qualifiedType* ;;

*langType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**C** | **PASCAL** | **FORTRAN** | **BASIC** | **SYSCALL** | **STDCALL**

*listDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*listOption* ;;

*listOption*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.LIST**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.NOLIST**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.XLIST**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.LISTALL**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.LISTIF**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.LFCOND**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.NOLISTIF**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.SFCOND**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.TFCOND**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.LISTMACROALL** | **.LALL**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.NOLISTMACRO** | **.SALL**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.LISTMACRO** | **.XALL**<br/>

*localDef*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**LOCAL** *idList* ;;

*localDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**LOCAL** *parmList* ;;

*localDirList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*localDir* | *localDirList* *localDir*

*localList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*localDef* | *localList* *localDef*

*macroArg*<br/>
 % *constExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| % *textMacroId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| %*macroFuncId* ( *macroArgList* )<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *string*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *arbitraryText*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| < *arbitraryText* >

*macroArgList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*macroArg* | *macroArgList* , *macroArg*

*macroBody*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *localList* ⟧ *macroStmtList*

*macroCall*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* *macroArgList* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *id* ( *macroArgList* )

*macroDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* **MACRO** ⟦ *macroParmList* ⟧ ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

*macroFor*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*forDir* *forParm* , < *macroArgList* > ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

*macroForc*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*forcDir* *id* , *textLiteral* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

*macroFuncId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*macroId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*macroProcId* | *macroFuncId*

*macroIdList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*macroId* | *macroIdList* , *macroId*

*macroLabel*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*macroParm*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* ⟦ : *parmType* ⟧

*macroParmList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*macroParm* | *macroParmList* , ⟦ ;; ⟧ *macroParm*

*macroProcId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*macroRepeat*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*repeatDir* *constExpr* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

*macroStmt*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*directive* <br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *exitmDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| : *macroLabel*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **GOTO**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*macroLabel*

*macroStmtList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*macroStmt* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *macroStmtList* *macroStmt* ;;<br/>

*macroWhile*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**WHILE** *constExpr* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

*mapType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ALL** | **NONE** | **NOTPUBLIC**

*memOption*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**TINY** | **SMALL** | **MEDIUM** | **COMPACT** | **LARGE** | **HUGE** | **FLAT**

*mnemonic*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;Instruction name.

*modelDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.MODEL**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*memOption* ⟦ , *modelOptlist* ⟧ ;;

*modelOpt*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*langType* | *stackOption*

*modelOptlist*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*modelOpt* | *modelOptlist* , *modelOpt*

*module*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *directiveList* ⟧ *endDir*

*mulOp*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\* | / | **MOD**

*nameDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**NAME**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* ;;<br/>

*nearfar*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**NEAR** | **FAR**

*nestedStruct*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*structHdr* ⟦ *id* ⟧ ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*structBody*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ENDS** ;;<br/>

*offsetDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*offsetDirType* ;;

*offsetDirType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**EVEN** | **ORG** *immExpr* | **ALIGN** ⟦ *constExpr* ⟧

*offsetType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**GROUP** | **SEGMENT** | **FLAT**

*oldRecordFieldList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *constExpr* ⟧ | *oldRecordFieldList* , ⟦ *constExpr* ⟧

*optionDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**OPTION** *optionList* ;;

*optionItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**CASEMAP** : *mapType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **DOTNAME** | **NODOTNAME**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **EMULATOR** | **NOEMULATOR**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **EPILOGUE** : *macroId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **EXPR16** | **EXPR32**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **LANGUAGE** : *langType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **LJMP**
| **NOLJMP**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **M510** | **NOM510**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **NOKEYWORD** : < *keywordList* ><br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **NOSIGNEXTEND**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **OFFSET** : *offsetType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **OLDMACROS** | **NOOLDMACROS**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **OLDSTRUCTS** | **NOOLDSTRUCTS**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **PROC** : *oVisibility*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **PROLOGUE** : *macroId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **READONLY** | **NOREADONLY**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **SCOPED** | **NOSCOPED**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **SEGMENT** : *segSize*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **SETIF2** : bool

*optionList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*optionItem* | *optionList* , ⟦ ;; ⟧ *optionItem*

*optText*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;, *textItem*

*orOp*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**OR** | **XOR**

*oVisibility*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**PUBLIC** | **PRIVATE** | **EXPORT**

*pageDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**PAGE** ⟦ *pageExpr* ⟧ ;;

*pageExpr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;\+ | ⟦ *pageLength* ⟧ ⟦ , *pageWidth* ⟧

*pageLength*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*pageWidth*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*parm*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parmId* ⟦ : *qualifiedType* ⟧ | *parmId* ⟦ *constExpr* ⟧ ⟦ : *qualifiedType* ⟧

*parmId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*parmList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*parm* | *parmList* , ⟦ ;; ⟧ *parm*

*parmType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**REQ** | = *textLiteral* | **VARARG**

*pOptions*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *distance* ⟧ ⟦ *langType* ⟧ ⟦ *oVisibility* ⟧

*primary*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*expr* *binaryOp* *expr* | *flagName* | *expr*

*procDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*procId* **PROC**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *pOptions* ⟧ ⟦ < *macroArgList* > ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *usesRegs* ⟧ ⟦ *procParmList* ⟧

*processor*<br/>
 .8086<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| .186<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| .286 | .286C | .286P<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| .386 | .386C | .386P<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| .486 | .486P

*processorDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*processor* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *coprocessor* ;;

*procId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*procItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*instrPrefix* | *dataDir* | *labelDir* | *offsetDir* | *generalDir*

*procParmList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ , ⟦ ;; ⟧ *parmList* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ , ⟦ ;; ⟧ *parmId* :VARARG⟧

*protoArg*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *id* ⟧ : *qualifiedType*

*protoArgList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ , ⟦ ;; ⟧ *protoList* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ , ⟦ ;; ⟧ ⟦ *id* ⟧ :VARARG ⟧

*protoList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*protoArg*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *protoList* , ⟦ ;; ⟧ *protoArg*

*protoSpec*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *distance* ⟧ ⟦ *langType* ⟧ ⟦ *protoArgList* ⟧ | *typeId*

*protoTypeDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* **PROTO** *protoSpec*

*pubDef*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *langType* ⟧ *id*

*publicDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**PUBLIC** *pubList* ;;

*pubList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*pubDef* | *pubList* , ⟦ ;; ⟧ *pubDef*

*purgeDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**PURGE** *macroIdList*

*qualifiedType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*type* | ⟦ *distance* ⟧ **PTR** ⟦ *qualifiedType* ⟧

*qualifier*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*qualifiedType* | **PROTO** *protoSpec*

*quote*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;“ | ‘

*qwordRegister*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;RAX | RCX | RDX | RBX | RDI | RSI | RBP | R8 | R9 | R10 | R11 | R12 | R13 | R14 | R15

*radixDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.RADIX** *constExpr* ;;

*radixOverride*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;h | o | q | t | y | H | O | Q | T | Y

*recordConst*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*recordTag* { *oldRecordFieldList* } | *recordTag* < *oldRecordFieldList* >

*recordDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*recordTag* **RECORD** *bitDefList* ;;

*recordFieldList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *constExpr* ⟧ | *recordFieldList* , ⟦ ;; ⟧ ⟦ *constExpr* ⟧

*recordInstance*<br/>
 { ⟦ ;; ⟧ *recordFieldList* ⟦ ;; ⟧ }<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| < *oldRecordFieldList* ><br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *constExpr* **DUP** ( *recordInstance* )

*recordInstList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*recordInstance* | *recordInstList* , ⟦ ;; ⟧ *recordInstance*

*recordTag*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*register*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*specialRegister* | *gpRegister* | *byteRegister* | *qwordRegister* |  *fpuRegister* | *SIMDRegister* | *segmentRegister*

*regList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*register* | *regList* *register*

*relOp*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;EQ | NE | LT | LE | GT | GE

*repeatBlock*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.REPEAT** ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*blockStatements* ;;
untilDir ;;

*repeatDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**REPEAT** | **REPT**

*scalarInstList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*initValue* | *scalarInstList* , ⟦ ;; ⟧ *initValue*

*segAlign*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**BYTE** | **WORD** | **DWORD** | **PARA** | **PAGE**

*segAttrib*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**PUBLIC** | **STACK** | **COMMON** | **MEMORY** | **AT** *constExpr* | **PRIVATE**

*segDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.CODE**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *segId* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.DATA**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;|  **.DATA?**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.CONST**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.FARDATA**⟦ *segId* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;|  **.FARDATA?** ⟦ *segId* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **.STACK** ⟦ *constExpr* ⟧

*segId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*segIdList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*segId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *segIdList* , *segId*

*segmentDef*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*segmentDir* ⟦ *inSegDirList* ⟧ *endsDir* | *simpleSegDir* ⟦ *inSegDirList* ⟧ ⟦ *endsDir* ⟧

*segmentDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*segId* **SEGMENT** ⟦ *segOptionList* ⟧ ;;

*segmentRegister*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**CS** | **DS** | **ES** | **FS** | **GS** | **SS**

*segOption*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*segAlign*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *segRO*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *segAttrib*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *segSize*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *className*

*segOptionList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*segOption* | *segOptionList* *segOption*

*segOrderDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.ALPHA** | **.SEQ** | **.DOSSEG** | **DOSSEG**

*segRO*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**READONLY**

*segSize*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**USE16** | **USE32** | **FLAT**

*shiftOp*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**SHR** | **SHL**

*sign*<br/>
 - | +

*simdRegister*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;MM0 | MM1 | MM2 | MM3 | MM4 | MM5 | MM6 | MM7 | xmmRegister | YMM0 | YMM1 | YMM2 | YMM3 | YMM4 | YMM5 | YMM6 | YMM7 | YMM8 | YMM9 | YMM10 | YMM11 | YMM12 | YMM13 | YMM14 | YMM15

*simpleExpr*<br/>
 ( *cExpr* ) | *primary*

*simpleSegDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*segDir* ;;

*sizeArg*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* | *type* | *e10*

*specialChars*<br/>
 : | . | ⟦ | ⟧ | ( | ) | < | > | { | }<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| + | - | / | * | & | % | !<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| ’ | \ | = | ; | , | “<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *whiteSpaceCharacter*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *endOfLine*

*specialRegister*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;CR0 | CR2 | CR3 | DR0 | DR1 | DR2 | DR3 | DR6 | DR7 | TR3 | TR4 | TR5 | TR6 | TR7

*stackOption*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**NEARSTACK** | **FARSTACK**

*startupDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.STARTUP** ;;

*stext*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*stringChar* | *stext* *stringChar*

*string*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*quote* ⟦ *stext* ⟧ *quote*

*stringChar*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*quote* *quote* | Any character except quote.

*structBody*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*structItem* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *structBody* *structItem* ;;

*structDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*structTag* *structHdr* ⟦ *fieldAlign* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;⟦, **NONUNIQUE** ⟧ ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*structBody*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*structTag*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**ENDS** ;;

*structHdr*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**STRUC** | **STRUCT** | **UNION**

*structInstance*<br/>
 < ⟦ *fieldInitList* ⟧ ><br/>
&nbsp;&nbsp;&nbsp;&nbsp;| { ⟦ ;; ⟧ ⟦ *fieldInitList* ⟧ ⟦ ;; ⟧ }<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *constExpr* **DUP** ( *structInstList* )<br/>

*structInstList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*structInstance* | *structInstList* , ⟦ ;; ⟧ *structInstance*

*structItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*dataDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *generalDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *offsetDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *nestedStruct*

*structTag*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*term*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*simpleExpr* | ! *simpleExpr*

*text*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*textLiteral* | *text* character | ! *character* *text* | *character* | !*character*

*textDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id* *textMacroDir* ;;

*textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*textLiteral* | *textMacroId* | % *constExpr*

*textLen*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*textList*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*textItem* | *textList* , ⟦ ;; ⟧ *textItem*

*textLiteral*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;< *text* >;;

*textMacroDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**CATSTR** ⟦ *textList* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **TEXTEQU** ⟦ *textList* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **SIZESTR** *textItem*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **SUBSTR** *textItem* , *textStart* ⟦ , *textLen* ⟧<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| **INSTR** ⟦ *textStart* , ⟧ *textItem* , *textItem*

*textMacroId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*textStart*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

*titleDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*titleType* *arbitraryText* ;;

*titleType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**TITLE** | **SUBTITLE** | **SUBTTL**

*type*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*structTag*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *unionTag*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *recordTag*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *distance*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *dataType*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;| *typeId*

*typedefDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*typeId* **TYPEDEF** qualifier

*typeId*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*unionTag*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*id*

*untilDir*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.UNTIL**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cExpr* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.UNTILCXZ** ⟦ *cxzExpr* ⟧ ;;

*usesRegs*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**USES** *regList*

*whileBlock*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.WHILE**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*cExpr* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*blockStatements* ;;<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**.ENDW**

*whiteSpaceCharacter*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;ASCII 8, 9, 11–13, 26, 32

*xmmRegister*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;XMM0 | XMM1 | XMM2 | XMM3 | XMM4 | XMM5 | XMM6 | XMM7 | XMM8 | XMM9 | XMM10 | XMM11 | XMM12 | XMM13 | XMM14 | XMM15<br/>
[MASM BNF Grammar](masm-bnf-grammar.md)
