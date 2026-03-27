 // Constructor sobrecargado
    Estudiante(string c, string n, int e) {
        codigo = c;
        nombre = n;
        edad = e;
    }

    //  setters
    void setCodigo(string c) { codigo = c; }
    void setNombre(string n) { nombre = n; }
    void setEdad(int e) { edad = e; }

    //  getters
    string getCodigo() { return codigo; }
    string getNombre() { return nombre; }
    int getEdad() { return edad; }

    // Mostrar un estudiante
    void mostrar() {
        cout << "Codigo: " << codigo
             << " | Nombre: " << nombre
             << " | Edad: " << edad << endl;
    }
};

//  NOTAS
float notas[maxEst][numEval];

// ARREGLO DE ESTUDIANTES
Estudiante lista[maxEst];
int totalEstudiantes = 0;


// Registrar estudiante
void registrarEstudiante() {
    if (totalEstudiantes >= maxEst) {
        cout << "No se pueden registrar mas estudiantes.\n";
        return;
    }

    string cod, nom;
    int ed;

    cout << "Ingrese codigo: ";
    cin >> cod;

    // validacion basica
    if (cod == "") {
        cout << "Codigo invalido.\n";
        return;
    }

    cout << "Ingrese nombre: ";
    cin.ignore();
    getline(cin, nom);

    cout << "Ingrese edad: ";
    cin >> ed;

    if (ed <= 0) {
        cout << "Edad invalida.\n";
        return;
    }

    lista[totalEstudiantes] = Estudiante(cod, nom, ed);

    // inicializar sus notas en 0
    for (int i = 0; i < numEval; i++)
        notas[totalEstudiantes][i] = 0;

    totalEstudiantes++;
    cout << "Estudiante registrado con exito.\n";
}

// Mostrar todos los estudiantes
void mostrarEstudiantes() {
    if (totalEstudiantes == 0) {
        cout << "No hay estudiantes registrados.\n";
        return;
    }

    cout << "\n--- Lista de estudiantes ---\n";
    for (int i = 0; i < totalEstudiantes; i++) {
        cout << i + 1 << ". ";
        lista[i].mostrar();
    }
}

// Buscar estudiante por cdoigo
int buscarPorCodigo(string codigo) {
    for (int i = 0; i < totalEstudiantes; i++) {
        if (lista[i].getCodigo() == codigo)
            return i;
    }
    return -1;
}

void buscarEstudiante() {
    string cod;
    cout << "Ingrese el codigo a buscar: ";
    cin >> cod;

    int pos = buscarPorCodigo(cod);

    if (pos == -1) cout << "Estudiante NO encontrado.\n";
    else lista[pos].mostrar();
}

// Asignar o actualizar notas
void asignarNotas() {
    string cod;
    cout << "Ingrese codigo del estudiante: ";
    cin >> cod;

    int pos = buscarPorCodigo(cod);
    if (pos == -1) {
        cout << "No existe ese estudiante.\n";
        return;
    }

    cout << "Asignando notas a " << lista[pos].getNombre() << endl;
    for (int i = 0; i < numEval; i++) {
        cout << "Nota " << (i + 1) << ": ";
        cin >> notas[pos][i];

        if (notas[pos][i] < 0 || notas[pos][i] > 5) {
            cout << "Nota invalida (0 a 5). Se asigna 0.\n";
            notas[pos][i] = 0;
        }
    }

    cout << "Notas actualizadas.\n";
}

// Mostrar promedio
void mostrarPromedio() {
    string cod;
    cout << "Ingrese codigo del estudiante: ";
    cin >> cod;

    int pos = buscarPorCodigo(cod);
    if (pos == -1) {
        cout << "No existe ese estudiante.\n";
        return;
    }

    float suma = 0;
    for (int i = 0; i < numEval; i++)
        suma += notas[pos][i];

    float promedio = suma / numEval;

    cout << "Promedio de " << lista[pos].getNombre()
         << " es: " << promedio << endl;
}

// Mostrar matriz de notas
void mostrarMatrizNotas() {
    cout << "\n--- Matriz de notas ---\n";
    for (int i = 0; i < totalEstudiantes; i++) {
        cout << lista[i].getCodigo() << ": ";
        for (int j = 0; j < numEval; j++) {
            cout << notas[i][j] << " ";
        }
        cout << endl;
    }
}

//              MENU
int main() {
    int opcion;

    cout << "  Bienvenido al Sistema Academico\n";

    do {
        cout << "\n--- MENU PRINCIPAL ---\n";
        cout << "1. Registrar estudiante\n";
        cout << "2. Mostrar estudiantes\n";
        cout << "3. Buscar estudiante por codigo\n";
        cout << "4. Asignar / actualizar notas\n";
        cout << "5. Mostrar promedio de un estudiante\n";
        cout << "6. Mostrar matriz de notas\n";
        cout << "7. Salir\n";
        cout << "Ingrese opcion: ";
        cin >> opcion;

        if (opcion == 1) registrarEstudiante();
        else if (opcion == 2) mostrarEstudiantes();
        else if (opcion == 3) buscarEstudiante();
        else if (opcion == 4) asignarNotas();
        else if (opcion == 5) mostrarPromedio();
        else if (opcion == 6) mostrarMatrizNotas();
        else if (opcion == 7) cout << "Saliendo del sistema...\n";
        else cout << "Opcion invalida.\n";

    } while (opcion != 7);

    return 0;
}