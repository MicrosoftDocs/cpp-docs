LPNMDAYSTATE pDayState = reinterpret_cast<LPNMDAYSTATE>(pNMHDR);

int iMax = pDayState->cDayState;

for (int i = 0; i < iMax; i++)
{
   pDayState->prgDayState[i] = (MONTHDAYSTATE)0; // init to 0
   pDayState->prgDayState[i] |= 0x01 << 14; // set 15th bit to 1
}