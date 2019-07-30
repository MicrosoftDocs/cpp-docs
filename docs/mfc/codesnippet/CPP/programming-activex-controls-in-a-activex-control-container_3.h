// Functions
//

void AboutBox()
{
   InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

// Properties
//

unsigned long GetBackColor()
{
   unsigned long result;
   GetProperty(DISPID_BACKCOLOR, VT_UI4, (void*)& result);
   return result;
}
void SetBackColor(unsigned long propVal)
{
   SetProperty(DISPID_BACKCOLOR, VT_UI4, propVal);
}
signed char GetCircleShape()
{
   signed char result;
   GetProperty(0x1, VT_I1, (void*)& result);
   return result;
}
void SetCircleShape(signed char propVal)
{
   SetProperty(0x1, VT_I1, propVal);
}
short GetCircleOffset()
{
   short result;
   GetProperty(0x3, VT_I2, (void*)& result);
   return result;
}
void SetCircleOffset(short propVal)
{
   SetProperty(0x3, VT_I2, propVal);
}
CString GetCaption()
{
   CString result;
   GetProperty(DISPID_CAPTION, VT_BSTR, (void*)& result);
   return result;
}
void SetCaption(CString propVal)
{
   SetProperty(DISPID_CAPTION, VT_BSTR, propVal);
}
COleFont GetFont()
{
   LPDISPATCH result;
   GetProperty(DISPID_FONT, VT_DISPATCH, (void*)& result);
   return COleFont(result);
}
void SetFont(LPDISPATCH propVal)
{
   SetProperty(DISPID_FONT, VT_DISPATCH, propVal);
}
unsigned long GetForeColor()
{
   unsigned long result;
   GetProperty(DISPID_FORECOLOR, VT_UI4, (void*)& result);
   return result;
}
void SetForeColor(unsigned long propVal)
{
   SetProperty(DISPID_FORECOLOR, VT_UI4, propVal);
}
CString GetNote()
{
   CString result;
   GetProperty(0x4, VT_BSTR, (void*)& result);
   return result;
}
void SetNote(CString propVal)
{
   SetProperty(0x4, VT_BSTR, propVal);
}
unsigned long GetFlashColor()
{
   unsigned long result;
   GetProperty(0x2, VT_UI4, (void*)& result);
   return result;
}
void SetFlashColor(unsigned long propVal)
{
   SetProperty(0x2, VT_UI4, propVal);
}
};