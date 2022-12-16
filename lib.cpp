
# include  " lib.h "

bool  cerca ( char lista[ 10 ][ 20 ], int &posizione, char target[]){
    for ( int i= 0 ;i< 10 ;i++){
        for ( int j= 0 ;j< 20 ;j++){
            if (lista[i][j] != target[j]){
                j = 20 ;
            } altro {
              se (j== 19 ){
                  posizione = io;
                  restituisce  true ;
              }
            }
        }
    }
    restituire  falso ;
}
