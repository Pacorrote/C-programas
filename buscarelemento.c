int buscarElemento (int elemento){
	nodo * aux = inicio;
	while ((aux!=NULL)&&(aux.dato!=elemento)){
		aux=aux.siguiente;
	}
	if (aux==NULL){
		return false;
	}
	else{
		return true;
	}
}
