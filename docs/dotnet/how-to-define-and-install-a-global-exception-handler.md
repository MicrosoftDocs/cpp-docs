---
title: "How to: Define and Install a Global Exception Handler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "handlers, global"
ms.assetid: dd88a812-3bc7-4ce8-8283-4b674c246534
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
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
# How to: Define and Install a Global Exception Handler
The following code example demonstrates how unhandled exceptions can be captured. The example form contains a button that, when pressed, performs a null reference, causing an exception to be thrown. This functionality represents a typical code failure. The resulting exception is caught by the application-wide exception handler installed by the main function.  
  
 This is accomplished by binding a delegate to the <xref:System.Windows.Forms.Application.ThreadException> event. In this case, subsequent exceptions are then sent to the `App::OnUnhandled` method.  
  
## Example  
  
```  
// global_exception_handler.cpp  
// compile with: /clr  
#using <system.dll>  
#using <system.drawing.dll>  
#using <system.windows.forms.dll>  
  
using namespace System;  
using namespace System::Threading;  
using namespace System::Drawing;  
using namespace System::Windows::Forms;  
  
ref class MyForm : public Form  
{  
   Button^ b;  
public:  
   MyForm( )  
   {  
      b = gcnew Button( );  
      b->Text = "Do Null Access";  
      b->Size = Drawing::Size(150, 30);  
      b->Click += gcnew EventHandler(this, &MyForm::OnClick);  
      Controls->Add(b);  
   }  
   void OnClick(Object^ sender, EventArgs^ args)   
   {  
      // do something illegal, like call through a null pointer...  
      Object^ o = nullptr;  
      o->ToString( );        
   }  
};  
  
ref class App  
{  
public:  
   static void OnUnhandled(Object^ sender, ThreadExceptionEventArgs^ e)  
   {  
      MessageBox::Show(e->Exception->Message, "Global Exeception");  
      Application::ExitThread( );  
   }  
};  
  
int main()  
{  
   Application::ThreadException += gcnew   
      ThreadExceptionEventHandler(App::OnUnhandled);  
  
   MyForm^ form = gcnew MyForm( );  
   Application::Run(form);  
}  
```  
  
## See Also  
 [Exception Handling](../windows/exception-handling-cpp-component-extensions.md)