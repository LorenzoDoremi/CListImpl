
// passo il puntatore al puntatore (posso modificarlo)
void editPointer(int **pointer)
{

  
  **pointer = 50;
}
// passo la referenza al puntatore (posso modificarlo)
void editPointerReference(int *&pointer)
{

 
  *pointer = 100;
}
// passo una copia del puntatore (non posso modificarlo)
void editPointerValue(int *pointer)
{

  int c = 200;
  int *p = &c;
  // since it's passed by value, should have any effect
  pointer = p;
}