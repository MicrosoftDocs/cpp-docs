protected:
   BEGIN_INTERFACE_PART(HeadingFontNotify, IPropertyNotifySink)
      INIT_INTERFACE_PART(CMyAxFontCtrl, HeadingFontNotify)
      STDMETHOD(OnRequestEdit)(DISPID);
   STDMETHOD(OnChanged)(DISPID);
   END_INTERFACE_PART(HeadingFontNotify)