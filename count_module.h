/*
  * ESTA FUNCION CREA TEXTO BINARIO QUE 
  * IDENTIFICA EL BYTE MAS REPETITIVO
  */

void copy_desu();
void cdB_desu();
void hlt_value();
void launcher();
void zero(){
	
	for(int i = 0; i < 256; i++){
		
		byte_table[i] = 0;
	}
}

void launcher(){
	
	copy_desu();
	cdB_desu();
	v_short = -1;
	hlt_value();
}
void copy_desu(){
	
	while(getline(archivo,v_string)){
		str_aux += '\n';
		str_aux += v_string;
	}
	len = str_aux.size() + 1;
	arrayTemp = new char[len];
	
	for(int i = 0;i < len; i++)
		arrayTemp[i] = str_aux[i];
	archivo.close();
}

void cdB_desu(){
	
	for(int i = 0; i < len; i++)
		byte_table[arrayTemp[i]]++;
}

void hlt_value(){
	
	v_short++;
	int a = 0;
	for(int i = 0; i < 256; i++)
		if(byte_table[i] > a){
			a = byte_table[i];
			v_int = i;
		}
	if(v_short < 256)
		hlt_value();
}