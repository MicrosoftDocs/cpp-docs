BEGIN_OLEFACTORY(CMyAxUICtrl)        // Class factory and guid
   virtual BOOL VerifyUserLicense();
virtual BOOL GetLicenseKey(DWORD, BSTR FAR*);
END_OLEFACTORY(CMyAxUICtrl)