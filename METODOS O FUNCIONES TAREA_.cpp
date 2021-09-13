# incluye < iostream >

usando el  espacio de nombres  std ;
struct  Estudiante {
	int * codigo;
	cadena * nombre;
};
void  mostrar_notas ( int ** p_matriz, int fila, int columna);
int  main () {
int fila_estudiante = 0 , columna_notas = 0 , ** pm_notas;


Estudiante estudiante;
cout << " Cuantos Estudiantes Desea Ingresar: " ;
cin >> fila_estudiante;	
cout << " Cuantas Notas Desea Ingresar: " ;
cin >> columna_notas;	
pm_notas = new   int * [fila_estudiante];
estudiante. codigo = new  int [fila_estudiante];
estudiante. nombre = nueva cadena [fila_estudiante];
para ( int i = 0 ; i <fila_estudiante; i ++) {
pm_notas [i] = new  int [columna_notas];
 	
}
cout << " -------------- Ingrese Notas -------------- " << endl;
nombre de cadena;
para ( int i = 0 ; i <fila_estudiante; i ++) {
	cout << " Codigo: " ;
	cin >> estudiante. codigo [i];
	cin. ignorar ();
	cout << " Nombre: " ;
	getline (cin, estudiante. nombre [i]);
	
	
para ( int ii = 0 ; ii <columna_notas; ii ++) {
	cout << " Nota: " << ii << " : " ;
	cin >> * (* (pm_notas + i) + ii);
	}
	cout << " ---------------------------------------- " << endl;
}

para ( int i = 0 ; i <fila_estudiante; i ++) {
	cout << " Codigo: " << estudiante. codigo [i] << " Estudiante: " << estudiante. nombre [i] << " . " << endl;
para ( int ii = 0 ; ii <columna_notas; ii ++) {
	cout << " Nota [ " << ii + 1 << " ]: " << * (* (pm_notas + i) + ii);
	cout << endl;
}
	cout << " ---------------------------------------- " << endl;
}
eliminar [] pm_notas;
eliminar [] estudiante. codigo ;
eliminar [] estudiante. nombre ;


	sistema ( " PAUSA " );
	return  0 ;
	
	
}

void  mostrar_notas ( int ** p_matriz, int fila, int columna) {
	cout << " -------------- Mostrar Notas -------------- " << endl;
para ( int i = 0 ; i <fila; i ++) {
para ( int ii = 0 ; ii <columna; ii ++) {
	cout << * (* (p_matriz + i) + ii) << endl;
	}
}

	
}
