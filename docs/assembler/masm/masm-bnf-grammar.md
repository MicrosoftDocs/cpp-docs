---
title: "Microsoft Macro Assembler BNF Grammar"
description: "BNF description of MASM for x64."
ms.date: 04/15/2021
helpviewer_keywords: ["MASM (Microsoft Macro Assembler), BNF reference"]
---
# Microsoft Macro Assembler BNF Grammar

This page contains a BNF description of the MASM grammar. It's provided as a supplement to the reference and isn't guaranteed to be complete. Consult the reference for full information on keywords, parameters, operations, and so on.

To illustrate the use of the BNF, the following diagram shows the definition of the **`TYPEDEF`** directive, starting with the nonterminal *`typedefDir`*.

![A chart showing the hierarchy of terminals and nonterminals that produce a typedefDir.](media/bnf.png)

The entries under each horizontal brace are terminals, such as **`NEAR16`**, **`NEAR32`**, **`FAR16`**, and **`FAR32`**. Or, they're nonterminals such as *`qualifier`*, *`qualifiedType`*, *`distance`*, and *`protoSpec`* that can be further defined. Each italicized nonterminal in the *`typedefDir`* definition is also an entry in the BNF. Three vertical dots indicate a branching definition for a nonterminal that, for the sake of simplicity, this figure doesn't illustrate.

The BNF grammar allows recursive definitions. For example, the grammar uses *`qualifiedType`* as a possible definition for *`qualifiedType`*, which is also a component of the definition for *`qualifier`*. The "&vert;" symbol specifies a choice between alternate expressions, for example *`endOfLine`* &vert; *`comment`*. Double braces specify an optional parameter, for example ⟦ *`macroParmList`* ⟧. The brackets don't actually appear in the source code.

## MASM Nonterminals

*`;;`*\
&emsp; *`endOfLine`* &vert; *`comment`*

*`=Dir`*\
&emsp; *`id`* **`=`** *`immExpr`* *`;;`*

*`addOp`*\
&emsp; **`+`** &vert; **`-`**

*`aExpr`*\
&emsp; *`term`* &vert; *`aExpr`* **`&&`** *`term`*

*`altId`*\
&emsp; *`id`*

*`alpha`*\
&emsp; Any upper or lowercase letter (A-Z) or one of these four characters: `@ _ $ ?`

*`arbitraryText`*\
&emsp; *`charList`*

*`asmInstruction`*\
&emsp; *`mnemonic`* ⟦ *`exprList`* ⟧

*`assumeDir`*\
&emsp; **`ASSUME`** *`assumeList`* *`;;`*\
&emsp; &vert; **`ASSUME NOTHING`** *`;;`*

*`assumeList`*\
&emsp; *`assumeRegister`* &vert; *`assumeList`* **`,`** *`assumeRegister`*

*`assumeReg`*\
&emsp; *`register`* **`:`** *`assumeVal`*

*`assumeRegister`*\
&emsp; *`assumeSegReg`* &vert; *`assumeReg`*

*`assumeSegReg`*\
&emsp; *`segmentRegister`* **`:`** *`assumeSegVal`*

*`assumeSegVal`*\
&emsp; *`frameExpr`* &vert; **`NOTHING`** &vert; **`ERROR`**

*`assumeVal`*\
&emsp; *`qualifiedType`* &vert; **`NOTHING`** &vert; **`ERROR`**

*`bcdConst`*\
&emsp; ⟦ *`sign`* ⟧ *`decNumber`*

*`binaryOp`*\
&emsp; **`==`** &vert; **`!=`** &vert; **`>=`** &vert; **`<=`** &vert; **`>`** &vert; **`<`** &vert; **`&`**

*`bitDef`*\
&emsp; *`bitFieldId`* **`:`** *`bitFieldSize`* ⟦ **`=`** *`constExpr`* ⟧

*`bitDefList`*\
&emsp; *`bitDef`* &vert; *`bitDefList`* **`,`** ⟦ *`;;`* ⟧ *`bitDef`*

*`bitFieldId`*\
&emsp; *`id`*

*`bitFieldSize`*\
&emsp; *`constExpr`*

*`blockStatements`*\
&emsp; *`directiveList`*\
&emsp; &vert; **`.CONTINUE`** ⟦ **`.IF`** *`cExpr`* ⟧\
&emsp; &vert; **`.BREAK`** ⟦ **`.IF`** *`cExpr`* ⟧

*`bool`*\
&emsp; **`TRUE`** &vert; **`FALSE`**

*`byteRegister`*\
&emsp; **`AL`** &vert; **`AH`** &vert; **`CL`** &vert; **`CH`** &vert; **`DL`** &vert; **`DH`** &vert; **`BL`** &vert; **`BH`** &vert; **`R8B`** &vert; **`R9B`** &vert; **`R10B`** &vert; **`R11B`** &vert; **`R12B`** &vert; **`R13B`** &vert; **`R14B`** &vert; **`R15B`**

*`cExpr`*\
&emsp; *`aExpr`* &vert; *`cExpr`* **`||`** *`aExpr`*

*`character`*\
&emsp; Any character with ordinal in the range 0–255 except linefeed (10).

*`charList`*\
&emsp; *`character`* &vert; *`charList`* *`character`*

*`className`*\
&emsp; *`string`*

*`commDecl`*\
&emsp; ⟦ *`nearfar`* ⟧ ⟦ *`langType`* ⟧ *`id`* **`:`** *`commType`*\
&emsp; ⟦ **`:`** *`constExpr`* ⟧

*`commDir`*\
&emsp; **`COMM`**\
&emsp; *`commList`* *`;;`*

*`comment`*\
&emsp; **`;`** *`text`* *`;;`*

*`commentDir`*\
&emsp; **`COMMENT`** *`delimiter`*\
&emsp; *`text`*\
&emsp; *`text`* *`delimiter`* *`text`* *`;;`*

*`commList`*\
&emsp; *`commDecl`* &vert; *`commList`* **`,`** *`commDecl`*

*`commType`*\
&emsp; *`type`* &vert; *`constExpr`*

*`constant`*\
&emsp; *`digits`* ⟦ *`radixOverride`* ⟧

*`constExpr`*\
&emsp; *`expr`*

*`contextDir`*\
&emsp; **`PUSHCONTEXT`** *`contextItemList`* *`;;`*\
&emsp; &vert; **`POPCONTEXT`** *`contextItemList`* *`;;`*

*`contextItem`*\
&emsp; **`ASSUMES`** &vert; **`RADIX`** &vert; **`LISTING`** &vert; **`CPU`** &vert; **`ALL`**

