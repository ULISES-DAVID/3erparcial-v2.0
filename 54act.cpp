  double raizCuadrada = 1.0;
  for (int i = 0; i < 10; ++i) {
      raizCuadrada = 0.5 * (raizCuadrada + num / raizCuadrada);
  }
  cout << "La raiz cuadrada de " << num << " es: " << raizCuadrada << endl;
//Mi parte
