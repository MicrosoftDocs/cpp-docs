---
title: "How to: Implement a Plug-In Component Architecture using Reflection (C++-CLI) | Microsoft Docs"
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
  - "plug-ins [C++]"
  - "reflection [C++}, plug-ins"
ms.assetid: 4f31e42b-78d1-48b9-8fdc-f28c75e8e77e
caps.latest.revision: 13
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
# How to: Implement a Plug-In Component Architecture using Reflection (C++/CLI)
The following code examples demonstrate the use of reflection to implement a simple "plug-in" architecture. The first listing is the application, and the second is the plug-in. The application is a multiple document form that populates itself using any form-based classes found in the plug-in DLL provided as a command-line argument.  
  
 The application attempts to load the provided assembly using the <xref:System.Reflection.Assembly.Load%2A?displayProperty=fullName> method. If successful, the types inside the assembly are enumerated using the <xref:System.Reflection.Assembly.GetTypes%2A?displayProperty=fullName> method. Each type is then checked for compatibility using the <xref:System.Type.IsAssignableFrom%2A?displayProperty=fullName> method. In this example, classes found in the provided assembly must be derived from the <xref:System.Windows.Forms.Form> class to qualify as a plug-in.  
  
 Compatible classes are then instantiated with the <xref:System.Activator.CreateInstance%2A?displayProperty=fullName> method, which accepts a <xref:System.Type> as an argument and returns a pointer to a new instance. Each new instance is then attached to the form and displayed.  
  
 Note that the <xref:System.Reflection.Assembly.Load%2A> method does not accept assembly names that include the file extension. The main function in the application trims any provided extensions, so the following code example works in either case.  
  
## Example  
 The following code defines the application that accepts plug-ins. An assembly name must be provided as the first argument. This assembly should contain at least one public <xref:System.Windows.Forms.Form> derived type.  
  
```  
// plugin_application.cpp  
// compile with: /clr /c  
#using <system.dll>  
#using <system.drawing.dll>  
#using <system.windows.forms.dll>  
  
using namespace System;  
using namespace System::Windows::Forms;  
using namespace System::Reflection;  
  
ref class PluggableForm : public Form  {  
public:  
   PluggableForm() {}  
   PluggableForm(Assembly^ plugAssembly) {  
      Text = "plug-in example";  
      Size = Drawing::Size(400, 400);  
      IsMdiContainer = true;  
  
      array<Type^>^ types = plugAssembly->GetTypes( );  
      Type^ formType = Form::typeid;  
  
      for (int i = 0 ; i < types->Length ; i++) {  
         if (formType->IsAssignableFrom(types[i])) {  
            // Create an instance given the type description.  
            Form^ f = dynamic_cast<Form^> (Activator::CreateInstance(types[i]));  
            if (f) {  
               f->Text = types[i]->ToString();  
               f->MdiParent = this;  
               f->Show();  
            }  
         }  
      }  
   }  
};  
  
int main() {  
   Assembly^ a = Assembly::LoadFrom("plugin_application.exe");  
   Application::Run(gcnew PluggableForm(a));  
}  
```  
  
## Example  
 The following code defines three classes derived from <xref:System.Windows.Forms.Form>. When the name of the resulting assembly name is passed to the executable in the previous listing, each of these three classes will be discovered and instantiated, despite the fact that they were all unknown to the hosting application at compile time.  
  
```  
// plugin_assembly.cpp  
// compile with: /clr /LD  
#using <system.dll>  
#using <system.drawing.dll>  
#using <system.windows.forms.dll>  
  
using namespace System;  
using namespace System::Windows::Forms;  
using namespace System::Reflection;  
using namespace System::Drawing;  
  
public ref class BlueForm : public Form {  
public:  
   BlueForm() {  
      BackColor = Color::Blue;  
   }  
};  
  
public ref class CircleForm : public Form {  
protected:  
   virtual void OnPaint(PaintEventArgs^ args) override {  
      args->Graphics->FillEllipse(Brushes::Green, ClientRectangle);  
   }  
};  
  
public ref class StarburstForm : public Form {  
public:  
   StarburstForm(){  
      BackColor = Color::Black;  
   }  
protected:  
   virtual void OnPaint(PaintEventArgs^ args) override {  
      Pen^ p = gcnew Pen(Color::Red, 2);  
      Random^ r = gcnew Random( );  
      Int32 w = ClientSize.Width;  
      Int32 h = ClientSize.Height;  
      for (int i=0; i<100; i++) {  
         float x1 = w / 2;  
         float y1 = h / 2;  
         float x2 = r->Next(w);  
         float y2 = r->Next(h);  
         args->Graphics->DrawLine(p, x1, y1, x2, y2);  
      }  
   }  
};  
```  
  
## See Also  
 [Reflection (C++/CLI)](../dotnet/reflection-cpp-cli.md)