*`contextItemList`*\
&emsp; *`contextItem`* &vert; *`contextItemList`* **`,`** *`contextItem`*

*`controlBlock`*\
&emsp; *`whileBlock`* &vert; *`repeatBlock`*

*`controlDir`*\
&emsp; *`controlIf`* &vert; *`controlBlock`*

*`controlElseif`*\
&emsp; **`.ELSEIF`** *`cExpr`* *`;;`*\
&emsp; *`directiveList`* \
&emsp; ⟦ *`controlElseif`* ⟧

*`controlIf`*\
&emsp; **`.IF`** *`cExpr`* *`;;`*\
&emsp; *`directiveList`*\
&emsp; ⟦ *`controlElseif`* ⟧\
&emsp; ⟦ **`.ELSE`** *`;;`*\
&emsp; *`directiveList`*⟧\
&emsp; **`.ENDIF`** *`;;`*

*`coprocessor`*\
&emsp; **`.8087`** &vert; **`.287`** &vert; **`.387`** &vert; **`.NO87`**

*`crefDir`*\
&emsp; *`crefOption`* *`;;`*

*`crefOption`*\
&emsp; **`.CREF`**\
&emsp; &vert; **`.XCREF`** ⟦ *`idList`* ⟧\
&emsp; &vert; **`.NOCREF`** ⟦ *`idList`* ⟧

*`cxzExpr`*\
&emsp; *`expr`*\
&emsp; &vert; **`!`** *`expr`*\
&emsp; &vert; *`expr`* **`==`** *`expr`*\
&emsp; &vert; *`expr`* **`!=`** *`expr`*

*`dataDecl`*\
&emsp; **`DB`** &vert; **`DW`** &vert; **`DD`** &vert; **`DF`** &vert; **`DQ`** &vert; **`DT`** &vert; *`dataType`* &vert; *`typeId`*

*`dataDir`*\
&emsp; ⟦ *`id`* ⟧ *`dataItem`* *`;;`*

*`dataItem`*\
&emsp; *`dataDecl`* *`scalarInstList`*\
&emsp; &vert; *`structTag`* *`structInstList`*\
&emsp; &vert; *`typeId`* *`structInstList`*\
&emsp; &vert; *`unionTag`* *`structInstList`*\
&emsp; &vert; *`recordTag`* *`recordInstList`*

*`dataType`*\
&emsp; **`BYTE`** &vert; **`SBYTE`** &vert; **`WORD`** &vert; **`SWORD`** &vert; **`DWORD`** &vert; **`SDWORD`** &vert; **`FWORD`** &vert; **`QWORD`** &vert; **`SQWORD`** &vert; **`TBYTE`** &vert; **`OWORD`** &vert; **`REAL4`** &vert; **`REAL8`** &vert; **`REAL10`** &vert; **`MMWORD`** &vert; **`XMMWORD`** &vert; **`YMMWORD`**

*`decdigit`*\
&emsp; **`0`** &vert; **`1`** &vert; **`2`** &vert; **`3`** &vert; **`4`** &vert; **`5`** &vert; **`6`** &vert; **`7`** &vert; **`8`** &vert; **`9`**

*`decNumber`*\
&emsp; *`decdigit`*\
&emsp; &vert; *`decNumber`* *`decdigit`*

*`delimiter`*\
&emsp; Any character except *`whiteSpaceCharacter`*

*`digits`*\
&emsp; *`decdigit`*\
&emsp; &vert; *`digits`* *`decdigit`*\
&emsp; &vert; *`digits`* *`hexdigit`*

*`directive`*\
&emsp; *`generalDir`* &vert; *`segmentDef`*

*`directiveList`*\
&emsp; *`directive`* &vert; *`directiveList`* *`directive`*

*`distance`*\
&emsp; *`nearfar`* &vert; **`NEAR16`** &vert; **`NEAR32`** &vert; **`FAR16`** &vert; **`FAR32`**

*`e01`*\
&emsp; *`e01`* *`orOp`* *`e02`* &vert; *`e02`*

*`e02`*\
&emsp; *`e02`* **`AND`** *`e03`* &vert; *`e03`*

*`e03`*\
&emsp; **`NOT`** *`e04`* &vert; *`e04`*

*`e04`*\
&emsp; *`e04`* *`relOp`* *`e05`* &vert; *`e05`*

*`e05`*\
&emsp; *`e05`* *`addOp`* *`e06`* &vert; *`e06`*

*`e06`*\
&emsp; *`e06`* *`mulOp`* *`e07`* &vert; *`e06`* *`shiftOp`* *`e07`* &vert; *`e07`*

*`e07`*\
&emsp; *`e07`* *`addOp`* *`e08`* &vert; *`e08`*

*`e08`*\
&emsp; **`HIGH`** *`e09`*\
&emsp; &vert; **`LOW`** *`e09`*\
&emsp; &vert; **`HIGHWORD`** *`e09`*\
&emsp; &vert; **`LOWWORD`** *`e09`*\
&emsp; &vert; *`e09`*

*`e09`*\
&emsp; **`OFFSET`** *`e10`*\
&emsp; &vert; **`SEG`** *`e10`*\
&emsp; &vert; **`LROFFSET`** *`e10`*\
&emsp; &vert; **`TYPE`** *`e10`*\
&emsp; &vert; **`THIS`** *`e10`*\
&emsp; &vert; *`e09`* **`PTR`** *`e10`*\
&emsp; &vert; *`e09`* **`:`** *`e10`*\
&emsp; &vert; *`e10`*

*`e10`*\
&emsp; *`e10`* **`.`** *`e11`*\
&emsp; &vert; *`e10`* ⟦ *`expr`* ⟧\
&emsp; &vert; *`e11`*

*`e11`*\
&emsp; **`(`** *`expr`* **`)`**\
&emsp; &vert; ⟦ *`expr`* ⟧\
&emsp; &vert; **`WIDTH`** *`id`*\
&emsp; &vert; **`MASK`** *`id`*\
&emsp; &vert; **`SIZE`** *`sizeArg`*\
&emsp; &vert; **`SIZEOF`** *`sizeArg`*\
&emsp; &vert; **`LENGTH`** *`id`*\
&emsp; &vert; **`LENGTHOF`** *`id`*\
&emsp; &vert; *`recordConst`*\
&emsp; &vert; *`string`*\
&emsp; &vert; *`constant`*\
&emsp; &vert; *`type`*\
&emsp; &vert; *`id`*\
&emsp; &vert; **`$`**\
&emsp; &vert; *`segmentRegister`*\
&emsp; &vert; *`register`*\
&emsp; &vert; **`ST`**\
&emsp; &vert; **`ST`** **`(`** *`expr`* **`)`**

