int  fun ( char lista[ 10 ][ 20 ], char nome[ 20 ]){
  intero io = 0 ;
  intero j = 0 ;
  mentre ((j < 19 ) e (i < 10 )) {
    if (lista[i][j] != nome[j]) {
      io++;
      j = 0 ;
    } else  if (lista[i][j] == nome[j]) {
      j++;
    }
  } restituisce i;
}
