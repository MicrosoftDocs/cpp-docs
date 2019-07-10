#ifdef _WIN32
WORD wNotifyCode = HIWORD(wParam);
#else
WORD wNotifyCode = HIWORD(lParam);
#endif

if (wNotifyCode == EN_CHANGE)
{
   if (!BoundPropertyRequestEdit(DISPID_TEXT))
   {
      SetNotSupported();
   }
   else
   {
      GetText();
      // Notify container of change
      BoundPropertyChanged(DISPID_TEXT);
   }
}

return 0;