*`echoDir`*\
&emsp; **`ECHO`** *`arbitraryText`* *`;;`*\
&emsp; **`%OUT`** *`arbitraryText`* *`;;`*

*`elseifBlock`*\
&emsp; *`elseifStatement`* *`;;`*\
&emsp; *`directiveList`*\
&emsp; ⟦ *`elseifBlock`* ⟧

*`elseifStatement`*\
&emsp; **`ELSEIF`** *`constExpr`*\
&emsp; &vert; **`ELSEIFE`** *`constExpr`*\
&emsp; &vert; **`ELSEIFB`** *`textItem`*\
&emsp; &vert; **`ELSEIFNB`** *`textItem`*\
&emsp; &vert; **`ELSEIFDEF`** *`id`*\
&emsp; &vert; **`ELSEIFNDEF`** *`id`*\
&emsp; &vert; **`ELSEIFDIF`** *`textItem`* **`,`** *`textItem`*\
&emsp; &vert; **`ELSEIFDIFI`** *`textItem`* **`,`** *`textItem`*\
&emsp; &vert; **`ELSEIFIDN`** *`textItem`* **`,`** *`textItem`*\
&emsp; &vert; **`ELSEIFIDNI`** *`textItem`* **`,`** *`textItem`*\
&emsp; &vert; **`ELSEIF1`**\
&emsp; &vert; **`ELSEIF2`**

*`endDir`*\
&emsp; **`END`** ⟦ *`immExpr`* ⟧ *`;;`*

*`endpDir`*\
&emsp; *`procId`* **`ENDP`** *`;;`*

*`endsDir`*\
&emsp; *`id`* **`ENDS`** *`;;`*

*`equDir`*\
&emsp; *`textMacroId`* **`EQU`** *`equType`* *`;;`*

*`equType`*\
&emsp; *`immExpr`* &vert; *`textLiteral`*

*`errorDir`*\
&emsp; *`errorOpt`* *`;;`*

*`errorOpt`*\
&emsp; **`.ERR`** ⟦ *`textItem`* ⟧\
&emsp; &vert; **`.ERRE`** *`constExpr`* ⟦ *`optText`* ⟧\
&emsp; &vert; **`.ERRNZ`** *`constExpr`* ⟦ *`optText`* ⟧\
&emsp; &vert; **`.ERRB`** *`textItem`* ⟦ *`optText`* ⟧\
&emsp; &vert; **`.ERRNB`** *`textItem`* ⟦ *`optText`* ⟧\
&emsp; &vert; **`.ERRDEF`** *`id`* ⟦ *`optText`* ⟧\
&emsp; &vert; **`.ERRNDEF`** *`id`* ⟦ *`optText`* ⟧\
&emsp; &vert; **`.ERRDIF`** *`textItem`* **`,`** *`textItem`* ⟦ *`optText`* ⟧\
&emsp; &vert; **`.ERRDIFI`** *`textItem`* **`,`** *`textItem`* ⟦ *`optText`* ⟧\
&emsp; &vert; **`.ERRIDN`** *`textItem`* **`,`** *`textItem`* ⟦ *`optText`* ⟧\
&emsp; &vert; **`.ERRIDNI`** *`textItem`* **`,`** *`textItem`* ⟦ *`optText`* ⟧\
&emsp; &vert; **`.ERR1`** ⟦ *`textItem`* ⟧\
&emsp; &vert; **`.ERR2`** ⟦ *`textItem`* ⟧

*`exitDir`*\
&emsp; **`.EXIT`** ⟦ *`expr`* ⟧ *`;;`*

*`exitmDir`*\
&emsp; **`:`** **`EXITM`** &vert; **`EXITM`** *`textItem`*

*`exponent`*\
&emsp; **`E`** ⟦ *`sign`* ⟧ *`decNumber`*

*`expr`*\
&emsp; **`SHORT`** *`e05`*\
&emsp; &vert; **`.TYPE`** *`e01`*\
&emsp; &vert; **`OPATTR`** *`e01`*\
&emsp; &vert; *`e01`*

*`exprList`*\
&emsp; *`expr`* &vert; *`exprList`* **`,`** *`expr`*

*`externDef`*\
&emsp; ⟦ *`langType`* ⟧ *`id`* ⟦ **`(`** *`altId`* **`)`** ⟧ **`:`** *`externType`*

*`externDir`*\
&emsp; *`externKey`* *`externList`* *`;;`*

*`externKey`*\
&emsp; **`EXTRN`** &vert; **`EXTERN`** &vert; **`EXTERNDEF`**

*`externList`*\
&emsp; *`externDef`* &vert; *`externList`* **`,`** ⟦ *`;;`* ⟧ *`externDef`*

*`externType`*\
&emsp; **`ABS`** &vert; *`qualifiedType`*

*`fieldAlign`*\
&emsp; *`constExpr`*

*`fieldInit`*\
&emsp; ⟦ *`initValue`* ⟧ &vert; *`structInstance`*

*`fieldInitList`*\
&emsp; *`fieldInit`* &vert; *`fieldInitList`* **`,`** ⟦ *`;;`* ⟧ *`fieldInit`*

*`fileChar`*\
&emsp; *`delimiter`*

*`fileCharList`*\
&emsp; *`fileChar`* &vert; *`fileCharList`* *`fileChar`*

*`fileSpec`*\
&emsp; *`fileCharList`* &vert; *`textLiteral`*

*`flagName`*\
&emsp; **`ZERO?`** &vert; **`CARRY?`** &vert; **`OVERFLOW?`** &vert; **`SIGN?`** &vert; **`PARITY?`**

*`floatNumber`*\
&emsp; ⟦ *`sign`* ⟧ *`decNumber`* **`.`** ⟦ *`decNumber`* ⟧ ⟦ *`exponent`* ⟧\
&emsp; &vert; *`digits`* **`R`**\
&emsp; &vert; *`digits`* **`r`**

*`forcDir`*\
&emsp; **`FORC`** &vert; **`IRPC`**

*`forDir`*\
&emsp; **`FOR`** &vert; **`IRP`**

*`forParm`*\
&emsp; *`id`* ⟦ **`:`** *`forParmType`* ⟧

*`forParmType`*\
&emsp; **`REQ`** &vert; **`=`** *`textLiteral`*

*`fpuRegister`*\
&emsp; **`ST`** *`expr`*

