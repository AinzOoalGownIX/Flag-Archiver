void calls();

void read_file(){
	
	calls();
	
	archivo.open(filename,ios::in);
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo.\n";
		exit(1);
	}
		
	cout<<"Archivo abierto!"<<endl;
}

void calls(){
	
	fflush(stdin);
	cout<<"Ingrese el nombre del archivo: ";
	cin.getline(filename,128,10);
}