struct MyStructType { int topScore; };
void MyFunc()
{
   // Frame allocation
   MyStructType myStruct;

   // Use the struct 
   myStruct.topScore = 297;

   // Reclaimed when exiting scope
}