*`frameExpr`*\
&emsp; **`SEG`** *`id`*\
&emsp; &vert; **`DGROUP`** **`:`** *`id`*\
&emsp; &vert; *`segmentRegister`* **`:`** *`id`*\
&emsp; &vert; *`id`*

*`generalDir`*\
&emsp; *`modelDir`* &vert; *`segOrderDir`* &vert; *`nameDir`*\
&emsp; &vert; *`includeLibDir`* &vert; *`commentDir`*\
&emsp; &vert; *`groupDir`* &vert; *`assumeDir`*\
&emsp; &vert; *`structDir`* &vert; *`recordDir`* &vert; *`typedefDir`*\
&emsp; &vert; *`externDir`* &vert; *`publicDir`* &vert; *`commDir`* &vert; *`protoTypeDir`*\
&emsp; &vert; *`equDir`* &vert; *`=Dir`* &vert; *`textDir`*\
&emsp; &vert; *`contextDir`* &vert; *`optionDir`* &vert; *`processorDir`*\
&emsp; &vert; *`radixDir`*\
&emsp; &vert; *`titleDir`* &vert; *`pageDir`* &vert; *`listDir`*\
&emsp; &vert; *`crefDir`* &vert; *`echoDir`*\
&emsp; &vert; *`ifDir`* &vert; *`errorDir`* &vert; *`includeDir`*\
&emsp; &vert; *`macroDir`* &vert; *`macroCall`* &vert; *`macroRepeat`* &vert; *`purgeDir`*\
&emsp; &vert; *`macroWhile`* &vert; *`macroFor`* &vert; *`macroForc`*\
&emsp; &vert; *`aliasDir`*

*`gpRegister`*\
&emsp; **`AX`** &vert; **`EAX`** &vert; **`CX`** &vert; **`ECX`** &vert; **`DX`** &vert; **`EDX`** &vert; **`BX`** &vert; **`EBX`**\
&emsp; &vert; **`DI`** &vert; **`EDI`** &vert; **`SI`** &vert; **`ESI`** &vert; **`BP`** &vert; **`EBP`** &vert; **`SP`** &vert; **`ESP`**\
&emsp; &vert; **`R8W`** &vert; **`R8D`** &vert; **`R9W`** &vert; **`R9D`** &vert; **`R12D`** &vert; **`R13W`** &vert; **`R13D`** &vert; **`R14W`** &vert; **`R14D`**

*`groupDir`*\
&emsp; *`groupId`* **`GROUP`** *`segIdList`*

*`groupId`*\
&emsp; *`id`*

*`hexdigit`*\
&emsp; **`a`** &vert; **`b`** &vert; **`c`** &vert; **`d`** &vert; **`e`** &vert; **`f`**\
&emsp; &vert; **`A`** &vert; **`B`** &vert; **`C`** &vert; **`D`** &vert; **`E`** &vert; **`F`**

*`id`*\
&emsp; *`alpha`*\
&emsp; &vert; *`id`* *`alpha`*\
&emsp; &vert; *`id`* *`decdigit`*\
&emsp; Maximum length is 247 characters.

*`idList`*\
&emsp; *`id`* &vert; *`idList`* **`,`** *`id`*

*`ifDir`*\
&emsp; *`ifStatement`* *`;;`*\
&emsp; *`directiveList`*\
&emsp; ⟦ *`elseifBlock`* ⟧\
&emsp; ⟦ **`ELSE`** *`;;`* \
&emsp; *`directiveList`* ⟧ *`;;`*

*`ifStatement`*\
&emsp; **`IF`** *`constExpr`*\
&emsp; &vert; **`IFE`** *`constExpr`*\
&emsp; &vert; **`IFB`** *`textItem`*\
&emsp; &vert; **`IFNB`** *`textItem`*\
&emsp; &vert; **`IFDEF`** *`id`*\
&emsp; &vert; **`IFNDEF`** *`id`*\
&emsp; &vert; **`IFDIF`** *`textItem`* **`,`** *`textItem`*\
&emsp; &vert; **`IFDIFI`** *`textItem`* **`,`** *`textItem`*\
&emsp; &vert; **`IFIDN`** *`textItem`* **`,`** *`textItem`*\
&emsp; &vert; **`IFIDNI`** *`textItem`* **`,`** *`textItem`*\
&emsp; &vert; **`IF1`**\
&emsp; &vert; **`IF2`**

*`immExpr`*\
&emsp; *`expr`*

*`includeDir`*\
&emsp; **`INCLUDE`** *`fileSpec`* *`;;`*

*`includeLibDir`*\
&emsp; **`INCLUDELIB`** *`fileSpec`* *`;;`*

*`initValue`*\
&emsp; *`immExpr`*\
&emsp; &vert; *`string`*\
&emsp; &vert; **`?`**\
&emsp; &vert; *`constExpr`* **`DUP`** **`(`** *`scalarInstList`* **`)`**\
&emsp; &vert; *`floatNumber`*\
&emsp; &vert; *`bcdConst`*

*`inSegDir`*\
&emsp; ⟦ *`labelDef`* ⟧ *`inSegmentDir`*

*`inSegDirList`*\
&emsp; *`inSegDir`* &vert; *`inSegDirList`* *`inSegDir`*

*`inSegmentDir`*\
&emsp; *`instruction`*\
&emsp; &vert; *`dataDir`*\
&emsp; &vert; *`controlDir`*\
&emsp; &vert; *`startupDir`*\
&emsp; &vert; *`exitDir`*\
&emsp; &vert; *`offsetDir`*\
&emsp; &vert; *`labelDir`*\
&emsp; &vert; *`procDir`* ⟦ *`localDirList`* ⟧ ⟦ *`inSegDirList`* ⟧ *`endpDir`*\
&emsp; &vert; *`invokeDir`*\
&emsp; &vert; *`generalDir`*

*`instrPrefix`*\
&emsp; **`REP`** &vert; **`REPE`** &vert; **`REPZ`** &vert; **`REPNE`** &vert; **`REPNZ`** &vert; **`LOCK`**

*`instruction`*\
&emsp; ⟦ *`instrPrefix`* ⟧ *`asmInstruction`*

*`invokeArg`*\
&emsp; *`register`* **`::`** *`register`*\
&emsp; &vert; *`expr`*\
&emsp; &vert; **`ADDR`** *`expr`*

*`invokeDir`*\
&emsp; **`INVOKE`** *`expr`* ⟦ **`,`** ⟦ *`;;`* ⟧ *`invokeList`* ⟧ *`;;`*

*`invokeList`*\
&emsp; *`invokeArg`* &vert; *`invokeList`* **`,`** ⟦ *`;;`* ⟧ *`invokeArg`*

