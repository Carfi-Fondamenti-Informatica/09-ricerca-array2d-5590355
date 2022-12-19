# include  < iostream >
# include  " lib.h "
//usando lo  spazio dei nomi  std ;
#using namespace std;
int  principale () {
    char lista[ 10 ][ 20 ];
    destinazione char [ 20 ];
    int posizione = 0 ;

    for ( int i= 0 ;i< 10 ;i++){
        for ( int j= 0 ;j< 20 ;j++) {
            destinazione[j] = '  ' ;
            lista[i][j] = '  ' ;
        }
    }

    for ( int i= 0 ;i< 10 ;i++){
        cin >> lista[i];
    }

    cin >> bersaglio;
    if ( cerca (lista,pos,target)){
        cout << pos;
    } altro {
        cout << " non presente " ;
    }





    ritorno  0 ;
}
