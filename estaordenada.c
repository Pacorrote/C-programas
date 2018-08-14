int estaOrdenada(){
	nodo * aux = inicio;
	nodo * ant = NULL;
	if(inicio==NULL){
		return true;
	}
	else if (inicio.siguiente == NULL){
		return true;
	}
	else{
		nodo * ant = inicio;
		nodo * aux = inicio.siguiente;
		while ((aux!=NULL) && (ant.dato<=aux.dato)){
			ant = aux;
			aux = aux.siguiente;
		}
		return aux==NULL? true: false;
	}
}
