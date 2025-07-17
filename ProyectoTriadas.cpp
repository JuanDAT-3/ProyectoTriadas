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

void Colocación(){
    // Variables 
    int posicion;
    
    //Codigo
    cout << "\n--- Fase de Colocación ---\n";
    
    cout << "Jugador " << turno_actual << endl;
    cout << "Fichas disponibles: " << (turno_actual == J1 ? fichas_J1 : fichas_J2) << endl;
    cout << "Ingresa posición para poner una ficha (0-23): ";
    cin >> posicion;
    cout << endl;
    
    //if  bool PosicionValida(){
    
    
    }
    


int main()
{
    // Introducción del juego.
    cout << "       ---TRIADAS---       " << endl;
    
    cout << "Bienvenido al juego de triadas.\n";
    cout << "El objetivo de este juego es formar triadas (tres en raya) en los espacios dispoinbles." << endl;
    cout << "REGLAS: " << endl;
    cout << "    - Los jugadores inician con 9 fichas cada uno." << endl;
    cout << "    - El juego tiene 3 fases: Colocación, Movimiento, Vuelo." << endl;
    cout << "    - Si un jugador hace una triada (tres en raya), \n    puede eliminar una ficha del oponente." << endl;
    cout << "    - El ganador es el que reduzca las fichas de su oponente a 2 \n    no le impida realizar movimientos." << endl;
    
    //
   
    InicializarJuego(); //Inicializar el tablero con 0
    
    
    
    
}
