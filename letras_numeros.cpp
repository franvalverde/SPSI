for (int i = 0 ; i <sizeof(texto);i++){
    if (texto[i] == 'a')
        numeros[i] = 1;
    else if (texto[i] == 'b')
        numeros[i] = 2;
    else if(texto[i]== 'c')
        numeros[i]=3;
    else if (texto[i] == 'd')
        numeros[i]=4;
    else if(texto[i]=='f')
        numeros[i]=6;
    else if (texto[i]=='g')
        numeros[i]=7;
    else if (texto[i]=='e')
        numeros[i]=5;
}
for (int i = 0 ; i <sizeof(numeros);i++){
    cout << numeros[i] ;

}
}
