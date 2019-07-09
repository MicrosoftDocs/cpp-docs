if (bscfFlag & BSCF_LASTDATANOTIFICATION)
{
   GetControl()->InternalSetReadyState(READYSTATE_COMPLETE);
}