*`keyword`*\
&emsp; Any reserved word.

*`keywordList`*\
&emsp; *`keyword`* &vert; *`keyword`* *`keywordList`*

*`labelDef`*\
&emsp; *`id`* **`:`** &vert; *`id`* **`::`** &vert; **`@@:`**

*`labelDir`*\
&emsp; *`id`* **`LABEL`** *`qualifiedType`* *`;;`*

*`langType`*\
&emsp; **`C`** &vert; **`PASCAL`** &vert; **`FORTRAN`** &vert; **`BASIC`** &vert; **`SYSCALL`** &vert; **`STDCALL`**

*`listDir`*\
&emsp; *`listOption`* *`;;`*

*`listOption`*\
&emsp; **`.LIST`**\
&emsp; &vert; **`.NOLIST`**\
&emsp; &vert; **`.XLIST`**\
&emsp; &vert; **`.LISTALL`**\
&emsp; &vert; **`.LISTIF`**\
&emsp; &vert; **`.LFCOND`**\
&emsp; &vert; **`.NOLISTIF`**\
&emsp; &vert; **`.SFCOND`**\
&emsp; &vert; **`.TFCOND`**\
&emsp; &vert; **`.LISTMACROALL`** &vert; **`.LALL`**\
&emsp; &vert; **`.NOLISTMACRO`** &vert; **`.SALL`**\
&emsp; &vert; **`.LISTMACRO`** &vert; **`.XALL`**

*`localDef`*\
&emsp; **`LOCAL`** *`idList`* *`;;`*

*`localDir`*\
&emsp; **`LOCAL`** *`parmList`* *`;;`*

*`localDirList`*\
&emsp; *`localDir`* &vert; *`localDirList`* *`localDir`*

*`localList`*\
&emsp; *`localDef`* &vert; *`localList`* *`localDef`*

*`macroArg`*\
&emsp; **`%`** *`constExpr`*\
&emsp; &vert; **`%`** *`textMacroId`*\
&emsp; &vert; **`%`** *`macroFuncId`* **`(`** *`macroArgList`* **`)`**\
&emsp; &vert; *`string`*\
&emsp; &vert; *`arbitraryText`*\
&emsp; &vert; **`<`** *`arbitraryText`* **`>`**

*`macroArgList`*\
&emsp; *`macroArg`* &vert; *`macroArgList`* **`,`** *`macroArg`*

*`macroBody`*\
&emsp; ⟦ *`localList`* ⟧ *`macroStmtList`*

*`macroCall`*\
&emsp; *`id`* *`macroArgList`* *`;;`*\
&emsp; &vert; *`id`* **`(`** *`macroArgList`* **`)`**

*`macroDir`*\
&emsp; *`id`* **`MACRO`** ⟦ *`macroParmList`* ⟧ *`;;`*\
&emsp; *`macroBody`*\
&emsp; **`ENDM`** *`;;`*

*`macroFor`*\
&emsp; *`forDir`* *`forParm`* **`,`** **`<`** *`macroArgList`* **`>`** *`;;`*\
&emsp; *`macroBody`*\
&emsp; **`ENDM`** *`;;`*

*`macroForc`*\
&emsp; *`forcDir`* *`id`* **`,`** *`textLiteral`* *`;;`*\
&emsp; *`macroBody`*\
&emsp; **`ENDM`** *`;;`*

*`macroFuncId`*\
&emsp; *`id`*

*`macroId`*\
&emsp; *`macroProcId`* &vert; *`macroFuncId`*

*`macroIdList`*\
&emsp; *`macroId`* &vert; *`macroIdList`* **`,`** *`macroId`*

*`macroLabel`*\
&emsp; *`id`*

*`macroParm`*\
&emsp; *`id`* ⟦ **`:`** *`parmType`* ⟧

*`macroParmList`*\
&emsp; *`macroParm`* &vert; *`macroParmList`* **`,`** ⟦ *`;;`* ⟧ *`macroParm`*

*`macroProcId`*\
&emsp; *`id`*

*`macroRepeat`*\
&emsp; *`repeatDir`* *`constExpr`* *`;;`*\
&emsp; *`macroBody`*\
&emsp; **`ENDM`** *`;;`*

*`macroStmt`*\
&emsp; *`directive`* \
&emsp; &vert; *`exitmDir`*\
&emsp; &vert; **`:`** *`macroLabel`*\
&emsp; &vert; **`GOTO`** *`macroLabel`*

*`macroStmtList`*\
&emsp; *`macroStmt`* *`;;`*\
&emsp; &vert; *`macroStmtList`* *`macroStmt`* *`;;`*

*`macroWhile`*\
&emsp; **`WHILE`** *`constExpr`* *`;;`*\
&emsp; *`macroBody`*\
&emsp; **`ENDM`** *`;;`*

*`mapType`*\
&emsp; **`ALL`** &vert; **`NONE`** &vert; **`NOTPUBLIC`**

*`memOption`*\
&emsp; **`TINY`** &vert; **`SMALL`** &vert; **`MEDIUM`** &vert; **`COMPACT`** &vert; **`LARGE`** &vert; **`HUGE`** &vert; **`FLAT`**

*`mnemonic`*\
&emsp; Instruction name.

*`modelDir`*\
&emsp; **`.MODEL`** *`memOption`* ⟦ **`,`** *`modelOptlist`* ⟧ *`;;`*

*`modelOpt`*\
&emsp; *`langType`* &vert; *`stackOption`*

*`modelOptlist`*\
&emsp; *`modelOpt`* &vert; *`modelOptlist`* **`,`** *`modelOpt`*

*`module`*\
&emsp; ⟦ *`directiveList`* ⟧ *`endDir`*

*`mulOp`*\
&emsp; **`*`** &vert; **`/`** &vert; **`MOD`**

*`nameDir`*\
&emsp; **`NAME`** *`id`* *`;;`*

*`nearfar`*\
&emsp; **`NEAR`** &vert; **`FAR`**

*`nestedStruct`*\
&emsp; *`structHdr`* ⟦ *`id`* ⟧ *`;;`*\
&emsp; *`structBody`*\
&emsp; **`ENDS`** *`;;`*

*`offsetDir`*\
&emsp; *`offsetDirType`* *`;;`*

*`offsetDirType`*\
&emsp; **`EVEN`**\
&emsp; &vert; **`ORG`** *`immExpr`*\
&emsp; &vert; **`ALIGN`** ⟦ *`constExpr`* ⟧

