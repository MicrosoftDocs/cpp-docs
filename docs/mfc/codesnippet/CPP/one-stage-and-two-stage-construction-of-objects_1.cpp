// One-stage
CPen myPen1(PS_DOT, 5, RGB(0, 0, 0));

// Two-stage: first construct the pen
CPen myPen2;
// Then initialize it
if (myPen2.CreatePen(PS_DOT, 5, RGB(0, 0, 0)))
{
   // Use the pen
}