
#include <iostream>
#include <vector>
#include <array>
using namespace std;

/*      ------- Constantes globales -------      */
const int J1 = 1; // Jugador 1
const int J2 = 2; // Jugador 2
const int VACIO = 0; 
const int POSICIONES = 24;
const int TOTAL_FICHAS = 9;

/*      ------- Variables globales -------      */
int fichas_J1;
int fichas_J2;
array <int, POSICIONES> Tablero; // Estructura de tablero.
int turno_actual; 
int fase ;

/*      ------- Vector Adyacentes -------      */
const vector<vector<int>> Adyacencias = {
    {1, 9},         // 0
    {0, 2, 4},      // 1
    {1, 14},        // 2
    {4, 10},        // 3
    {1, 3, 5, 7},   // 4
    {4, 13},        // 5
    {7, 11},        // 6
    {4, 6, 8},      // 7
    {7, 12},        // 8
    {0, 10, 21},    // 9
    {3, 9, 11, 18}, // 10
    {6, 10, 15},    // 11
    {8, 13, 17},    // 12
    {5, 12, 14, 20},// 13
    {2, 13, 23},    // 14
    {11, 16},       // 15
    {15, 17, 19},   // 16
    {12, 16},       // 17
    {10, 19},       // 18
    {16, 18, 20, 22}, // 19
    {13, 19},       // 20
    {9, 22},        // 21
    {19, 21, 23},   // 22
    {14, 22}        // 23
};
/*      ------- Vector Adyacentes -------      */
const vector<vector<int>> Triadas = {
    // Anillo exterior
    {0, 1, 2}, {2, 14, 23}, {21, 22, 23}, {0, 9, 21},
    
    // Anillo medio
    {3, 4, 5}, {5, 13, 20}, {18, 19, 20}, {3, 10, 18},
    
    // Anillo interior
    {6, 7, 8}, {8, 12, 17}, {15, 16, 17}, {6, 11, 15},
    
    // Verticales
    {1, 4, 7}, {16, 19, 22},
    
    // Horizontales
    {9, 10, 11}, {12, 13, 14}
};


// Prototipos de Función (Temporal para pasar a headers)
void InicializarJuego(){
    // Rellenar Tablero con posiciones vacias
    for (int i = 0; i < POSICIONES; i++){
        Tablero.at(i) = VACIO;
    }
    
    // Asignar fichas
    fichas_J1 = TOTAL_FICHAS;
    fichas_J2 = TOTAL_FICHAS;
    
    // Asignar turno
    turno_actual = J1;
    fase = 1;
}



int main()
{
    // Introducción del juego.
    cout << "       ---TRIADAS---       " << endl;
    
    cout << "Bienvenido al juego de triadas.\n";
    cout << "El objetivo de este juego es formar triadas (tres en raya) con las fichas en los cuadrados concentricos interconectados " << endl;
    cout << "REGLAS: " << endl;
    cout << "Se divide en 3 fases:" << endl;
    cout << "1. Fase de colocación:"<< endl;
    cout << "    - Cada Jugador tiene 9 fichas." << endl << "    - Si un jugador forma una triada, puede eliminar una ficha del oponente en el tablero." << endl << "    - La fase acaba cuando los jugadores hayan puesto todas sus fichas en el tablero." << endl;
    cout << "2. Fase de movimiento:" << endl;
    cout << "    - Los jugadores pueden mover sus fichas a cualquier posición adyacente que esté vacía." << endl << "    - Se mantiene la regla de la eliminación cuando se forma una triada." << endl;
    cout << "3. Fase de vuelo:" << endl;
    cout << "    - Cuando un jugador tiene 3 fichas puede moverlas a cualquier espacio vacío en el tablero, no solo adyacentes." << endl;
    cout << "El GANADOR es el que reduzca las fichas de su oponente a 2 o le impida realizar movimientos validos." << endl;
    
    //
   
    InicializarJuego(); //Inicializar el tablero con 0
    
    
    
    
}