*`offsetType`*\
&emsp; **`GROUP`** &vert; **`SEGMENT`** &vert; **`FLAT`**

*`oldRecordFieldList`*\
&emsp; ⟦ *`constExpr`* ⟧ &vert; *`oldRecordFieldList`* **`,`** ⟦ *`constExpr`* ⟧

*`optionDir`*\
&emsp; **`OPTION`** *`optionList`* *`;;`*

*`optionItem`*\
&emsp; **`CASEMAP`** **`:`** *`mapType`*\
&emsp; &vert; **`DOTNAME`** &vert; **`NODOTNAME`**\
&emsp; &vert; **`EMULATOR`** &vert; **`NOEMULATOR`**\
&emsp; &vert; **`EPILOGUE`** **`:`** *`macroId`*\
&emsp; &vert; **`EXPR16`** &vert; **`EXPR32`**\
&emsp; &vert; **`LANGUAGE`** **`:`** *`langType`*\
&emsp; &vert; **`LJMP`** &vert; **`NOLJMP`**\
&emsp; &vert; **`M510`** &vert; **`NOM510`**\
&emsp; &vert; **`NOKEYWORD`** **`:`** **`<`** *`keywordList`* **`>`**\
&emsp; &vert; **`NOSIGNEXTEND`**\
&emsp; &vert; **`OFFSET`** **`:`** *`offsetType`*\
&emsp; &vert; **`OLDMACROS`** &vert; **`NOOLDMACROS`**\
&emsp; &vert; **`OLDSTRUCTS`** &vert; **`NOOLDSTRUCTS`**\
&emsp; &vert; **`PROC`** **`:`** *`oVisibility`*\
&emsp; &vert; **`PROLOGUE`** **`:`** *`macroId`*\
&emsp; &vert; **`READONLY`** &vert; **`NOREADONLY`**\
&emsp; &vert; **`SCOPED`** &vert; **`NOSCOPED`**\
&emsp; &vert; **`SEGMENT`** **`:`** *`segSize`*\
&emsp; &vert; **`SETIF2`** **`:`** *`bool`*

*`optionList`*\
&emsp; *`optionItem`* &vert; *`optionList`* **`,`** ⟦ *`;;`* ⟧ *`optionItem`*

*`optText`*\
&emsp; **`,`** *`textItem`*

*`orOp`*\
&emsp; **`OR`** &vert; **`XOR`**

*`oVisibility`*\
&emsp; **`PUBLIC`** &vert; **`PRIVATE`** &vert; **`EXPORT`**

*`pageDir`*\
&emsp; **`PAGE`** ⟦ *`pageExpr`* ⟧ *`;;`*

*`pageExpr`*\
&emsp; **`+`** &vert; ⟦ *`pageLength`* ⟧ ⟦ **`,`** *`pageWidth`* ⟧

*`pageLength`*\
&emsp; *`constExpr`*

*`pageWidth`*\
&emsp; *`constExpr`*

*`parm`*\
&emsp; *`parmId`* ⟦ **`:`** *`qualifiedType`* ⟧\
&emsp; &vert; *`parmId`* ⟦ *`constExpr`* ⟧ ⟦ **`:`** *`qualifiedType`* ⟧

*`parmId`*\
&emsp; *`id`*

*`parmList`*\
&emsp; *`parm`* &vert; *`parmList`* **`,`** ⟦ *`;;`* ⟧ *`parm`*

*`parmType`*\
&emsp; **`REQ`** &vert; **`=`** *`textLiteral`* &vert; **`VARARG`**

*`pOptions`*\
&emsp; ⟦ *`distance`* ⟧ ⟦ *`langType`* ⟧ ⟦ *`oVisibility`* ⟧

*`primary`*\
&emsp; *`expr`* *`binaryOp`* *`expr`* &vert; *`flagName`* &vert; *`expr`*

*`procDir`*\
&emsp; *`procId`* **`PROC`** ⟦ *`pOptions`* ⟧ ⟦ **`<`** *`macroArgList`* **`>`** ⟧\
&emsp; ⟦ *`usesRegs`* ⟧ ⟦ *`procParmList`* ⟧

*`processor`*\
&emsp; &vert; **`.386`** &vert; **`.386p`** &vert; **`.486`** &vert; **`.486P`**\
&emsp; &vert; **`.586`** &vert; **`.586P`** &vert; **`.686`** &vert; **`.686P`** &vert; **`.387`**

*`processorDir`*\
&emsp; *`processor`* *`;;`*\
&emsp; &vert; *`coprocessor`* *`;;`*

*`procId`*\
&emsp; *`id`*

*`procItem`*\
&emsp; *`instrPrefix`* &vert; *`dataDir`* &vert; *`labelDir`* &vert; *`offsetDir`* &vert; *`generalDir`*

*`procParmList`*\
&emsp; ⟦ **`,`** ⟦ *`;;`* ⟧ *`parmList`* ⟧\
&emsp; ⟦ **`,`** ⟦ *`;;`* ⟧ *`parmId`* **`:VARARG`** ⟧

*`protoArg`*\
&emsp; ⟦ *`id`* ⟧ **`:`** *`qualifiedType`*

*`protoArgList`*\
&emsp; ⟦ **`,`** ⟦ *`;;`* ⟧ *`protoList`* ⟧\
&emsp; ⟦ **`,`** ⟦ *`;;`* ⟧ ⟦ *`id`* ⟧ **`:VARARG`** ⟧

*`protoList`*\
&emsp; *`protoArg`*\
&emsp; &vert; *`protoList`* **`,`** ⟦ *`;;`* ⟧ *`protoArg`*

*`protoSpec`*\
&emsp; ⟦ *`distance`* ⟧ ⟦ *`langType`* ⟧ ⟦ *`protoArgList`* ⟧\
&emsp; &vert; *`typeId`*

*`protoTypeDir`*\
&emsp; *`id`* **`PROTO`** *`protoSpec`*

*`pubDef`*\
&emsp; ⟦ *`langType`* ⟧ *`id`*

*`publicDir`*\
&emsp; **`PUBLIC`** *`pubList`* *`;;`*

*`pubList`*\
&emsp; *`pubDef`* &vert; *`pubList`* **`,`** ⟦ *`;;`* ⟧ *`pubDef`*

*`purgeDir`*\
&emsp; **`PURGE`** *`macroIdList`*

*`qualifiedType`*\
&emsp; *`type`*\
&emsp; &vert; ⟦ *`distance`* ⟧ **`PTR`** ⟦ *`qualifiedType`* ⟧

*`qualifier`*\
&emsp; *`qualifiedType`* &vert; **`PROTO`** *`protoSpec`*

*`quote`*\
&emsp; **`"`** &vert; **`'`**

*`qwordRegister`*\
&emsp; **`RAX`** &vert; **`RCX`** &vert; **`RDX`** &vert; **`RBX`** &vert; **`RSP`** &vert; **`RBP`** &vert; **`RSI`** &vert; **`RDI`**\
&emsp; &vert; **`R8`** &vert; **`R9`** &vert; **`R10`** &vert; **`R11`** &vert; **`R12`** &vert; **`R13`** &vert; **`R14`** &vert; **`R15`**

*`radixDir`*\
&emsp; **`.RADIX`** *`constExpr`* *`;;`*

*`radixOverride`*\
&emsp; **`h`** &vert; **`o`** &vert; **`q`** &vert; **`t`** &vert; **`y`**\
&emsp; &vert; **`H`** &vert; **`O`** &vert; **`Q`** &vert; **`T`** &vert; **`Y`**

*`recordConst`*\
&emsp; *`recordTag`* **`{`** *`oldRecordFieldList`* **`}`**\
&emsp; &vert; *`recordTag`* **`<`** *`oldRecordFieldList`* **`>`**

*`recordDir`*\
&emsp; *`recordTag`* **`RECORD`** *`bitDefList`* *`;;`*

*`recordFieldList`*\
&emsp; ⟦ *`constExpr`* ⟧ &vert; *`recordFieldList`* **`,`** ⟦ *`;;`* ⟧ ⟦ *`constExpr`* ⟧

*`recordInstance`*\
&emsp; **`{`** ⟦ *`;;`* ⟧ *`recordFieldList`* ⟦ *`;;`* ⟧ **`}`**\
&emsp; &vert; **`<`** *`oldRecordFieldList`* **`>`**\
&emsp; &vert; *`constExpr`* **`DUP`** **`(`** *`recordInstance`* **`)`**

*`recordInstList`*\
&emsp; *`recordInstance`* &vert; *`recordInstList`* **`,`** ⟦ *`;;`* ⟧ *`recordInstance`*

*`recordTag`*\
&emsp; *`id`*

*`register`*\
&emsp; *`specialRegister`* &vert; *`gpRegister`* &vert; *`byteRegister`* &vert; *`qwordRegister`* &vert; *`fpuRegister`* &vert; *`SIMDRegister`* &vert; *`segmentRegister`*

*`regList`*\
&emsp; *`register`* &vert; *`regList`* *`register`*

*`relOp`*\
&emsp; **`EQ`** &vert; **`NE`** &vert; **`LT`** &vert; **`LE`** &vert; **`GT`** &vert; **`GE`**

*`repeatBlock`*\
&emsp; **`.REPEAT`** *`;;`*\
&emsp; *`blockStatements`* *`;;`*
*`untilDir`* *`;;`*

*`repeatDir`*\
&emsp; **`REPEAT`** &vert; **`REPT`**

*`scalarInstList`*\
&emsp; *`initValue`*\
&emsp; &vert; *`scalarInstList`* **`,`** ⟦ *`;;`* ⟧ *`initValue`*

*`segAlign`*\
&emsp; **`BYTE`** &vert; **`WORD`** &vert; **`DWORD`** &vert; **`PARA`** &vert; **`PAGE`**

*`segAttrib`*\
&emsp; **`PUBLIC`** &vert; **`STACK`** &vert; **`COMMON`** &vert; **`MEMORY`** &vert; **`AT`** *`constExpr`* &vert; **`PRIVATE`**

*`segDir`*\
&emsp; **`.CODE`** ⟦ *`segId`* ⟧\
&emsp; &vert; **`.DATA`**\
&emsp; &vert; **`.DATA?`**\
&emsp; &vert; **`.CONST`**\
&emsp; &vert; **`.FARDATA`** ⟦ *`segId`* ⟧\
&emsp; &vert; **`.FARDATA?`** ⟦ *`segId`* ⟧\
&emsp; &vert; **`.STACK`** ⟦ *`constExpr`* ⟧

*`segId`*\
&emsp; *`id`*

*`segIdList`*\
&emsp; *`segId`*\
&emsp; &vert; *`segIdList`* **`,`** *`segId`*

*`segmentDef`*\
&emsp; *`segmentDir`* ⟦ *`inSegDirList`* ⟧ *`endsDir`* &vert; *`simpleSegDir`* ⟦ *`inSegDirList`* ⟧ ⟦ *`endsDir`* ⟧

*`segmentDir`*\
&emsp; *`segId`* **`SEGMENT`** ⟦ *`segOptionList`* ⟧ *`;;`*

*`segmentRegister`*\
&emsp; **`CS`** &vert; **`DS`** &vert; **`ES`** &vert; **`FS`** &vert; **`GS`** &vert; **`SS`**

*`segOption`*\
&emsp; *`segAlign`*\
&emsp; &vert; *`segRO`*\
&emsp; &vert; *`segAttrib`*\
&emsp; &vert; *`segSize`*\
&emsp; &vert; *`className`*

*`segOptionList`*\
&emsp; *`segOption`* &vert; *`segOptionList`* *`segOption`*

*`segOrderDir`*\
&emsp; **`.ALPHA`** &vert; **`.SEQ`** &vert; **`.DOSSEG`** &vert; **`DOSSEG`**

*`segRO`*\
&emsp; **`READONLY`**

*`segSize`*\
&emsp; **`USE16`** &vert; **`USE32`** &vert; **`FLAT`**

*`shiftOp`*\
&emsp; **`SHR`** &vert; **`SHL`**

*`sign`*\
&emsp; **`+`** &vert; **`-`**

*`simdRegister`*\
&emsp; **`MM0`** &vert; **`MM1`** &vert; **`MM2`** &vert; **`MM3`** &vert; **`MM4`** &vert; **`MM5`** &vert; **`MM6`** &vert; **`MM7`**\
&emsp; &vert; *`xmmRegister`*\
&emsp; &vert; **`YMM0`** &vert; **`YMM1`** &vert; **`YMM2`** &vert; **`YMM3`** &vert; **`YMM4`** &vert; **`YMM5`** &vert; **`YMM6`** &vert; **`YMM7`**\
&emsp; &vert; **`YMM8`** &vert; **`YMM9`** &vert; **`YMM10`** &vert; **`YMM11`** &vert; **`YMM12`** &vert; **`YMM13`** &vert; **`YMM14`** &vert; **`YMM15`**

*`simpleExpr`*\
&emsp; **`(`** *`cExpr`* **`)`** &vert; *`primary`*

*`simpleSegDir`*\
&emsp; *`segDir`* *`;;`*

*`sizeArg`*\
&emsp; *`id`* &vert; *`type`* &vert; *`e10`*

*`specialChars`*\
&emsp; **`:`** &vert; **`.`** &vert; **`[`** &vert; **`]`** &vert; **`(`** &vert; **`)`** &vert; **`<`** &vert; **`>`** &vert; **`{`** &vert; **`}`**\
&emsp; &vert; **`+`** &vert; **`-`** &vert; **`/`** &vert; **`*`** &vert; **`&`** &vert; **`%`** &vert; **`!`**\
&emsp; &vert; **`'`** &vert; **`\`** &vert; **`=`** &vert; **`;`** &vert; **`,`** &vert; **`"`**\
&emsp; &vert; *`whiteSpaceCharacter`*\
&emsp; &vert; *`endOfLine`*

*`specialRegister`*\
&emsp; **`CR0`** &vert; **`CR2`** &vert; **`CR3`**\
&emsp; &vert; **`DR0`** &vert; **`DR1`** &vert; **`DR2`** &vert; **`DR3`** &vert; **`DR6`** &vert; **`DR7`**\
&emsp; &vert; **`TR3`** &vert; **`TR4`** &vert; **`TR5`** &vert; **`TR6`** &vert; **`TR7`**

*`stackOption`*\
&emsp; **`NEARSTACK`** &vert; **`FARSTACK`**

*`startupDir`*\
&emsp; **`.STARTUP`** *`;;`*

*`stext`*\
&emsp; *`stringChar`* &vert; *`stext`* *`stringChar`*

*`string`*\
&emsp; *`quote`* ⟦ *`stext`* ⟧ *`quote`*

*`stringChar`*\
&emsp; *`quote`* *`quote`* &vert; Any character except quote.

*`structBody`*\
&emsp; *`structItem`* *`;;`*\
&emsp; &vert; *`structBody`* *`structItem`* *`;;`*

*`structDir`*\
&emsp; *`structTag`* *`structHdr`* ⟦ *`fieldAlign`* ⟧\
&emsp; ⟦ **`,`** **`NONUNIQUE`** ⟧ *`;;`*\
&emsp; *`structBody`*\
&emsp; *`structTag`* **`ENDS`** *`;;`*

*`structHdr`*\
&emsp; **`STRUC`** &vert; **`STRUCT`** &vert; **`UNION`**

*`structInstance`*\
&emsp; **`<`** ⟦ *`fieldInitList`* ⟧ **`>`**\
&emsp; &vert; **`{`** ⟦ *`;;`* ⟧ ⟦ *`fieldInitList`* ⟧ ⟦ *`;;`* ⟧ **`}`**\
&emsp; &vert; *`constExpr`* **`DUP`** ( *`structInstList`* )

*`structInstList`*\
&emsp; *`structInstance`* &vert; *`structInstList`* **`,`** ⟦ *`;;`* ⟧ *`structInstance`*

*`structItem`*\
&emsp; *`dataDir`*\
&emsp; &vert; *`generalDir`*\
&emsp; &vert; *`offsetDir`*\
&emsp; &vert; *`nestedStruct`*

*`structTag`*\
&emsp; *`id`*

*`term`*\
&emsp; *`simpleExpr`* &vert; **`!`** *`simpleExpr`*

*`text`*\
&emsp; *`textLiteral`* &vert; *`text`* *`character`* &vert; **`!`** *`character`* *`text`* &vert; *`character`* &vert; **`!`** *`character`*

*`textDir`*\
&emsp; *`id`* *`textMacroDir`* *`;;`*

*`textItem`*\
&emsp; *`textLiteral`* &vert; *`textMacroId`* &vert; **`%`** *`constExpr`*

*`textLen`*\
&emsp; *`constExpr`*

*`textList`*\
&emsp; *`textItem`* &vert; *`textList`* **`,`** ⟦ *`;;`* ⟧ *`textItem`*

*`textLiteral`*\
&emsp; **`<`** *`text`* **`>`** **`;;`**

*`textMacroDir`*\
&emsp; **`CATSTR`** ⟦ *`textList`* ⟧\
&emsp; &vert; **`TEXTEQU`** ⟦ *`textList`* ⟧\
&emsp; &vert; **`SIZESTR`** *`textItem`*\
&emsp; &vert; **`SUBSTR`** *`textItem`* **`,`** *`textStart`* ⟦ **`,`** *`textLen`* ⟧\
&emsp; &vert; **`INSTR`** ⟦ *`textStart`* **`,`** ⟧ *`textItem`* **`,`** *`textItem`*

*`textMacroId`*\
&emsp; *`id`*

*`textStart`*\
&emsp; *`constExpr`*

*`titleDir`*\
&emsp; *`titleType`* *`arbitraryText`* *`;;`*

*`titleType`*\
&emsp; **`TITLE`** &vert; **`SUBTITLE`** &vert; **`SUBTTL`**

*`type`*\
&emsp; *`structTag`*\
&emsp; &vert; *`unionTag`*\
&emsp; &vert; *`recordTag`*\
&emsp; &vert; *`distance`*\
&emsp; &vert; *`dataType`*\
&emsp; &vert; *`typeId`*

*`typedefDir`*\
&emsp; *`typeId`* **`TYPEDEF`** *`qualifier`*

*`typeId`*\
&emsp; *`id`*

*`unionTag`*\
&emsp; *`id`*

*`untilDir`*\
&emsp; **`.UNTIL`** *`cExpr`* *`;;`*\
&emsp; **`.UNTILCXZ`** ⟦ *`cxzExpr`* ⟧ *`;;`*

*`usesRegs`*\
&emsp; **`USES`** *`regList`*

*`whileBlock`*\
&emsp; **`.WHILE`** *`cExpr`* *`;;`*\
&emsp; *`blockStatements`* *`;;`*\
&emsp; **`.ENDW`**

*`whiteSpaceCharacter`*\
&emsp; ASCII 8, 9, 11–13, 26, 32

*`xmmRegister`*\
&emsp; **`XMM0`** &vert; **`XMM1`** &vert; **`XMM2`** &vert; **`XMM3`** &vert; **`XMM4`** &vert; **`XMM5`** &vert; **`XMM6`** &vert; **`XMM7`**\
&emsp; &vert; **`XMM8`** &vert; **`XMM9`** &vert; **`XMM10`** &vert; **`XMM11`** &vert; **`XMM12`** &vert; **`XMM13`** &vert; **`XMM14`** &vert; **`XMM15`**
